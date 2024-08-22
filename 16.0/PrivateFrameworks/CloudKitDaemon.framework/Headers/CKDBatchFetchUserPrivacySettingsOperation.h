// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDBATCHFETCHUSERPRIVACYSETTINGSOPERATION_H
#define CKDBATCHFETCHUSERPRIVACYSETTINGSOPERATION_H

@class NSArray;


#import "CKDOperation.h"

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings; // ivar: _containerPrivacySettings


+(id)appPermissionGroupsFromContainerPrivacySettings:(id)arg0 ;
-(BOOL)shouldCheckAppVersion;
-(id)activityCreate;
-(int)operationType;
-(void)main;


@end


#endif