// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMLEGACYRESTRICTIONSAPPSDECLARATION_H
#define CEMLEGACYRESTRICTIONSAPPSDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMLegacyRestrictionsAppsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowChat; // ivar: _payloadAllowChat
@property (copy, nonatomic) NSNumber *payloadAllowGroupActivity; // ivar: _payloadAllowGroupActivity
@property (copy, nonatomic) NSNumber *payloadAllowNews; // ivar: _payloadAllowNews
@property (copy, nonatomic) NSNumber *payloadAllowPodcasts; // ivar: _payloadAllowPodcasts
@property (copy, nonatomic) NSNumber *payloadAllowSafari; // ivar: _payloadAllowSafari
@property (copy, nonatomic) NSNumber *payloadAllowVideoConferencing; // ivar: _payloadAllowVideoConferencing
@property (copy, nonatomic) NSNumber *payloadAllowiTunes; // ivar: _payloadAllowiTunes
@property (copy, nonatomic) NSArray *payloadBlacklistedAppBundleIDs; // ivar: _payloadBlacklistedAppBundleIDs
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowChat:(id)arg1 withAllowiTunes:(id)arg2 withAllowNews:(id)arg3 withAllowPodcasts:(id)arg4 withAllowSafari:(id)arg5 withAllowVideoConferencing:(id)arg6 withBlacklistedAppBundleIDs:(id)arg7 withAllowCopresence:(id)arg8 ;
+(id)buildWithIdentifier:(id)arg0 withAllowChat:(id)arg1 withAllowiTunes:(id)arg2 withAllowNews:(id)arg3 withAllowPodcasts:(id)arg4 withAllowSafari:(id)arg5 withAllowVideoConferencing:(id)arg6 withBlacklistedAppBundleIDs:(id)arg7 withAllowGroupActivity:(id)arg8 ;
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