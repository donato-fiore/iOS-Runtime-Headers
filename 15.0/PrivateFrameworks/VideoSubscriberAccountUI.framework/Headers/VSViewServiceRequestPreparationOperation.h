// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSVIEWSERVICEREQUESTPREPARATIONOPERATION_H
#define VSVIEWSERVICEREQUESTPREPARATIONOPERATION_H

@class VSAsyncOperation, NSArray, VSAuditToken, VSIdentityProviderAvailabilityInfoCenter, VSOptional, NSXPCConnection, NSOperationQueue;



@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation

@property (nonatomic, getter=isAccountModificationAllowed) BOOL accountModificationAllowed; // ivar: _accountModificationAllowed
@property (copy, nonatomic) NSArray *applicationAccountProviders; // ivar: _applicationAccountProviders
@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (retain, nonatomic) VSIdentityProviderAvailabilityInfoCenter *availabilityInfoCenter; // ivar: _availabilityInfoCenter
@property (retain, nonatomic) VSOptional *currentAccount; // ivar: _currentAccount
@property (copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers; // ivar: _featuredIdentityProviderIdentifiers
@property (nonatomic) ? hostAuditToken; // ivar: _hostAuditToken
@property (nonatomic) int hostProcessIdentifier; // ivar: _hostProcessIdentifier
@property (retain, nonatomic) NSXPCConnection *privacyServiceConnection; // ivar: _privacyServiceConnection
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (nonatomic) BOOL requestAllowsPrivacyUI; // ivar: _requestAllowsPrivacyUI
@property (nonatomic) BOOL requestRequiresPrivacyUI; // ivar: _requestRequiresPrivacyUI
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (nonatomic) BOOL shouldInferFeaturedProviders; // ivar: _shouldInferFeaturedProviders
@property (nonatomic) BOOL shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront; // ivar: _shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront
@property (copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers; // ivar: _supportedIdentityProviderIdentifiers


-(id)_privacyServiceWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)_checkAvailability;
-(void)_checkEntitlement;
-(void)_checkPrivacy;
-(void)_checkSupportedProviders;
-(void)_continueCheckPrivacyWithAccessStatus:(NSUInteger)arg0 ;
-(void)_determineProviderDisplayNameWithUI:(BOOL)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_finishWithSupportedProviders:(id)arg0 ;
-(void)_promptForPrivacyWithDisplayNameIfRequired:(id)arg0 providerID:(id)arg1 providerIsSupported:(BOOL)arg2 allowUI:(BOOL)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)executionDidBegin;


@end


#endif