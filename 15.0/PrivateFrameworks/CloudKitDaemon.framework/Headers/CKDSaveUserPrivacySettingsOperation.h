// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDSAVEUSERPRIVACYSETTINGSOPERATION_H
#define CKDSAVEUSERPRIVACYSETTINGSOPERATION_H



#import "CKDOperation.h"

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) NSInteger discoverable; // ivar: _discoverable


+(NSInteger)isPredominatelyDownload;
-(BOOL)shouldCheckAppVersion;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)main;


@end


#endif