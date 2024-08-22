// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCOPERATIONTHROTTLER_H
#define FCOPERATIONTHROTTLER_H

@protocol FCOperationThrottler, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface FCOperationThrottler : NSObject <FCOperationThrottler>

 {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}


@property BOOL suspended; // ivar: _suspended


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 updateQueue:(id)arg1 ;
-(void)addCompletionForCurrentOperation:(id)arg0 ;
-(void)dealloc;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;


@end


#endif