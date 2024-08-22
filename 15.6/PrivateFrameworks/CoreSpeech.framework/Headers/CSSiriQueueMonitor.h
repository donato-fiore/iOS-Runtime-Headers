// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSIRIQUEUEMONITOR_H
#define CSSIRIQUEUEMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSiriQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _numberOfTransactions;
    NSMutableDictionary *_observersByIdentifier;
}




+(id)sharedMonitor;
-(id)init;
-(void)_addQueue:(id)arg0 heartBeatInterval:(CGFloat)arg1 timeoutInterval:(CGFloat)arg2 timeoutHandler:(id)arg3 ;
-(void)_beginMonitoring;
-(void)_endMonitoring;
-(void)_removeQueue:(id)arg0 ;
-(void)addQueue:(id)arg0 heartBeatInterval:(CGFloat)arg1 timeoutInterval:(CGFloat)arg2 timeoutHandler:(id)arg3 ;
-(void)beginMonitoring;
-(void)endMonitoring;
-(void)removeQueue:(id)arg0 ;


@end


#endif