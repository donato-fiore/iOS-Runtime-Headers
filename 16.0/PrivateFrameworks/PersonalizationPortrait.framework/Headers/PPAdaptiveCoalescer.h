// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPADAPTIVECOALESCER_H
#define PPADAPTIVECOALESCER_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPAdaptiveCoalescer : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)coalesceRequestKey:(id)arg0 handler:(id)arg1 executeRequestAndInvokeHandlersBlock:(id)arg2 ;
// -(void)coalesceRequestKey:(id)arg0 handler:(id)arg1 executeRequestAndInvokeHandlersBlock:(id)arg2 nowDate:(unk)arg3  ;
-(void)garbageCollectPendingKeysForNowDate:(id)arg0 ;


@end


#endif