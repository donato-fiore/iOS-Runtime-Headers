// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFSCHEDULER_H
#define HMFSCHEDULER_H

@class NSOperationQueue;


#import "HMFObject.h"

@interface HMFScheduler : HMFObject {
    NSOperationQueue *_operationQueue;
}




+(id)defaultScheduler;
+(id)mainScheduler;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)performBlock:(id)arg0 ;
-(id)performOperation:(id)arg0 ;
-(id)performSelector:(SEL)arg0 target:(id)arg1 argument:(id)arg2 ;
-(id)performSelector:(SEL)arg0 target:(id)arg1 argument:(id)arg2 qualityOfService:(NSInteger)arg3 ;
-(id)performWithQualityOfService:(NSInteger)arg0 block:(id)arg1 ;


@end


#endif