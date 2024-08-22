// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NAOPERATIONQUEUESCHEDULER_H
#define _NAOPERATIONQUEUESCHEDULER_H

@class NSOperationQueue, NSString;
@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface _NAOperationQueueScheduler : NSObject <NAScheduler>

 {
    NSOperationQueue *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(NSUInteger)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
-(void)performBlock:(id)arg0 ;


@end


#endif