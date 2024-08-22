// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMEMESSAGEDATAGRAMCLIENT_H
#define HMEMESSAGEDATAGRAMCLIENT_H

@class NSUUID;
@protocol OS_os_log, HMETimerIntervalProvider, HMETimer, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMETimerProvider;


#import "HMERouterClient.h"
#import "HMEPendingTopicsCombiner.h"

@interface HMEMessageDatagramClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}


@property (retain, nonatomic) NSUUID *connectedServerIdentifier; // ivar: _connectedServerIdentifier
@property (readonly) NSObject<HMETimerIntervalProvider> *connectionRetryIntervalProvider; // ivar: _connectionRetryIntervalProvider
@property (retain, nonatomic) NSObject<HMETimer> *connectionRetryTimer; // ivar: _connectionRetryTimer
@property (weak, nonatomic) NSObject<HMEMessageDatagramClientDataSource> *dataSource; // ivar: _dataSource
@property (weak) NSObject<HMEMessageDatagramClientDelegate> *delegate;
@property (nonatomic) BOOL hasPendingRequest; // ivar: _hasPendingRequest
@property (nonatomic) BOOL hasPendingServerChangeRequest; // ivar: _hasPendingServerChangeRequest
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (readonly) CGFloat keepAliveInterval; // ivar: _keepAliveInterval
@property (retain, nonatomic) NSObject<HMETimer> *keepAliveTimer; // ivar: _keepAliveTimer
@property (readonly) HMEPendingTopicsCombiner *pendingTopicsCombiner; // ivar: _pendingTopicsCombiner
@property (readonly) NSObject<HMETimerProvider> *timerProvider; // ivar: _timerProvider


-(BOOL)handleChangeRegistrationsWithTopicFilterAdditions:(id)arg0 removals:(id)arg1 ;
-(id)initWithQueue:(id)arg0 timerProvider:(id)arg1 keepAliveInterval:(CGFloat)arg2 retryIntervalProvider:(id)arg3 ;
-(id)initWithQueue:(id)arg0 timerProvider:(id)arg1 keepAliveInterval:(CGFloat)arg2 retryIntervalProvider:(id)arg3 storeReadHandle:(id)arg4 storeWriteHandle:(id)arg5 logCategory:(char *)arg6 ;
-(void)connectionCapabilityDidChange;
-(void)didReceiveMessageWithEvents:(id)arg0 serverIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)serverDidChangeWithServerIdentifier:(id)arg0 ;


@end


#endif