// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMPOCKETSTATEQUEUEBLOCKPAIR_H
#define CMPOCKETSTATEQUEUEBLOCKPAIR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMPocketStateQueueBlockPair : NSObject {
    NSObject<OS_dispatch_queue> *fQueryQueue;
    id *fQueryBlock;
}




-(id)initWithQueue:(id)arg0 andBlock:(id)arg1 ;
-(void)dealloc;
-(void)dispatchWithState:(NSInteger)arg0 andError:(id)arg1 ;


@end


#endif