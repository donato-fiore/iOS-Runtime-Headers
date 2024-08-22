// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMQUEUEDELEGATECALLER_H
#define __HMQUEUEDELEGATECALLER_H

@protocol OS_dispatch_queue;


#import "HMDelegateCaller.h"

@interface __HMQueueDelegateCaller : HMDelegateCaller {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithQueue:(id)arg0 ;
-(void)invokeBlock:(id)arg0 ;


@end


#endif