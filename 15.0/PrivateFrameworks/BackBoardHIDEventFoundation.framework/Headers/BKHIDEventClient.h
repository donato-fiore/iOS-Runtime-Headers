// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDEVENTCLIENT_H
#define BKHIDEVENTCLIENT_H

@class BSProcessDeathWatcher, BSPortDeathSentinel, NSString, BSMachPortSendRight;
@protocol BSDescriptionProviding, OS_dispatch_queue, BKHIDEventClientDelegate;

#import <Foundation/Foundation.h>


@interface BKHIDEventClient : NSObject <BSDescriptionProviding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<BKHIDEventClientDelegate> *_queue_delegate;
    BSProcessDeathWatcher *_queue_pidWatcher;
    BSPortDeathSentinel *_queue_portSentinel;
    NSString *_queue_procName;
    BOOL _queue_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BKHIDEventClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _queue_pid
@property (readonly, nonatomic) BSMachPortSendRight *sendRight; // ivar: _queue_sendRight
@property (readonly) Class superclass;


-(BOOL)_deathByPid;
-(BOOL)_deathBySendRight;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithPid:(int)arg0 sendRight:(id)arg1 ;
-(id)initWithPid:(int)arg0 sendRight:(id)arg1 queue:(id)arg2 ;
-(id)initWithPid:(int)arg0 sendRight:(id)arg1 queue:(id)arg2 processName:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_queue_invalidate;
-(void)_queue_performDelegateCallout:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif