// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCLOUDSERVICESTATUSMONITOR_H
#define ICCLOUDSERVICESTATUSMONITOR_H

@class NSXPCConnection, NSError, NSMutableSet, NSUUID, NSString, MSVDefaultDictionary;
@protocol ICCloudServiceStatusRemoteMonitoringClient, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ICCloudServerListenerEndpointProvider.h"

@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient>

 {
    NSXPCConnection *_cloudServiceStatusMonitorConnection;
    NSError *_cloudServiceStatusMonitorConnectionEstablishmentError;
    NSMutableSet *_activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
    ICCloudServerListenerEndpointProvider *_listenerEndpointProvider;
    NSInteger _privacyAcknowledgementPolicy;
    NSUInteger _observingCloudServiceStatusRequestsCount;
    NSUUID *_observationToken;
    NSString *_transactionIdentifierForActiveObservationToken;
    int _cloudServerLaunchedNotifyToken;
    NSObject<OS_dispatch_source> *_cloudServerLaunchTimeoutTimer;
    NSUInteger _capabilities;
    BOOL _hasValidCapabilities;
    NSString *_storefrontCountryCode;
    NSString *_storefrontIdentifier;
    MSVDefaultDictionary *_developerTokenCompletionHandlers;
    MSVDefaultDictionary *_userTokenCompletionHandlers;
    MSVDefaultDictionary *_tokensCompletionHandlers;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isObservingCloudServiceStatus) BOOL observingCloudServiceStatus;
@property NSInteger privacyAcknowledgementPolicy;
@property (readonly) Class superclass;


+(BOOL)_hasEntitlementForStatusAccessExemptedFromUserConsentRequirement;
-(NSInteger)authorizationStatusForScopes:(NSInteger)arg0 ;
-(id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_beginObservingCloudServiceStatus;
-(void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg0 ;
-(void)_cancelCloudServerLaunchedNotifyToken;
-(void)_cloudServiceStatusMonitorConnectionWasInterrupted;
-(void)_cloudServiceStatusMonitorConnectionWasInvalidated;
-(void)_didBeginObservingCloudServiceStatusWithToken:(id)arg0 transactionIdentifier:(id)arg1 ;
-(void)_didEndObservingCloudServiceStatusWithToken:(id)arg0 transactionIdentifier:(id)arg1 ;
-(void)_didEndRequestingTokenWithTransactionIdentifier:(id)arg0 ;
-(void)_endObservingCloudServiceStatusWithToken:(id)arg0 ;
-(void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg0 ;
-(void)_invalidateCloudServerLaunchTimeoutTimer;
-(void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
// -(void)_performCloudServiceStatusMonitorRequestWithDescription:(id)arg0 requestHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(void)_recoverObservingCloudServiceStatus;
-(void)_refreshCloudServiceStatus;
-(void)_registerCloudServerLaunchedNotifyToken;
-(void)_requestCapabilitiesWithPrivacyPromptPolicy:(NSInteger)arg0 requestCapabilitiesWithCompletionHandler:(id)arg1 ;
-(void)_requestStorefrontCountryCodeWithCompletionHandler:(id)arg0 ;
-(void)_requestStorefrontIdentifierWithCompletionHandler:(id)arg0 ;
-(void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(BOOL)arg0 ;
-(void)_scheduleCloudServerLaunchTimeoutTimer;
-(void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
-(void)_updateWithCapabilities:(NSUInteger)arg0 hasValidCapabilities:(BOOL)arg1 transactionIdentifier:(id)arg2 ;
-(void)_updateWithStorefrontCountryCode:(id)arg0 transactionIdentifier:(id)arg1 ;
-(void)_updateWithStorefrontIdentifier:(id)arg0 transactionIdentifier:(id)arg1 ;
-(void)_validateAuthorizationExpiryWithCompletionHandler:(id)arg0 ;
-(void)activeAccountDidChange;
-(void)beginObservingCloudServiceStatus;
-(void)capabilitiesDidChange:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)endObservingCloudServiceStatus;
-(void)requestAuthorizationForScopes:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)requestCapabilitiesWithCompletionHandler:(id)arg0 ;
-(void)requestDeveloperTokenWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)requestMusicKitTokensWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)requestStorefrontCountryCodeWithCompletionHandler:(id)arg0 ;
-(void)requestStorefrontIdentifierWithCompletionHandler:(id)arg0 ;
-(void)requestUserTokenForDeveloperToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestUserTokenForDeveloperToken:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)storefrontCountryCodeDidChange:(id)arg0 ;
-(void)storefrontIdentifierDidChange:(id)arg0 ;


@end


#endif