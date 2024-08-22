// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCKOPERATIONTHROTTLER_H
#define SCKOPERATIONTHROTTLER_H

@protocol SCKOperationThrottler, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface SCKOperationThrottler : NSObject <SCKOperationThrottler>

 {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}


@property BOOL suspended; // ivar: _suspended


-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 updateQueue:(id)arg1 ;
-(void)addCompletionForCurrentOperation:(id)arg0 ;
-(void)dealloc;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;


@end


#endif