// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDRESETUSERPRIVACYSETTINGSURLREQUEST_H
#define CKDRESETUSERPRIVACYSETTINGSURLREQUEST_H



#import "CKDURLRequest.h"

@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest



-(BOOL)requiresTokenRegistration;
-(NSInteger)databaseScope;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif