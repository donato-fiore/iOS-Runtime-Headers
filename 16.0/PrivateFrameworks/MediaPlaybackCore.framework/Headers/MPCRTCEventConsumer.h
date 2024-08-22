// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCRTCEVENTCONSUMER_H
#define MPCRTCEVENTCONSUMER_H

@class NSString, RTCReporting;
@protocol MPCPlaybackEngineEventConsumer, OS_dispatch_group, OS_dispatch_queue, MPCPlaybackEngineEventStreamSubscription, MPCRTCEventConsumerTestingDelegate;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngineEvent.h"

@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>

 {
    NSObject<OS_dispatch_group> *_rtcGroup;
    NSObject<OS_dispatch_queue> *_rtcQueue;
    MPCPlaybackEngineEvent *_cachedFirstItemAssetLoadEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) RTCReporting *playbackItemRTCSession; // ivar: _playbackItemRTCSession
@property (retain) RTCReporting *playbackQueueRTCSession; // ivar: _playbackQueueRTCSession
@property (retain) RTCReporting *playbackSessionRTCSession; // ivar: _playbackSessionRTCSession
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MPCRTCEventConsumerTestingDelegate> *testingDelegate; // ivar: _testingDelegate


+(id)NSStringFromMPCRTCReportingEventCategory:(NSInteger)arg0 ;
+(id)dateFormatter;
+(id)identifier;
+(id)identifierStringFromItemIdentifiers:(id)arg0 radioIdentifiers:(id)arg1 ;
+(id)playerServiceNameWithPlayerID:(id)arg0 ;
+(id)rtcIdentifiersFromRadioIdentifiers:(id)arg0 ;
+(id)rtcIdentifiersFromUniversalIdentifiers:(id)arg0 ;
-(BOOL)_itemWasPreviouslyLoaded:(id)arg0 cursor:(id)arg1 ;
-(id)_accountSnapshotWithCursor:(id)arg0 ;
-(id)_itemAssetTypeFromItemAssetLoadEvent:(id)arg0 cursor:(id)arg1 ;
-(id)_itemStartIncitingEvent:(id)arg0 fromItemStartEvent:(id)arg1 ;
-(id)_mediaIdentifierFromItemAssetLoadEndEvent:(id)arg0 cursor:(id)arg1 ;
-(id)_payloadForItemAssetLoad:(id)arg0 fromItemEvent:(id)arg1 ;
-(id)_payloadForItemSummary:(id)arg0 fromEvent:(id)arg1 ;
-(id)_payloadForItemSummary:(id)arg0 fromItemEvent:(id)arg1 ;
-(id)_payloadForQueueLoad:(id)arg0 fromQueueLoadEndEvent:(id)arg1 ;
-(id)_payloadForSessionStart:(id)arg0 fromEvent:(id)arg1 ;
-(id)_payloadForSessionSummary:(id)arg0 fromEvent:(id)arg1 ;
-(id)_reasonForEndEvent:(id)arg0 cursor:(id)arg1 ;
-(id)_rtcSessionInfoWithToken:(id)arg0 ;
-(id)_rtcUserInfoWithServiceName:(id)arg0 ;
-(id)_tapToPlayMetrics:(id)arg0 fromItemStartEvent:(id)arg1 ;
-(id)_underlyingErrorFromPayload:(id)arg0 ;
-(id)init;
-(void)_generateConfiguredReportingSessionWithToken:(id)arg0 serviceName:(id)arg1 completion:(id)arg2 ;
-(void)_handleReportingForItemStartEvent:(id)arg0 event:(id)arg1 ;
-(void)_performABCSnapshotWithPayloadIfNecessary:(id)arg0 ;
-(void)_sendOneMessageWithToken:(id)arg0 serviceName:(id)arg1 category:(NSInteger)arg2 type:(NSInteger)arg3 payload:(id)arg4 ;
-(void)_sendQueueLoadEventIfNeeded:(id)arg0 forItemEvent:(id)arg1 ;
-(void)_sendReportForItemAssetLoad:(id)arg0 event:(id)arg1 ;
-(void)_sendReportForItemSummary:(id)arg0 event:(id)arg1 ;
-(void)_sendReportForItemSummaryWithEndReason:(id)arg0 cursor:(id)arg1 event:(id)arg2 ;
-(void)_sendReportForSessionStart:(id)arg0 event:(id)arg1 withType:(NSInteger)arg2 ;
-(void)_sendReportForSessionSummary:(id)arg0 event:(id)arg1 withType:(NSInteger)arg2 ;
-(void)_sendReportWithSession:(id)arg0 category:(NSInteger)arg1 type:(NSInteger)arg2 payload:(id)arg3 ;
-(void)_sendSessionStartIfNeeded:(id)arg0 forItemEvent:(id)arg1 ;
-(void)_updateAssetLoadInfoEvent:(id)arg0 fromAssetLoadEndEvent:(id)arg1 cursor:(id)arg2 ;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif