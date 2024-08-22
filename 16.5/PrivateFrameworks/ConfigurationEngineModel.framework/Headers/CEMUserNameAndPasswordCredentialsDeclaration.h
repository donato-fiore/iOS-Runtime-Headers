// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMUSERNAMEANDPASSWORDCREDENTIALSDECLARATION_H
#define CEMUSERNAMEANDPASSWORDCREDENTIALSDECLARATION_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMUserNameAndPasswordCredentialsDeclaration : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSString *payloadUserName; // ivar: _payloadUserName


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithUserName:(id)arg0 withPassword:(id)arg1 ;
+(id)buildWithUserName:(id)arg0 withPassword:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif