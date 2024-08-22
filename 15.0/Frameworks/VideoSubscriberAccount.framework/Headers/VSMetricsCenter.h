// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSMETRICSCENTER_H
#define VSMETRICSCENTER_H

@class AMSBag, NSString, MTMetricsKit, NSOperationQueue;
@protocol MTBaseEventDataProviderDelegate, VSRemoteNotifierDelegate, MCProfileConnectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSIdentityProvider.h"
#import "VSPreferences.h"
#import "VSRemoteNotifier.h"
#import "VSSetTopBoxProfile.h"

@interface VSMetricsCenter : NSObject <MTBaseEventDataProviderDelegate, VSRemoteNotifierDelegate, MCProfileConnectionObserver>



@property (retain, nonatomic) AMSBag *bag; // ivar: _bag
@property (retain, nonatomic) VSIdentityProvider *currentIdentityProvider; // ivar: _currentIdentityProvider
@property (nonatomic) BOOL currentIdentityProviderIsFullySupported; // ivar: _currentIdentityProviderIsFullySupported
@property (nonatomic) BOOL currentIdentityProviderSupportsSTB; // ivar: _currentIdentityProviderSupportsSTB
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (nonatomic) BOOL fetchedSetTopBoxProfile; // ivar: _fetchedSetTopBoxProfile
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTMetricsKit *mainMetricsKit; // ivar: _mainMetricsKit
@property (nonatomic) BOOL optedIn; // ivar: _optedIn
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (retain, nonatomic) VSSetTopBoxProfile *stbProfile; // ivar: _stbProfile
@property (readonly) Class superclass;


+(id)sharedMetricsCenter;
-(BOOL)currentProviderIsSetTopBoxProvider;
-(BOOL)hasSetTopBoxProfile;
-(id)capacityData:(id)arg0 ;
-(id)capacityDataAvailable:(id)arg0 ;
-(id)capacityDisk:(id)arg0 ;
-(id)capacitySystem:(id)arg0 ;
-(id)capacitySystemAvailable:(id)arg0 ;
-(id)clientId:(id)arg0 ;
-(id)connection:(id)arg0 ;
-(id)dsId:(id)arg0 ;
-(id)flexibleBaseFields;
-(id)hardwareModel:(id)arg0 ;
-(id)init;
-(id)isSignedIn:(id)arg0 ;
-(id)mutableBaseFieldsWithUserID:(BOOL)arg0 ;
-(id)pageUrl:(id)arg0 ;
-(id)pixelRatio:(id)arg0 ;
-(id)resourceRevNum:(id)arg0 ;
-(id)screenHeight:(id)arg0 ;
-(id)screenWidth:(id)arg0 ;
-(id)userID;
-(id)userType:(id)arg0 ;
-(id)windowInnerHeight:(id)arg0 ;
-(id)windowInnerWidth:(id)arg0 ;
-(id)windowOuterHeight:(id)arg0 ;
-(id)windowOuterWidth:(id)arg0 ;
-(id)xpPostFrequency:(id)arg0 ;
-(id)xpSendMethod:(id)arg0 ;
-(void)accountStoreDidChange;
-(void)fetchSetTopBoxProfile;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)recordClickEventWithPage:(id)arg0 pageType:(id)arg1 target:(id)arg2 ;
-(void)recordEnterEventWithPage:(id)arg0 pageType:(id)arg1 ;
-(void)recordExitEventWithPage:(id)arg0 pageType:(id)arg1 ;
-(void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)arg0 ;
-(void)recordMetadataRequestWithProviderIdentifier:(id)arg0 channelAdamID:(id)arg1 error:(id)arg2 ;
-(void)recordSTBOptOutEventWithError:(id)arg0 ;
-(void)recordSignInEventWithProviderIdentifier:(id)arg0 supportedProvider:(BOOL)arg1 channelAdamID:(id)arg2 error:(id)arg3 ;
-(void)recordSignOutEventWithProviderIdentifier:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;


@end


#endif