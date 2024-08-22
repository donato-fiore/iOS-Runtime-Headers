// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELACCOUNTEXCHANGEDECLARATION_OAUTH_H
#define RMMODELACCOUNTEXCHANGEDECLARATION_OAUTH_H

@class NSNumber, NSString;


#import "RMModelPayloadBase.h"

@interface RMModelAccountExchangeDeclaration_OAuth : RMModelPayloadBase

@property (copy, nonatomic) NSNumber *payloadEnabled; // ivar: _payloadEnabled
@property (copy, nonatomic) NSString *payloadSignInURL; // ivar: _payloadSignInURL
@property (copy, nonatomic) NSString *payloadTokenRequestURL; // ivar: _payloadTokenRequestURL


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithEnabled:(id)arg0 ;
+(id)buildWithEnabled:(id)arg0 signInURL:(id)arg1 tokenRequestURL:(id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif