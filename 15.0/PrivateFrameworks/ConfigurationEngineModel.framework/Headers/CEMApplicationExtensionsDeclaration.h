// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMAPPLICATIONEXTENSIONSDECLARATION_H
#define CEMAPPLICATIONEXTENSIONSDECLARATION_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMApplicationExtensionsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *payloadAllowedExtensions; // ivar: _payloadAllowedExtensions
@property (copy, nonatomic) NSArray *payloadDeniedExtensionPoints; // ivar: _payloadDeniedExtensionPoints
@property (copy, nonatomic) NSArray *payloadDeniedExtensions; // ivar: _payloadDeniedExtensions
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowedExtensions:(id)arg1 withDeniedExtensions:(id)arg2 withDeniedExtensionPoints:(id)arg3 ;
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