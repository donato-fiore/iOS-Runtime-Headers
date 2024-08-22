// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSYSTEMMUSICDECLARATION_H
#define CEMSYSTEMMUSICDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemMusicDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowMusicArtistActivity; // ivar: _payloadAllowMusicArtistActivity
@property (copy, nonatomic) NSNumber *payloadAllowMusicService; // ivar: _payloadAllowMusicService
@property (copy, nonatomic) NSNumber *payloadAllowMusicVideos; // ivar: _payloadAllowMusicVideos
@property (copy, nonatomic) NSNumber *payloadAllowRadioService; // ivar: _payloadAllowRadioService
@property (copy, nonatomic) NSNumber *payloadAllowSharedLibraries; // ivar: _payloadAllowSharedLibraries
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowMusicService:(id)arg1 withAllowRadioService:(id)arg2 withAllowMusicArtistActivity:(id)arg3 withAllowMusicVideos:(id)arg4 ;
+(id)buildWithIdentifier:(id)arg0 withAllowMusicService:(id)arg1 withAllowRadioService:(id)arg2 withAllowMusicArtistActivity:(id)arg3 withAllowMusicVideos:(id)arg4 withAllowSharedLibraries:(id)arg5 ;
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