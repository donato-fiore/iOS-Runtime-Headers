// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELUSERNAMEANDPASSWORDCREDENTIALSDECLARATION_H
#define RMMODELUSERNAMEANDPASSWORDCREDENTIALSDECLARATION_H

@class NSString;


#import "RMModelPayloadBase.h"

@interface RMModelUserNameAndPasswordCredentialsDeclaration : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSString *payloadUserName; // ivar: _payloadUserName


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithUserName:(id)arg0 ;
+(id)buildWithUserName:(id)arg0 password:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif