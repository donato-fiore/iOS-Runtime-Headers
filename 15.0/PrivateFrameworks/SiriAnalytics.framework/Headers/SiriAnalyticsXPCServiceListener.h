// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIANALYTICSXPCSERVICELISTENER_H
#define SIRIANALYTICSXPCSERVICELISTENER_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, SiriAnalyticsXPCService, OS_dispatch_queue, SiriAnalyticsXPCServiceListenerDelegate;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCServiceListener : NSObject <NSXPCListenerDelegate, SiriAnalyticsXPCService>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsXPCServiceListenerDelegate> *_delegate;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    id *_largeMessageReceived;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(id)mapToAnnotatedMessage:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_connectionDisconnected:(id)arg0 ;
-(void)_connectionInterrupted:(id)arg0 ;
-(void)publishLargeMessage:(id)arg0 completion:(id)arg1 ;
-(void)publishMessages:(id)arg0 completion:(id)arg1 ;
-(void)resolveMessages:(id)arg0 completion:(id)arg1 ;


@end


#endif