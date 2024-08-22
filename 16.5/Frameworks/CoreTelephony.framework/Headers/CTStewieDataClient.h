// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEDATACLIENT_H
#define CTSTEWIEDATACLIENT_H

@class NSString;
@protocol CTStewieStateMonitorDelegate, CTConnectionPairDelegate, OS_dispatch_queue, CTStewieDataClientDelegate;

#import <Foundation/Foundation.h>

#import "CTConnectionPair.h"
#import "CTStewieState.h"
#import "CTStewieStateMonitor.h"

@interface CTStewieDataClient : NSObject <CTStewieStateMonitorDelegate, CTConnectionPairDelegate>

 {
    BOOL fStarted;
    NSObject<OS_dispatch_queue> *fQueue;
    NSInteger fRequestedServices;
    NSInteger fConnectedServices;
    id<CTStewieDataClientDelegate> *fDelegate;
    NSObject<OS_dispatch_queue> *fDelegateQueue;
    CTConnectionPair *fConnectionPair;
    NSInteger fConnectionPairState;
    CTStewieState *fState;
    CTStewieStateMonitor *fMonitor;
    map<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>, std::less<std::string>, std::allocator<std::pair<const std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>> fOutgoingMessages;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)sendMessage:(id)arg0 completion:(id)arg1 ;
-(BOOL)start;
-(id)getState;
-(id)initWithServices:(NSInteger)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)connectionPairStateChanged:(NSInteger)arg0 ;
-(void)createConnectionPairIfRequired;
-(void)discardConnectionPairIfRequired;
-(void)dispatchOnDelegateQueue:(id)arg0 ;
-(void)failAllPendingMessages;
-(void)invokeSendCompletionForMsgId:(id)arg0 ack:(id)arg1 metadata:(id)arg2 ;
-(void)reEvaluate;
-(void)receivedData:(id)arg0 fromConnectionId:(NSInteger)arg1 ;
-(void)sendMessageInternal:(id)arg0 usingConnection:(NSInteger)arg1 completion:(id)arg2 ;
-(void)stateChanged:(id)arg0 ;
-(void)updateConnectedServices:(NSInteger)arg0 ;


@end


#endif