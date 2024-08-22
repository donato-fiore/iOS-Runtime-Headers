// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSYSTEMWEBDECLARATION_H
#define CEMSYSTEMWEBDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemWebDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadForceAuthenticationBeforeAutoFill; // ivar: _payloadForceAuthenticationBeforeAutoFill
@property (copy, nonatomic) NSNumber *payloadForceLimitAdTracking; // ivar: _payloadForceLimitAdTracking
@property (copy, nonatomic) NSNumber *payloadSafariAcceptCookies; // ivar: _payloadSafariAcceptCookies
@property (copy, nonatomic) NSNumber *payloadSafariAllowAutoFill; // ivar: _payloadSafariAllowAutoFill
@property (copy, nonatomic) NSNumber *payloadSafariAllowJavaScript; // ivar: _payloadSafariAllowJavaScript
@property (copy, nonatomic) NSNumber *payloadSafariAllowPopups; // ivar: _payloadSafariAllowPopups
@property (copy, nonatomic) NSNumber *payloadSafariForceFraudWarning; // ivar: _payloadSafariForceFraudWarning
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withForceLimitAdTracking:(id)arg1 withSafariAllowAutoFill:(id)arg2 withSafariForceFraudWarning:(id)arg3 withSafariAllowJavaScript:(id)arg4 withSafariAllowPopups:(id)arg5 withSafariAcceptCookies:(id)arg6 withForceAuthenticationBeforeAutoFill:(id)arg7 ;
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