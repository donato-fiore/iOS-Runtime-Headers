// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDLAZYPROMISE_H
#define ASDLAZYPROMISE_H

@protocol ASDTaskScheduler;


#import "ASDPromise.h"

@interface ASDLazyPromise : ASDPromise {
    id *_executor;
    id<ASDTaskScheduler> *_scheduler;
}




-(id)initOnScheduler:(id)arg0 withExecutor:(id)arg1 ;
-(id)joinWithPromise:(id)arg0 ;
// -(void)thenPerform:(id)arg0 orCatchError:(unk)arg1 onScheduler:(id)arg2  ;


@end


#endif