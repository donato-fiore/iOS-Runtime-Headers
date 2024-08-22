// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTSERIALQUEUESCHEDULER_H
#define _MTSERIALQUEUESCHEDULER_H

@class NSString;
@protocol MTScheduler, OS_dispatch_queue, NAScheduler;

#import <Foundation/Foundation.h>


@interface _MTSerialQueueScheduler : NSObject <MTScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) NSObject<NAScheduler> *internalScheduler; // ivar: _internalScheduler
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)performSyncBlock:(id)arg0 ;


@end


#endif