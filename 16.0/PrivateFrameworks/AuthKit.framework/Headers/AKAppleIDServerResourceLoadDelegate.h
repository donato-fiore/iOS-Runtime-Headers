// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAPPLEIDSERVERRESOURCELOADDELEGATE_H
#define AKAPPLEIDSERVERRESOURCELOADDELEGATE_H

@class NSDictionary, NSString, NSNumber, NSArray;
@protocol NSSecureCoding, AKAnisetteServiceProtocol;

#import <Foundation/Foundation.h>

#import "AKAnisetteProvisioningController.h"
#import "AKAppleIDAuthenticationContext.h"
#import "AKDevice.h"
#import "AKAnisetteData.h"
#import "AKAttestationData.h"

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding>

 {
    AKAnisetteProvisioningController *_proxiedProvisioningController;
    NSDictionary *_continuationHeaders;
    AKAppleIDAuthenticationContext *_context;
}


@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSObject<AKAnisetteServiceProtocol> *anisetteDataProvider; // ivar: _anisetteDataProvider
@property (copy, nonatomic) NSString *appProvidedContext; // ivar: _appProvidedContext
@property (copy, nonatomic) NSString *bagUrlKey; // ivar: _bagUrlKey
@property (nonatomic) BOOL cliMode; // ivar: _cliMode
@property (copy, nonatomic) NSString *clientAppName; // ivar: _clientAppName
@property (copy, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (copy, nonatomic) NSString *continuationToken; // ivar: _continuationToken
@property (copy, nonatomic) NSString *continuityIDMSData; // ivar: _continuityIDMSData
@property (copy, nonatomic) NSString *custodianRecoveryToken; // ivar: _custodianRecoveryToken
@property (copy, nonatomic) NSString *dataCenterIdentifier; // ivar: _dataCenterIdentifier
@property (copy, nonatomic) NSString *followupItems; // ivar: _followupItems
@property (retain, nonatomic) NSNumber *hasEmptyPasswordOverride; // ivar: _hasEmptyPasswordOverride
@property (copy, nonatomic) NSString *heartbeatToken; // ivar: _heartbeatToken
@property (copy, nonatomic) NSString *identityToken; // ivar: _identityToken
@property (copy, nonatomic) NSString *initialURLRequestKey; // ivar: _initialURLRequestKey
@property (copy, nonatomic) NSArray *loggedInServices; // ivar: _loggedInServices
@property (copy, nonatomic) NSString *passwordResetToken; // ivar: _passwordResetToken
@property (copy, nonatomic) NSArray *phoneInformation; // ivar: _phoneInformation
@property (copy, nonatomic) NSString *phoneNumberCertificate; // ivar: _phoneNumberCertificate
@property (copy, nonatomic) NSString *privateEmailBundleId; // ivar: _privateEmailBundleId
@property (copy, nonatomic) NSString *privateEmailDomain; // ivar: _privateEmailDomain
@property (retain, nonatomic) NSString *proxiedAltDSID; // ivar: _proxiedAltDSID
@property (retain, nonatomic) AKDevice *proxiedDevice; // ivar: _proxiedDevice
@property (retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // ivar: _proxiedDeviceAnisetteData
@property (retain, nonatomic) AKAttestationData *proxiedDeviceAttestationData; // ivar: _proxiedDeviceAttestationData
@property (retain, nonatomic) NSString *proxiedIdentityToken; // ivar: _proxiedIdentityToken
@property (copy, nonatomic) NSString *proxyAppName; // ivar: _proxyAppName
@property (copy, nonatomic) NSString *securityUpgradeContext; // ivar: _securityUpgradeContext
@property (copy, nonatomic) NSString *serviceToken; // ivar: _serviceToken
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (nonatomic) BOOL shouldOfferSecurityUpgrade; // ivar: _shouldOfferSecurityUpgrade
@property (nonatomic) BOOL shouldSendAbsintheHeader;
@property (nonatomic) BOOL shouldSendEphemeralAuthHeader; // ivar: _shouldSendEphemeralAuthHeader
@property (nonatomic) BOOL shouldSendICSCIntentHeader; // ivar: _shouldSendICSCIntentHeader
@property (nonatomic) BOOL shouldSendLocalUserHasAppleIDLoginHeader; // ivar: _shouldSendLocalUserHasAppleIDLoginHeader
@property (nonatomic) BOOL shouldSendPhoneNumber; // ivar: _shouldSendPhoneNumber
@property (nonatomic) BOOL shouldSendSigningHeaders; // ivar: _shouldSendSigningHeaders


+(BOOL)supportsSecureCoding;
+(NSUInteger)signalFromServerResponse:(id)arg0 ;
+(id)sharedController;
-(BOOL)_isResponseSuccessful:(id)arg0 ;
-(BOOL)isAuthenticationRequired:(id)arg0 ;
-(BOOL)isResponseActionable:(id)arg0 ;
-(BOOL)isResponseCompleteAndConflict:(id)arg0 ;
-(BOOL)isResponseFinal:(id)arg0 ;
-(BOOL)isResponseFinalForHSA2ServerFlow:(id)arg0 ;
-(id)_fetchApplicationNameForBundleId:(id)arg0 ;
-(id)_proxiedProvisioningController;
-(id)_retrieveAndResetContinuationHeaders;
-(id)initWithAltDSID:(id)arg0 identityToken:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)signingController;
-(void)_harvestContinuationHeadersFromHeaders:(id)arg0 ;
-(void)_signRequest:(id)arg0 ;
-(void)_signRequestWithBAAHeaders:(id)arg0 ;
-(void)_signWithFeatureOptInHeaders:(id)arg0 ;
-(void)_signWithProxiedDeviceHeaders:(id)arg0 ;
-(void)decorateWithContext:(id)arg0 ;
-(void)decorateWithPrivateEmailContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)processResponse:(id)arg0 ;
-(void)signRequest:(id)arg0 ;
-(void)signRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)signRequestWithBasicHeaders:(id)arg0 ;
-(void)signRequestWithCommonHeaders:(id)arg0 ;
-(void)updateWithAuthResults:(id)arg0 ;


@end


#endif