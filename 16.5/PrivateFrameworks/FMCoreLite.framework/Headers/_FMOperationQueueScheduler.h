// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FMOPERATIONQUEUESCHEDULER_H
#define _FMOPERATIONQUEUESCHEDULER_H

@class NSOperationQueue, NSString;
@protocol FMScheduler;

#import <Foundation/Foundation.h>


@interface _FMOperationQueueScheduler : NSObject <FMScheduler>

 {
    NSOperationQueue *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(NSInteger)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
-(void)performBlock:(id)arg0 ;


@end


#endif