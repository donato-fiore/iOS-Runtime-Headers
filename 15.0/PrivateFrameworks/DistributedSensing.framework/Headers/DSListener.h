// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSLISTENER_H
#define DSLISTENER_H

@class RPCompanionLinkClient, NSMutableDictionary, NSArray, NSString;
@protocol DSListenerClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DSProviderDevice.h"
#import "DSCoreAnalyticsEventHandler.h"
#import "DSClientMotionDataOptions.h"

@interface DSListener : NSObject <DSListenerClientProtocol>

 {
    RPCompanionLinkClient *_discoveryClient;
    NSObject<OS_dispatch_queue> *_queue;
    DSProviderDevice *_currentProvider;
    NSMutableDictionary *_providerDictionary;
    BOOL _isStopCalled;
    BOOL _isSubscriptionActive;
    BOOL _isFirstSubscription;
    DSCoreAnalyticsEventHandler *_caEventHandler;
    int _firstSubscriptionDataLinkType;
    NSUInteger _numHeartbeats;
    NSUInteger _numMotionStateMessages;
    NSUInteger _activeProviderLostCount;
}


@property (readonly) NSArray *activeProviders;
@property CGFloat avgListenerStartInterval; // ivar: _avgListenerStartInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTestMode; // ivar: _isTestMode
@property NSUInteger maxListenerClients; // ivar: _maxListenerClients
@property (retain, nonatomic) DSClientMotionDataOptions *motionDataOptions; // ivar: _motionDataOptions
@property (readonly) Class superclass;


-(id)_findProviderWithIdentifier:(id)arg0 ;
-(id)initWithDispatchQueue:(id)arg0 ;
-(void)_didFindDevice:(id)arg0 ;
-(void)_didLoseDevice:(id)arg0 ;
-(void)_rapportReceivedDataRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_rapportReceivedHeartbeatRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_receivedData:(id)arg0 fromProvider:(id)arg1 ;
-(void)_sendRequestID:(id)arg0 request:(id)arg1 device:(id)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)_startCASessionMetricCollection;
-(void)_stopCASessionMetricCollection;
-(void)_stopListener;
-(void)_subscribeToMotionData;
-(void)_unsubscribeToMotionData;
-(void)_updateCurrentProvider:(id)arg0 ;
-(void)failedToStartListenerWithError:(id)arg0 ;
-(void)receivedData:(id)arg0 fromProvider:(id)arg1 ;
-(void)startMotionDataListenerWithOptions:(id)arg0 ;
-(void)startedListener;
-(void)stopMotionDataListener;
-(void)stoppedListener;
-(void)updateProviders:(id)arg0 ;


@end


#endif