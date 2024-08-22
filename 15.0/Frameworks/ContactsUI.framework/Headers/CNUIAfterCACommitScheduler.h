// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIAFTERCACOMMITSCHEDULER_H
#define CNUIAFTERCACOMMITSCHEDULER_H

@class NSString, CNSuspendableSchedulerDecorator;
@protocol CNScheduler;

#import <Foundation/Foundation.h>


@interface CNUIAfterCACommitScheduler : NSObject <CNScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFRunLoopObserver runLoopObserver; // ivar: _runLoopObserver
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
// -(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 qualityOfService:(unk)arg2  ;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
// -(id)performCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)dealloc;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 qualityOfService:(unk)arg1  ;


@end


#endif