// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMEMESSAGEDATAGRAMSERVER_H
#define HMEMESSAGEDATAGRAMSERVER_H

@class NSMutableArray;
@protocol OS_os_log, HMETimer, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate;


#import "HMERouterServer.h"

@interface HMEMessageDatagramServer : HMERouterServer {
    NSObject<OS_os_log> *_logger;
}


@property (retain) NSObject<HMETimer> *connectionDebounceTimer; // ivar: _connectionDebounceTimer
@property (retain) NSObject<HMETimer> *connectionExpiryTimer; // ivar: _connectionExpiryTimer
@property (readonly, nonatomic) NSMutableArray *connectionInfoItems; // ivar: _connectionInfoItems
@property (weak) NSObject<HMEMessageDatagramServerDataSource> *dataSource; // ivar: _dataSource
@property (weak) NSObject<HMEMessageDatagramServerDelegate> *delegate; // ivar: _delegate


-(id)expandedTopicsForTopics:(id)arg0 ;
-(id)initWithQueue:(id)arg0 provider:(id)arg1 registrationEventRouter:(id)arg2 ;
-(id)initWithQueue:(id)arg0 provider:(id)arg1 registrationEventRouter:(id)arg2 storeReadHandle:(id)arg3 logCategory:(char *)arg4 ;
-(id)upstreamTopicsForTopic:(id)arg0 ;
-(void)changeRegistrationsForConnection:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)connectWithConnection:(id)arg0 connectEvent:(id)arg1 unregisterEvent:(id)arg2 topicFilterAdditions:(id)arg3 completion:(id)arg4 ;
-(void)disconnectConnection:(id)arg0 ;
-(void)fetchCachedEventsForTopics:(id)arg0 completion:(id)arg1 ;
-(void)handleCachedEvent:(id)arg0 topic:(id)arg1 ;
-(void)handleEvent:(id)arg0 topic:(id)arg1 ;
-(void)keepAliveConnection:(id)arg0 completion:(id)arg1 ;
-(void)refreshConnection:(id)arg0 ;
-(void)reset;
-(void)resetExistingEvents;


@end


#endif