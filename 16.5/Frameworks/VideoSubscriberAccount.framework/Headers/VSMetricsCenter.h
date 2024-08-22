// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSMETRICSCENTER_H
#define VSMETRICSCENTER_H

@class NSString, NSOperationQueue;
@protocol VSRemoteNotifierDelegate, VSManagedProfileConnectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSAnalyticsServiceConnection.h"
#import "VSIdentityProvider.h"
#import "VSPreferences.h"
#import "VSRemoteNotifier.h"
#import "VSSetTopBoxProfile.h"

@interface VSMetricsCenter : NSObject <VSRemoteNotifierDelegate, VSManagedProfileConnectionObserver>



@property (retain, nonatomic) VSAnalyticsServiceConnection *analyticsService; // ivar: _analyticsService
@property (retain, nonatomic) VSIdentityProvider *currentIdentityProvider; // ivar: _currentIdentityProvider
@property (nonatomic) BOOL currentIdentityProviderIsFullySupported; // ivar: _currentIdentityProviderIsFullySupported
@property (nonatomic) BOOL currentIdentityProviderSupportsSTB; // ivar: _currentIdentityProviderSupportsSTB
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (nonatomic) BOOL fetchedSetTopBoxProfile; // ivar: _fetchedSetTopBoxProfile
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (retain, nonatomic) VSSetTopBoxProfile *stbProfile; // ivar: _stbProfile
@property (readonly) Class superclass;


+(id)sharedMetricsCenter;
-(BOOL)currentProviderIsSetTopBoxProvider;
-(BOOL)hasSetTopBoxProfile;
-(id)flexibleBaseFields;
-(id)init;
-(id)mutableBaseFields;
-(id)underlyingErrorsArray:(id)arg0 ;
-(id)userID;
-(void)accountStoreDidChange;
-(void)fetchSetTopBoxProfile;
-(void)profileConnectionProfileChanged:(id)arg0 ;
-(void)recordClickEventWithPage:(id)arg0 pageType:(id)arg1 target:(id)arg2 ;
-(void)recordEnterEventWithPage:(id)arg0 pageType:(id)arg1 ;
-(void)recordExitEventWithPage:(id)arg0 pageType:(id)arg1 ;
-(void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)arg0 ;
-(void)recordMetadataRequestWithProviderIdentifier:(id)arg0 channelAdamID:(id)arg1 error:(id)arg2 ;
-(void)recordSTBOptOutEventWithError:(id)arg0 ;
-(void)recordSignInEventWithProviderIdentifier:(id)arg0 supportedProvider:(BOOL)arg1 channelAdamID:(id)arg2 error:(id)arg3 ;
-(void)recordSignOutEventWithProviderIdentifier:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;
-(void)sendClickEventToAnalyticsServiceWithPage:(id)arg0 pageType:(id)arg1 data:(id)arg2 ;
-(void)sendEnterEventToAnalyticsServiceWithPage:(id)arg0 pageType:(id)arg1 data:(id)arg2 ;
-(void)sendExitEventToAnalyticsServiceWithPage:(id)arg0 pageType:(id)arg1 data:(id)arg2 ;
-(void)sendFlexibleEventToAnalyticsService:(id)arg0 data:(id)arg1 ;


@end


#endif