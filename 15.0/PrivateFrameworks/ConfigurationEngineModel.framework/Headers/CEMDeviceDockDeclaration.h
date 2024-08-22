// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICEDOCKDECLARATION_H
#define CEMDEVICEDOCKDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMDeviceDockDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowDockFixupOverride; // ivar: _payloadAllowDockFixupOverride
@property (copy, nonatomic) NSNumber *payloadAutohide; // ivar: _payloadAutohide
@property (copy, nonatomic) NSNumber *payloadAutohideImmutable; // ivar: _payloadAutohideImmutable
@property (copy, nonatomic) NSNumber *payloadContentsImmutable; // ivar: _payloadContentsImmutable
@property (copy, nonatomic) NSNumber *payloadDblclickbehaviorImmutable; // ivar: _payloadDblclickbehaviorImmutable
@property (copy, nonatomic) NSNumber *payloadLargesize; // ivar: _payloadLargesize
@property (copy, nonatomic) NSNumber *payloadLaunchanim; // ivar: _payloadLaunchanim
@property (copy, nonatomic) NSNumber *payloadLaunchanimImmutable; // ivar: _payloadLaunchanimImmutable
@property (copy, nonatomic) NSArray *payloadMCXDockSpecialFolders; // ivar: _payloadMCXDockSpecialFolders
@property (copy, nonatomic) NSNumber *payloadMagnification; // ivar: _payloadMagnification
@property (copy, nonatomic) NSNumber *payloadMagnifyImmutable; // ivar: _payloadMagnifyImmutable
@property (copy, nonatomic) NSNumber *payloadMagsizeImmutable; // ivar: _payloadMagsizeImmutable
@property (copy, nonatomic) NSString *payloadMineffect; // ivar: _payloadMineffect
@property (copy, nonatomic) NSNumber *payloadMineffectImmutable; // ivar: _payloadMineffectImmutable
@property (copy, nonatomic) NSNumber *payloadMinimizeToApplication; // ivar: _payloadMinimizeToApplication
@property (copy, nonatomic) NSNumber *payloadMinimizeToApplicationImmutable; // ivar: _payloadMinimizeToApplicationImmutable
@property (copy, nonatomic) NSString *payloadOrientation; // ivar: _payloadOrientation
@property (copy, nonatomic) NSNumber *payloadPositionImmutable; // ivar: _payloadPositionImmutable
@property (copy, nonatomic) NSNumber *payloadShowProcessIndicators; // ivar: _payloadShowProcessIndicators
@property (copy, nonatomic) NSNumber *payloadShowRecents; // ivar: _payloadShowRecents
@property (copy, nonatomic) NSNumber *payloadShowindicatorsImmutable; // ivar: _payloadShowindicatorsImmutable
@property (copy, nonatomic) NSNumber *payloadSizeImmutable; // ivar: _payloadSizeImmutable
@property (copy, nonatomic) NSArray *payloadStaticApps; // ivar: _payloadStaticApps
@property (copy, nonatomic) NSNumber *payloadStaticOnly; // ivar: _payloadStaticOnly
@property (copy, nonatomic) NSArray *payloadStaticOthers; // ivar: _payloadStaticOthers
@property (copy, nonatomic) NSNumber *payloadTilesize; // ivar: _payloadTilesize
@property (copy, nonatomic) NSNumber *payloadWindowtabbingImmutable; // ivar: _payloadWindowtabbingImmutable
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withOrientation:(id)arg1 withPositionImmutable:(id)arg2 withAutohide:(id)arg3 withAutohideImmutable:(id)arg4 withMinimizeToApplication:(id)arg5 withMinimizeToApplicationImmutable:(id)arg6 withMagnification:(id)arg7 withMagnifyImmutable:(id)arg8 withLargesize:(id)arg9 withMagsizeImmutable:(id)arg10 withShowProcessIndicators:(id)arg11 withLaunchanim:(id)arg12 withLaunchanimImmutable:(id)arg13 withMineffect:(id)arg14 withMineffectImmutable:(id)arg15 withTilesize:(id)arg16 withSizeImmutable:(id)arg17 withMCXDockSpecialFolders:(id)arg18 withAllowDockFixupOverride:(id)arg19 withStaticOnly:(id)arg20 withStaticOthers:(id)arg21 withStaticApps:(id)arg22 withContentsImmutable:(id)arg23 withWindowtabbingImmutable:(id)arg24 withDblclickbehaviorImmutable:(id)arg25 withShowindicatorsImmutable:(id)arg26 withShowRecents:(id)arg27 ;
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