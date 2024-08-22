// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIAWARESUBSCRIBER_H
#define WIFIAWARESUBSCRIBER_H

@class NSXPCConnection, NSNumber, NSString;
@protocol WiFiAwareSubscriberXPCDelegate, OS_dispatch_queue, WiFiAwareSubscriberXPC, WiFiAwareSubscriberDelegate;

#import <Foundation/Foundation.h>

#import "WiFiAwareSubscribeConfiguration.h"

@interface WiFiAwareSubscriber : NSObject <WiFiAwareSubscriberXPCDelegate>

 {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_subscribeID;
    id<WiFiAwareSubscriberXPC> *_subscriberProxy;
}


@property (readonly, nonatomic) WiFiAwareSubscribeConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WiFiAwareSubscriberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isConnected;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)handleError;
-(void)resetState;
-(void)sendMessage:(id)arg0 toPeerAddress:(id)arg1 withInstanceID:(unsigned char)arg2 completionHandler:(id)arg3 ;
-(void)start;
-(void)startSubscribeSync;
-(void)stop;
-(void)subscribeFailedToStartWithError:(NSInteger)arg0 ;
-(void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg0 address:(id)arg1 ;
-(void)subscribeReceivedDiscoveryResult:(id)arg0 ;
-(void)subscribeReceivedMessage:(id)arg0 fromPublishID:(unsigned char)arg1 address:(id)arg2 ;
-(void)subscribeStartedWithInstanceID:(unsigned char)arg0 ;
-(void)subscribeTerminatedWithReason:(NSInteger)arg0 ;


@end


#endif