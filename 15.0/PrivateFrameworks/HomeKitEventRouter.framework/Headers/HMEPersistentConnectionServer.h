// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMEPERSISTENTCONNECTIONSERVER_H
#define HMEPERSISTENTCONNECTIONSERVER_H

@protocol OS_os_log, HMEPersistentConnectionServerDataSource, HMEPersistentConnectionServerDelegate;


#import "HMERouterServer.h"

@interface HMEPersistentConnectionServer : HMERouterServer {
    NSObject<OS_os_log> *_logger;
}


@property (weak) NSObject<HMEPersistentConnectionServerDataSource> *dataSource; // ivar: _dataSource
@property (weak) NSObject<HMEPersistentConnectionServerDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 provider:(id)arg1 registrationEventRouter:(id)arg2 ;
-(id)initWithQueue:(id)arg0 provider:(id)arg1 registrationEventRouter:(id)arg2 storeReadHandle:(id)arg3 logCategory:(char *)arg4 ;
-(void)changeRegistrationsForConnection:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)connectWithConnection:(id)arg0 connectEvent:(id)arg1 unregisterEvent:(id)arg2 completion:(id)arg3 ;
-(void)didInvalidateConnection:(id)arg0 ;
-(void)disconnectConnection:(id)arg0 ;
-(void)handleCachedEvent:(id)arg0 topic:(id)arg1 ;
-(void)handleEvent:(id)arg0 topic:(id)arg1 ;


@end


#endif