// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLOBJECTSNAPSHOT_H
#define PLOBJECTSNAPSHOT_H

@class NSKnownKeysDictionary;

#import <Foundation/Foundation.h>

#import "PLManagedObject.h"

@interface PLObjectSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshotValues;
    *__CFDictionary _indexMaps;
}


@property (readonly, nonatomic) PLManagedObject *managedObject; // ivar: _managedObject


+(id)snapshotForManagedObject:(id)arg0 changeNotificationCenter:(id)arg1 useCommitedValues:(BOOL)arg2 ;
+(struct __CFDictionary *)_createIndexMapsSnapshotForManagedObject:(id)arg0 changeNotificationCenter:(id)arg1 ;
-(BOOL)hasSnapshotValueForProperty:(id)arg0 ;
-(id)_allSnapshotValuesDescription;
-(id)_snapshotValueForProperty:(id)arg0 ;
-(id)description;
-(id)filteredIndexesForFilter:(id)arg0 ;
-(id)indexMapStateForDerivedObject:(id)arg0 ;
-(id)init;
-(id)initWithManagedObject:(id)arg0 properties:(id)arg1 toOneRelationships:(id)arg2 indexMaps:(struct __CFDictionary *)arg3 useCommitedValues:(BOOL)arg4 ;
-(id)snapshotValueForProperty:(id)arg0 ;
-(void)dealloc;
-(void)setAssetsSnapshot:(id)arg0 ;


@end


#endif