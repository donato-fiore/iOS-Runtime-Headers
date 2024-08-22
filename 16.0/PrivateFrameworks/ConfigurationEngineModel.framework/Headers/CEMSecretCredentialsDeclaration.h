// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSECRETCREDENTIALSDECLARATION_H
#define CEMSECRETCREDENTIALSDECLARATION_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadSecret; // ivar: _payloadSecret


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithSecret:(id)arg0 ;
+(id)buildWithSecret:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif