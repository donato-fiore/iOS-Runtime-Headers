// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDKITTHROTTLER_H
#define WBSCLOUDKITTHROTTLER_H

@class NSMutableArray, NSArray;
@protocol WBSCloudKitThrottlerDataStore;

#import <Foundation/Foundation.h>


@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    CGFloat _numberOfSecondsToMonitor;
    NSUInteger _maximumNumberOfOperationWithinMonitoredPeriod;
}


@property (weak, nonatomic) NSObject<WBSCloudKitThrottlerDataStore> *dataStore; // ivar: _dataStore


+(BOOL)policyStringRepresentsValidPolicy:(id)arg0 ;
+(id)_distributionBucketsFromConfiguration:(id)arg0 ;
-(BOOL)_loadDistributionConfiguration:(id)arg0 ;
-(BOOL)_throttlerIsActive;
-(BOOL)permitsOperationWithPriority:(NSInteger)arg0 ;
-(CGFloat)_currentMinimumTimeIntervalBetweenOperations;
-(CGFloat)_minimumTimeBetweenOperationsForOperations:(id)arg0 ;
-(CGFloat)_test_numberOfSecondsToMonitor;
-(CGFloat)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
-(CGFloat)_timeIntervalUntilOperationShouldBePruned:(id)arg0 ;
-(NSUInteger)_test_maximumNumberOfOperationWithinMonitoredPeriod;
-(id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
-(id)dateOfNextPermittedOperationWithPriority:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPolicyString:(id)arg0 ;
-(void)_addOperationAtDate:(id)arg0 ;
-(void)_loadRecordOfPastOperations;
-(void)_pruneExpiredOrInvalidOperations;
-(void)_saveRecordOfPastOperations;
-(void)operationWithPriority:(NSInteger)arg0 didCompleteWithResult:(NSInteger)arg1 ;
-(void)reloadRecordOfPastOperations;
-(void)setPolicyString:(id)arg0 ;


@end


#endif