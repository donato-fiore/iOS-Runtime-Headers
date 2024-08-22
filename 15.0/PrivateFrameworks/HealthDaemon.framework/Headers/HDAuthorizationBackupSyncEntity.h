// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDAUTHORIZATIONBACKUPSYNCENTITY_H
#define HDAUTHORIZATIONBACKUPSYNCENTITY_H



#import "HDAuthorizationSyncEntity.h"

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity



+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(NSInteger)receiveSyncObjects:(id)arg0 syncStore:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)authorizationBackupPullIdentifierWithSyncStore:(id)arg0 ;
+(id)authorizationBackupPushIdentifierWithSyncStore:(id)arg0 ;
+(id)backupInfoUserDefaultsKey;
+(id)createCodableSourceAuthorizationWithSource:(id)arg0 syncSession:(id)arg1 ;
+(id)excludedSyncStoresForSession:(id)arg0 ;
+(id)syncEntityIdentifier;
+(void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg0 ;
+(void)resetAuthorizationBackupIdentifiers;
+(void)setAuthorizationBackupPushIdentifier:(id)arg0 syncStore:(id)arg1 ;


@end


#endif