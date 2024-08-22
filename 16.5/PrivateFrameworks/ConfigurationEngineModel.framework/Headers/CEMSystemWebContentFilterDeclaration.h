// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMWEBCONTENTFILTERDECLARATION_H
#define CEMSYSTEMWEBCONTENTFILTERDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMAnyPayload.h"

@interface CEMSystemWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAutoFilterEnabled; // ivar: _payloadAutoFilterEnabled
@property (copy, nonatomic) NSArray *payloadBlacklistedURLs; // ivar: _payloadBlacklistedURLs
@property (copy, nonatomic) NSString *payloadCertificate; // ivar: _payloadCertificate
@property (copy, nonatomic) NSNumber *payloadFilterBrowsers; // ivar: _payloadFilterBrowsers
@property (copy, nonatomic) NSNumber *payloadFilterSockets; // ivar: _payloadFilterSockets
@property (copy, nonatomic) NSString *payloadFilterType; // ivar: _payloadFilterType
@property (copy, nonatomic) NSString *payloadOrganization; // ivar: _payloadOrganization
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSArray *payloadPermittedURLs; // ivar: _payloadPermittedURLs
@property (copy, nonatomic) NSString *payloadPluginBundleID; // ivar: _payloadPluginBundleID
@property (copy, nonatomic) NSString *payloadServerAddress; // ivar: _payloadServerAddress
@property (copy, nonatomic) NSString *payloadUserDefinedName; // ivar: _payloadUserDefinedName
@property (copy, nonatomic) NSString *payloadUserName; // ivar: _payloadUserName
@property (copy, nonatomic) CEMAnyPayload *payloadVendorConfig; // ivar: _payloadVendorConfig
@property (copy, nonatomic) NSArray *payloadWhitelistedBookmarks; // ivar: _payloadWhitelistedBookmarks
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withFilterType:(id)arg1 withAutoFilterEnabled:(id)arg2 withPermittedURLs:(id)arg3 withBlacklistedURLs:(id)arg4 withWhitelistedBookmarks:(id)arg5 withUserDefinedName:(id)arg6 withPluginBundleID:(id)arg7 withServerAddress:(id)arg8 withUserName:(id)arg9 withPassword:(id)arg10 withCertificate:(id)arg11 withOrganization:(id)arg12 withVendorConfig:(id)arg13 withFilterBrowsers:(id)arg14 withFilterSockets:(id)arg15 ;
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