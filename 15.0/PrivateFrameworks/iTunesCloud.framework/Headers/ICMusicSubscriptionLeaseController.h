// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICSUBSCRIPTIONLEASECONTROLLER_H
#define ICMUSICSUBSCRIPTIONLEASECONTROLLER_H

@class NSMutableDictionary, NSString, NSOperationQueue;
@protocol ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionLeaseController : NSObject <ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_accountDSIDToFairPlayKeyStatus;
    NSMutableDictionary *_cacheKeyToLeaseSession;
    BOOL _hasReceivedUserInteractionEvent;
    BOOL _isRemoteServerLikelyReachable;
    BOOL _isServerReachable;
    NSString *_lastKnownHouseholdID;
    int _leaseDidEndNotificationToken;
    NSOperationQueue *_leaseSessionPreparationOperationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *lastKnownHouseholdID;
@property (readonly) Class superclass;


+(id)sharedController;
-(id)_init;
-(void)_handlePlaybackLeaseDidEndPushNotification;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)getLastKnownHouseholdIDWithCompletion:(id)arg0 ;
-(void)getLeaseSessionWithRequestContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)musicLeaseSession:(id)arg0 didFinishPlaybackRequest:(id)arg1 withPlaybackResponse:(id)arg2 responseError:(id)arg3 updatedFairPlayKeyStatusList:(id)arg4 completionHandler:(id)arg5 ;
-(void)musicLeaseSession:(id)arg0 requestsFairPlayKeyStatusUpdateWithCompletion:(id)arg1 ;
-(void)receivedUserInteractionEvent;


@end


#endif