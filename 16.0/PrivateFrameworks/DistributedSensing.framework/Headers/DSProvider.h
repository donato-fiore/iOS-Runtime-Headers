// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSPROVIDER_H
#define DSPROVIDER_H

@class RPCompanionLinkClient, NSString;
@protocol DSProviderClientProtocol, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "DSListenerDevice.h"
#import "DSCoreAnalyticsEventHandler.h"
#import "DSClientMotionDataOptions.h"

@interface DSProvider : NSObject <DSProviderClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_clientQueue;
    RPCompanionLinkClient *_linkClient;
    DSListenerDevice *_currentListener;
    int _screenStateToken;
    BOOL _isScreenON;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _isPendingHeartbeat;
    NSObject<OS_dispatch_source> *_responseTimeoutTimer;
    BOOL _isLinkClientResponsePending;
    DSCoreAnalyticsEventHandler *_caEventHandler;
    NSUInteger _numHeartbeats;
    NSUInteger _numMotionStateMessages;
    int _linkType;
    BOOL _isUnterminatedSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isSubscriptionActive; // ivar: _isSubscriptionActive
@property (nonatomic) BOOL isTestMode; // ivar: _isTestMode
@property (retain, nonatomic) DSClientMotionDataOptions *motionDataOptions; // ivar: _motionDataOptions
@property (readonly) Class superclass;


-(BOOL)_persistListenerState;
-(BOOL)_removePersistedState;
-(BOOL)_unPersistListenerState;
-(id)initWithDispatchQueue:(id)arg0 ;
-(void)_addNewListener:(id)arg0 ;
-(void)_didFindDevice:(id)arg0 ;
-(void)_didLoseDevice:(id)arg0 ;
-(void)_fetchScreenState;
-(void)_heartBeatWithListener;
-(void)_receivedDataRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_removeCurrentListenerWithStopReason:(int)arg0 ;
-(void)_sendMotionData:(id)arg0 ;
-(void)_sendRequestID:(id)arg0 request:(id)arg1 device:(id)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)_startCASessionMetricCollection;
-(void)_stopCASessionMetricCollectionWithStopReason:(int)arg0 ;
-(void)_stopProvider;
-(void)failedToStartProviderWithOptions:(id)arg0 error:(id)arg1 ;
-(void)requestedMotionDataWithOption:(id)arg0 ;
-(void)sendMotionData:(id)arg0 ;
-(void)startMotionDataProviderWithOptions:(id)arg0 ;
-(void)startedProviderWithOptions:(id)arg0 ;
-(void)stopMotionDataProvider;
-(void)stoppedProvider;
-(void)subscribedToMotionDataWithOptions:(id)arg0 ;
-(void)subscriptionExpired;
-(void)unsubscribed;


@end


#endif