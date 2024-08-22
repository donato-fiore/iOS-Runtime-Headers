// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNBLOCKCOUNTINGSCHEDULERDECORATOR_H
#define CNBLOCKCOUNTINGSCHEDULERDECORATOR_H

@class NSString;
@protocol CNScheduler;

#import <Foundation/Foundation.h>


@interface CNBlockCountingSchedulerDecorator : NSObject <CNScheduler>



@property (readonly, nonatomic) NSUInteger activeBlockCount; // ivar: _activeBlockCount
@property (readonly, nonatomic) NSUInteger completedBlockCount; // ivar: _completedBlockCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger pendingBlockCount; // ivar: _pendingBlockCount
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


+(id)os_log;
-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
// -(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 qualityOfService:(unk)arg2  ;
-(id)initWithScheduler:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
// -(id)performCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)blockBecameActive;
-(void)blockBecameCompleted;
-(void)blockBecamePending;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 qualityOfService:(unk)arg1  ;


@end


#endif