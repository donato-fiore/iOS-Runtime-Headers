// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMXSANSETTINGSDECLARATION_H
#define CEMSYSTEMXSANSETTINGSDECLARATION_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemXsanSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *payloadFsnameservers; // ivar: _payloadFsnameservers
@property (copy, nonatomic) NSString *payloadSanAuthMethod; // ivar: _payloadSanAuthMethod
@property (copy, nonatomic) NSArray *payloadSanConfigURLs; // ivar: _payloadSanConfigURLs
@property (copy, nonatomic) NSString *payloadSanName; // ivar: _payloadSanName
@property (copy, nonatomic) NSString *payloadSharedSecret; // ivar: _payloadSharedSecret
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withSanName:(id)arg1 withSanConfigURLs:(id)arg2 withFsnameservers:(id)arg3 withSharedSecret:(id)arg4 ;
+(id)buildWithIdentifier:(id)arg0 withSanName:(id)arg1 withSanConfigURLs:(id)arg2 withFsnameservers:(id)arg3 withSanAuthMethod:(id)arg4 withSharedSecret:(id)arg5 ;
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