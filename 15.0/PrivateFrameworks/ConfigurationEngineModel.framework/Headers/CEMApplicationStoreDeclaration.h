// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMAPPLICATIONSTOREDECLARATION_H
#define CEMAPPLICATIONSTOREDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMApplicationStoreDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAppClips; // ivar: _payloadAllowAppClips
@property (copy, nonatomic) NSNumber *payloadAllowAppInstallation; // ivar: _payloadAllowAppInstallation
@property (copy, nonatomic) NSNumber *payloadAllowAppRemoval; // ivar: _payloadAllowAppRemoval
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppDownloads; // ivar: _payloadAllowAutomaticAppDownloads
@property (copy, nonatomic) NSNumber *payloadAllowInAppPurchases; // ivar: _payloadAllowInAppPurchases
@property (copy, nonatomic) NSNumber *payloadAllowSystemAppRemoval; // ivar: _payloadAllowSystemAppRemoval
@property (copy, nonatomic) NSNumber *payloadAllowUIAppInstallation; // ivar: _payloadAllowUIAppInstallation
@property (copy, nonatomic) NSNumber *payloadForceITunesStorePasswordEntry; // ivar: _payloadForceITunesStorePasswordEntry
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowAppInstallation:(id)arg1 withAllowAppClips:(id)arg2 withAllowUIAppInstallation:(id)arg3 withAllowAutomaticAppDownloads:(id)arg4 withAllowSystemAppRemoval:(id)arg5 withAllowAppRemoval:(id)arg6 withAllowInAppPurchases:(id)arg7 withForceITunesStorePasswordEntry:(id)arg8 ;
+(id)buildWithIdentifier:(id)arg0 withAllowAppInstallation:(id)arg1 withAllowUIAppInstallation:(id)arg2 withAllowAutomaticAppDownloads:(id)arg3 withAllowSystemAppRemoval:(id)arg4 withAllowAppRemoval:(id)arg5 withAllowInAppPurchases:(id)arg6 withForceITunesStorePasswordEntry:(id)arg7 ;
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