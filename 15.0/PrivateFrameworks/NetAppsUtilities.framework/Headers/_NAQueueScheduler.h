// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NAQUEUESCHEDULER_H
#define _NAQUEUESCHEDULER_H

@class NSString;
@protocol NAScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _NAQueueScheduler : NSObject <NAScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
-(void)performBlock:(id)arg0 ;


@end


#endif