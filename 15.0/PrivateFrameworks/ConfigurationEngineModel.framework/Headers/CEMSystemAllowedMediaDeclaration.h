// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSYSTEMALLOWEDMEDIADECLARATION_H
#define CEMSYSTEMALLOWEDMEDIADECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMSystemAllowedMediaDeclaration_MediaItems.h"

@interface CEMSystemAllowedMediaDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadLogoutEject; // ivar: _payloadLogoutEject
@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadMountControls; // ivar: _payloadMountControls
@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadUnmountControls; // ivar: _payloadUnmountControls
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withLogoutEject:(id)arg1 withMountControls:(id)arg2 withUnmountControls:(id)arg3 ;
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