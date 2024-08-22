// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKTASKCOMPLETIONCOUNTER_H
#define _HKTASKCOMPLETIONCOUNTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _HKTaskCompletionCounter : NSObject {
    id *_completion;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _target;
}




+(id)counterWithTargetCount:(NSInteger)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_invalidate;
-(void)allTasksEnqueued;
-(void)decrementCounter;
-(void)incrementCounter;


@end


#endif