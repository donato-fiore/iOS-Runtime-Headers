// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKVPNAPPLAYERDECLARATION_H
#define CEMNETWORKVPNAPPLAYERDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadOnDemandMatchAppEnabled; // ivar: _payloadOnDemandMatchAppEnabled
@property (copy, nonatomic) NSString *payloadProviderType; // ivar: _payloadProviderType
@property (copy, nonatomic) NSArray *payloadSMBDomains; // ivar: _payloadSMBDomains
@property (copy, nonatomic) NSArray *payloadSafariDomains; // ivar: _payloadSafariDomains
@property (copy, nonatomic) NSString *payloadVPNUUID; // ivar: _payloadVPNUUID
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withVPNUUID:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withVPNUUID:(id)arg1 withSafariDomains:(id)arg2 withOnDemandMatchAppEnabled:(id)arg3 withSMBDomains:(id)arg4 withProviderType:(id)arg5 ;
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