// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKCELLULARDECLARATION_H
#define CEMNETWORKCELLULARDECLARATION_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMNetworkCellularDeclaration_AttachAPN.h"

@interface CEMNetworkCellularDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *payloadAPNs; // ivar: _payloadAPNs
@property (copy, nonatomic) CEMNetworkCellularDeclaration_AttachAPN *payloadAttachAPN; // ivar: _payloadAttachAPN
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAttachAPN:(id)arg1 withAPNs:(id)arg2 ;
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