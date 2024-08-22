// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWATTENTIONAWARENESSCLIENT_H
#define AWATTENTIONAWARENESSCLIENT_H

@class NSString;
@protocol AWServiceObserver, AWFrameworkClient, OS_dispatch_queue, NSXPCProxyCreating;

#import <Foundation/Foundation.h>

#import "AWClientPollWaiter.h"
#import "AWAttentionAwarenessConfiguration.h"
#import "AWAttentionEvent.h"

@interface AWAttentionAwarenessClient : NSObject <AWServiceObserver, AWFrameworkClient>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AWClientPollWaiter *_pollWaiter;
    id<NSXPCProxyCreating> *_remoteClientProxy;
    NSUInteger _suspensionCount;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_clientNotifQueue;
    id *_clientNotifBlock;
    NSObject<OS_dispatch_queue> *_clientEventQueue;
    id *_clientEventBlock;
    NSObject<OS_dispatch_queue> *_clientStreamingQueue;
    id *_clientStreamingBlock;
    AWAttentionAwarenessConfiguration *_configuration;
    BOOL _unitTestMode;
    int _clientIndex;
    BOOL _lastAttentionState;
}


@property (copy, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) AWAttentionEvent *lastEvent;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_invokeRequiringClient:(BOOL)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)cancelFaceDetectStreamWithError:(*id)arg0 ;
-(BOOL)cancelPollForAttentionWithError:(*id)arg0 ;
-(BOOL)invalidateRemoteClientWithError:(*id)arg0 ;
-(BOOL)invalidateWithError:(*id)arg0 ;
-(BOOL)invokeRequiringClient:(BOOL)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)pollForAttentionWithTimeout:(CGFloat)arg0 event:(*id)arg1 error:(*id)arg2 ;
// -(BOOL)pollForAttentionWithTimeout:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 error:(unk)arg3  ;
-(BOOL)resetAttentionLostTimeoutWithError:(*id)arg0 ;
-(BOOL)resumeWithError:(*id)arg0 ;
-(BOOL)suspendWithError:(*id)arg0 ;
-(id)connect:(BOOL)arg0 ;
-(id)init;
-(id)startStream;
-(id)unitTestSampler;
-(void)notify:(NSUInteger)arg0 ;
-(void)notifyEvent:(id)arg0 ;
-(void)notifyPollEventType:(NSUInteger)arg0 event:(id)arg1 ;
-(void)notifyStreamingEvent:(id)arg0 ;
-(void)serviceInterrupted;
-(void)setEventHandlerWithQueue:(id)arg0 block:(id)arg1 ;
-(void)setEventStreamerWithQueue:(id)arg0 block:(id)arg1 ;
-(void)setNotificationHandlerWithQueue:(id)arg0 block:(id)arg1 ;
-(void)setUnitTestMode:(BOOL)arg0 ;


@end


#endif