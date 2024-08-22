// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDFETCHUSERPRIVACYSETTINGSOPERATION_H
#define CKDFETCHUSERPRIVACYSETTINGSOPERATION_H



#import "CKDOperation.h"

@interface CKDFetchUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) NSInteger discoverable; // ivar: _discoverable


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_handleRetrievedPrivacySettings:(id)arg0 ;
-(void)main;


@end


#endif