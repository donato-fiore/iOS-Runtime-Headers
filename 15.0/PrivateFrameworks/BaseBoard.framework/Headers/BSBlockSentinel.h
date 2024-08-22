// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSBLOCKSENTINEL_H
#define BSBLOCKSENTINEL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSAction.h"

@interface BSBlockSentinel : NSObject {
    BSAction *_sentinelAction;
    id *_handler;
    NSUInteger _count;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_explicitQueue;
}




+(id)sentinelWithExceptionReason:(id)arg0 ;
+(id)sentinelWithQueue:(id)arg0 completion:(id)arg1 ;
+(id)sentinelWithQueue:(id)arg0 signalCount:(NSUInteger)arg1 completion:(id)arg2 ;
+(id)sentinelWithQueue:(id)arg0 signalCount:(NSUInteger)arg1 signalHandler:(id)arg2 ;
+(id)sentinelWithQueue:(id)arg0 signalHandler:(id)arg1 ;
+(id)sentinelWithSignalCount:(NSUInteger)arg0 exceptionReason:(id)arg1 ;
-(BOOL)signal;
-(BOOL)signalWithContext:(id)arg0 ;


@end


#endif