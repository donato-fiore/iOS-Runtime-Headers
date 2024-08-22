// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPLSCHEDULEDOVERRIDE_H
#define _CPLSCHEDULEDOVERRIDE_H

@class NSString, NSDate;
@protocol OS_dispatch_source, _CPLScheduledOverrideDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CPLScheduledOverride : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSString *_expirationDateStorageKey;
    NSString *_overrideReasonKey;
}


@property (readonly, nonatomic) NSUInteger budget; // ivar: _budget
@property (weak, nonatomic) NSObject<_CPLScheduledOverrideDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSString *status;


+(BOOL)isBudgetTypeSupportedForProgressiveOverriding:(NSUInteger)arg0 withReason:(NSUInteger)arg1 ;
+(CGFloat)nextTimeIntervalForOverridingBudget:(NSUInteger)arg0 withReason:(NSUInteger)arg1 ;
+(CGFloat)nextTimeIntervalToUseGivenCurrent:(CGFloat)arg0 expiryDate:(id)arg1 ;
+(NSUInteger)_systemBudgetForBudgetKey:(id)arg0 ;
+(id)_expirationDateStorageKeyForBudget:(NSUInteger)arg0 ;
+(id)budgetOverrideReasonStorageKeyForBudget:(NSUInteger)arg0 ;
+(id)currentBudgetOverrideTimeIntervalExpiryDateStorageKeyForBudget:(NSUInteger)arg0 ;
+(id)currentBudgetOverrideTimeIntervalStorageKeyForBudget:(NSUInteger)arg0 ;
-(BOOL)scheduleEndFromPersistedOverride;
-(BOOL)scheduleEndOfOverride;
-(id)initWithBudget:(NSUInteger)arg0 withReason:(NSUInteger)arg1 queue:(id)arg2 ;
-(void)_scheduleEndWithTimeInterval:(CGFloat)arg0 ;
-(void)cancel;
-(void)resetHeuristics;


@end


#endif