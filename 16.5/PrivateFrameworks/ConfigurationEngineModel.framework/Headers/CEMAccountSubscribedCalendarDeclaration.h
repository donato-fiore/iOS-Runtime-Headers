// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMACCOUNTSUBSCRIBEDCALENDARDECLARATION_H
#define CEMACCOUNTSUBSCRIBEDCALENDARDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMAccountSubscribedCalendarDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadSubCalAccountCredentials; // ivar: _payloadSubCalAccountCredentials
@property (copy, nonatomic) NSString *payloadSubCalAccountDescription; // ivar: _payloadSubCalAccountDescription
@property (copy, nonatomic) NSString *payloadSubCalAccountHostName; // ivar: _payloadSubCalAccountHostName
@property (copy, nonatomic) NSNumber *payloadSubCalAccountUseSSL; // ivar: _payloadSubCalAccountUseSSL
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withSubCalAccountHostName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withSubCalAccountDescription:(id)arg1 withSubCalAccountHostName:(id)arg2 withSubCalAccountUseSSL:(id)arg3 withSubCalAccountCredentials:(id)arg4 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif