// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSYSTEMGAMECENTERDECLARATION_H
#define CEMSYSTEMGAMECENTERDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAddingGameCenterFriends; // ivar: _payloadAllowAddingGameCenterFriends
@property (copy, nonatomic) NSNumber *payloadAllowGameCenter; // ivar: _payloadAllowGameCenter
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterFriendsSharingModification; // ivar: _payloadAllowGameCenterFriendsSharingModification
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterNearbyMultiplayer; // ivar: _payloadAllowGameCenterNearbyMultiplayer
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterPrivateMessaging; // ivar: _payloadAllowGameCenterPrivateMessaging
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterProfileModification; // ivar: _payloadAllowGameCenterProfileModification
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterProfilePrivacyModification; // ivar: _payloadAllowGameCenterProfilePrivacyModification
@property (copy, nonatomic) NSNumber *payloadAllowMultiplayerGaming; // ivar: _payloadAllowMultiplayerGaming
@property (copy, nonatomic) NSNumber *payloadAllowedGameCenterOtherPlayerTypes; // ivar: _payloadAllowedGameCenterOtherPlayerTypes
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowGameCenter:(id)arg1 withAllowMultiplayerGaming:(id)arg2 withAllowAddingGameCenterFriends:(id)arg3 withAllowGameCenterNearbyMultiplayer:(id)arg4 withAllowGameCenterPrivateMessaging:(id)arg5 withAllowGameCenterProfilePrivacyModification:(id)arg6 withAllowGameCenterProfileModification:(id)arg7 withAllowedGameCenterOtherPlayerTypes:(id)arg8 ;
+(id)buildWithIdentifier:(id)arg0 withAllowGameCenter:(id)arg1 withAllowMultiplayerGaming:(id)arg2 withAllowAddingGameCenterFriends:(id)arg3 withAllowGameCenterNearbyMultiplayer:(id)arg4 withAllowGameCenterPrivateMessaging:(id)arg5 withAllowGameCenterProfilePrivacyModification:(id)arg6 withAllowGameCenterProfileModification:(id)arg7 withAllowedGameCenterOtherPlayerTypes:(id)arg8 withAllowGameCenterFriendsSharingModification:(id)arg9 ;
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