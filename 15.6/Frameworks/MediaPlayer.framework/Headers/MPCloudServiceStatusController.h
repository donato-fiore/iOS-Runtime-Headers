// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCLOUDSERVICESTATUSCONTROLLER_H
#define MPCLOUDSERVICESTATUSCONTROLLER_H

@class ICMusicSubscriptionStatusMonitor, NSString, SSVFairPlaySubscriptionStatus, ICMusicSubscriptionFairPlayKeyStatus, ICMusicSubscriptionStatus, SSVSubscriptionStatus, ICUserIdentity;
@protocol ICEnvironmentMonitorObserver, OS_dispatch_queue, NSCopying;

#import <Foundation/Foundation.h>


@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_cloudLibraryStatusAccessQueue;
    NSInteger _cloudLibraryStatus;
    NSUInteger _cloudLibraryObservationCount;
    BOOL _hasLoadedMatchStatus;
    BOOL _hasLoadedSubscriptionAvailability;
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;
    id<NSCopying> *_subscriptionStatusObservationToken;
    NSUInteger _matchStatusObservationCount;
    NSUInteger _matchStatus;
    BOOL _observingNetworkReachability;
    BOOL _hasSubscriptionLease;
    BOOL _shouldPlaybackRequireSubscriptionLease;
    BOOL _subscriptionAvailable;
}


@property (readonly, nonatomic, getter=isCloudLibraryEnabled) BOOL cloudLibraryEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLoadedSubscriptionAvailability;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property (readonly, nonatomic) ICMusicSubscriptionFairPlayKeyStatus *lastKnownSubscriptionFairPlayKeyStatus; // ivar: _lastKnownSubscriptionFairPlayKeyStatus
@property (readonly, nonatomic) NSUInteger matchStatus;
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatus *musicSubscriptionStatus;
@property (readonly, nonatomic, getter=isPurchaseHistoryEnabled) BOOL purchaseHistoryEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) BOOL shouldPlaybackRequireSubscriptionLease;
@property (readonly, nonatomic, getter=isSubscriptionAvailable) BOOL subscriptionAvailable;
@property (readonly, copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus; // ivar: _subscriptionStatus
@property (readonly) Class superclass;
@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(id)_cloudServiceStatusControllerWithUserIdentity:(id)arg0 createIfRequired:(BOOL)arg1 ;
+(id)cloudServiceStatusControllerWithUserIdentity:(id)arg0 ;
+(id)controllers;
+(id)globalSerialQueue;
+(id)sharedController;
+(void)_postNotificationName:(id)arg0 controller:(id)arg1 ;
+(void)_postNotificationName:(id)arg0 controller:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(*BOOL)arg0 ;
-(BOOL)_currentCloudLibraryEnabled;
-(BOOL)_currentPurchaseHistoryEnabled;
-(BOOL)_handlesSameAccountAs:(id)arg0 ;
-(id)_initWithUserIdentity:(id)arg0 ;
-(id)init;
-(void)_allowsMusicSubscriptionDidChange:(id)arg0 ;
-(void)_beginObservingCloudLibraryEnabled;
-(void)_beginObservingMatchStatus;
-(void)_cloudClientAuthenticationDidChange;
-(void)_copyObservationStateFrom:(id)arg0 ;
-(void)_enableICMLErrorReasonChange:(id)arg0 ;
-(void)_endObservingCloudLibraryEnabled;
-(void)_endObservingMatchStatus;
-(void)_performBlockOnControllerHandlingTheSameAccount:(id)arg0 ;
-(void)_updateMatchStatus;
-(void)_updateSubscriptionAvailability;
-(void)_updateSubscriptionAvailabilityWithValue:(BOOL)arg0 ;
-(void)_userIdentityStoreDidChange:(id)arg0 ;
-(void)beginObservingCloudLibraryEnabled;
-(void)beginObservingFairPlaySubscriptionStatus;
-(void)beginObservingMatchStatus;
-(void)beginObservingPurchaseHistoryEnabled;
-(void)beginObservingSubscriptionAvailability;
-(void)dealloc;
-(void)endObservingCloudLibraryEnabled;
-(void)endObservingFairPlaySubscriptionStatus;
-(void)endObservingMatchStatus;
-(void)endObservingPurchaseHistoryEnabled;
-(void)endObservingSubscriptionAvailability;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)refreshMusicSubscriptionStatus;


@end


#endif