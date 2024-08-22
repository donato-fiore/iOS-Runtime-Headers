// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFASYNCTASKBARRIER_H
#define PFASYNCTASKBARRIER_H

@class NSCondition, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PFAsyncTaskBarrier : NSObject

@property (readonly, copy) id *completionBlock; // ivar: _completionBlock
@property (readonly) NSCondition *conditionLock; // ivar: _conditionLock
@property (retain) NSArray *errors; // ivar: _errors
@property (readonly) NSString *label; // ivar: _label
@property (readonly) NSInteger remainingTaskCount; // ivar: _remainingTaskCount


-(id)description;
-(id)initWithLabel:(id)arg0 taskCount:(NSInteger)arg1 ;
-(id)initWithLabel:(id)arg0 taskCount:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)changeRemainingTaskCount:(NSInteger)arg0 ;
-(void)executeCriticalBlock:(id)arg0 ;
-(void)taskCompleted;
-(void)taskCompletedWithCriticalBlock:(id)arg0 ;
-(void)taskCompletedWithError:(id)arg0 ;
-(void)taskCompletedWithError:(id)arg0 criticalBlock:(id)arg1 ;
-(void)taskCompletedWithErrors:(id)arg0 ;
-(void)taskCompletedWithErrors:(id)arg0 criticalBlock:(id)arg1 ;
-(void)waitUntilCompleted;
-(void)waitUntilCompletedOrError;


@end


#endif