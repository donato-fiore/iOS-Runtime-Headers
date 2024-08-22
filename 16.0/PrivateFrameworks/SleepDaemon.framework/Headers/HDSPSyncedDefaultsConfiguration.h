// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSYNCEDDEFAULTSCONFIGURATION_H
#define HDSPSYNCEDDEFAULTSCONFIGURATION_H

@class NSDictionary, NSSet, NSArray;

#import <Foundation/Foundation.h>

#import "HDSPSyncedDefaultsInfo.h"

@interface HDSPSyncedDefaultsConfiguration : NSObject {
    NSDictionary *_keySetMap;
}


@property (readonly, nonatomic) NSDictionary *allDefaultValues;
@property (readonly, nonatomic) NSSet *allKeysToPersist;
@property (readonly, nonatomic) NSSet *allKeysToSync;
@property (readonly, nonatomic) NSSet *allPerGizmoKeys;
@property (readonly, nonatomic) HDSPSyncedDefaultsInfo *info; // ivar: _info
@property (readonly, nonatomic) NSArray *keySets;


-(BOOL)shouldPersistKey:(id)arg0 ;
-(BOOL)shouldSyncKey:(id)arg0 ;
// -(id)_accumulateKeysWithBlock:(id)arg0 includeVersionInfo:(unk)arg1 isForSync:(BOOL)arg2  ;
-(id)_createKeySetMapForKeySets:(id)arg0 ;
-(id)_keySetForKey:(id)arg0 ;
-(id)filteredKeySetsWithKeysToSync:(id)arg0 ;
-(id)initWithInfo:(id)arg0 keySets:(id)arg1 ;
-(id)keySetForIdentifier:(id)arg0 ;


@end


#endif