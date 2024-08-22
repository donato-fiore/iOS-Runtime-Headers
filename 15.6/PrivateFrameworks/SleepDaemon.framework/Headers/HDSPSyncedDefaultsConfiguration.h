// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSYNCEDDEFAULTSCONFIGURATION_H
#define HDSPSYNCEDDEFAULTSCONFIGURATION_H

@class NSDictionary, NSSet, NSArray;

#import <Foundation/Foundation.h>

#import "HDSPSyncedDefaultsVersionInfo.h"

@interface HDSPSyncedDefaultsConfiguration : NSObject {
    NSDictionary *_keySetMap;
}


@property (readonly, nonatomic) NSSet *allKeysToPersist;
@property (readonly, nonatomic) NSSet *allKeysToSync;
@property (readonly, nonatomic) NSDictionary *allPerGizmoDefaultValues;
@property (readonly, nonatomic) NSSet *allPerGizmoKeys;
@property (readonly, nonatomic) NSArray *keySets;
@property (readonly, nonatomic) HDSPSyncedDefaultsVersionInfo *versionInfo; // ivar: _versionInfo


-(BOOL)shouldPersistKey:(id)arg0 ;
-(BOOL)shouldSyncKey:(id)arg0 ;
// -(id)_accumulateKeysWithBlock:(id)arg0 includeVersionInfo:(unk)arg1  ;
-(id)_createKeySetMapForKeySets:(id)arg0 ;
-(id)_keySetForKey:(id)arg0 ;
-(id)filteredKeySetsWithKeysToSync:(id)arg0 ;
-(id)initWithVersionInfo:(id)arg0 keySets:(id)arg1 ;
-(id)keySetForIdentifier:(id)arg0 ;


@end


#endif