// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTLOOPBACKSERVICEXPCDISPATCHER_H
#define GTLOOPBACKSERVICEXPCDISPATCHER_H

@protocol GTLoopbackServiceXPCDispatcher, GTLoopbackService;


#import "GTXPCDispatcher.h"

@interface GTLoopbackServiceXPCDispatcher : GTXPCDispatcher <GTLoopbackServiceXPCDispatcher>

 {
    id<GTLoopbackService> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)echo_:(id)arg0 replyConnection:(id)arg1 ;
-(void)echo_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)echo_repeat_callback_:(id)arg0 replyConnection:(id)arg1 ;
-(void)echo_repeat_callback_complete_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif