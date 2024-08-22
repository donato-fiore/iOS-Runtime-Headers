// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMEPERSISTENTCONNECTIONCLIENT_H
#define HMEPERSISTENTCONNECTIONCLIENT_H

@protocol OS_os_log, HMEPersistentConnectionClientDelegate;


#import "HMERouterClient.h"

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}


@property (weak) NSObject<HMEPersistentConnectionClientDelegate> *delegate;


-(BOOL)isActiveForSaving;
-(NSUInteger)willWriteToStore;
-(id)forwardingTopicsForTopics:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 storeReadHandle:(id)arg1 storeWriteHandle:(id)arg2 ;
-(id)initWithQueue:(id)arg0 storeReadHandle:(id)arg1 storeWriteHandle:(id)arg2 logger:(id)arg3 ;
-(void)didInvalidateConnection;
-(void)didReconnect;
-(void)finishedWritingToStore:(NSUInteger)arg0 ;
-(void)processReceivedCachedEventsFromMessage:(id)arg0 ;
-(void)processReceivedEventsFromMessage:(id)arg0 ;


@end


#endif