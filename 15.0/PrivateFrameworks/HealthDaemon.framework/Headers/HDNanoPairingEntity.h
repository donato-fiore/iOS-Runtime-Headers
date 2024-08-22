// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDNANOPAIRINGENTITY_H
#define HDNANOPAIRINGENTITY_H

@class NSUUID, NSString;


#import "HDHealthEntity.h"
#import "HDNanoPairingEntity.h"

@interface HDNanoPairingEntity : HDHealthEntity {
    NSUUID *_nanoRegistryUUID;
    NSInteger _syncProvenance;
    HDNanoPairingEntity *_entity;
}


@property (copy, nonatomic) NSString *defaultSourceBundleIdentifier; // ivar: _defaultSourceBundleIdentifier
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) NSUUID *healthDatabaseUUID; // ivar: _healthDatabaseUUID
@property (readonly, copy, nonatomic) NSUUID *nanoRegistryUUID;
@property (copy, nonatomic) NSUUID *persistentUUID; // ivar: _persistentUUID
@property (nonatomic, getter=isRestoreComplete) BOOL restoreComplete; // ivar: _restoreComplete
@property (readonly, nonatomic) NSInteger syncProvenance;


+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)nanoPairingEntityWithRegistryUUID:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)nanoPairingEntityWithRegistryUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)sourceEntityForRegistryUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)saveWithHealthDatabase:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)resetProvenanceForProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif