// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SESSESSION_H
#define SESSESSION_H

@class NSString;
@protocol SESSessionCallbackInterface, SESSession, OS_dispatch_queue, SESSessionInterface><NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface SESSession : NSObject <SESSessionCallbackInterface, SESSession>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isQueueSuspended;
    id *_didStartCallback;
    id *_didEndCallback;
    NSObject<SESSessionInterface><NSXPCProxyCreating> *_proxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger state; // ivar: state
@property (readonly) Class superclass;


-(id)endRemoteSession;
-(id)init;
-(id)proxy;
-(id)queue;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)didEndUnexpectedly:(id)arg0 ;
-(void)didStartSession:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithError:(id)arg0 ;
-(void)resume;
-(void)setDidEndCallback:(id)arg0 ;
-(void)setDidStartCallback:(id)arg0 ;
-(void)setProxy:(id)arg0 ;


@end


#endif