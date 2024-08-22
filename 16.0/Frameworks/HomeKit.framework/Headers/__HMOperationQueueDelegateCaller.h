// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMOPERATIONQUEUEDELEGATECALLER_H
#define __HMOPERATIONQUEUEDELEGATECALLER_H

@class NSOperationQueue;


#import "HMDelegateCaller.h"

@interface __HMOperationQueueDelegateCaller : HMDelegateCaller {
    NSOperationQueue *_queue;
}




-(id)init;
-(id)initWithOperationQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)invokeBlock:(id)arg0 ;


@end


#endif