// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTTOKENBUCKET_H
#define RTTOKENBUCKET_H


#import <Foundation/Foundation.h>


@interface RTTokenBucket : NSObject {
    CGFloat _fillRate;
    CGFloat _capacity;
    CGFloat _operationCost;
    CGFloat _tokenBucket;
    CGFloat _lastArrivalTime;
    CGFloat _totalInterArrivalTime;
    CGFloat _wastedTokens;
    CGFloat _totalTokensGenerated;
    CGFloat _totalTokensConsumed;
    NSUInteger _totalOperations;
    NSUInteger _operationsAllowed;
}


@property (nonatomic) CGFloat interArrivalTime; // ivar: _interArrivalTime
@property (nonatomic) CGFloat lastBucketFill; // ivar: _lastBucketFill


-(BOOL)_consumeTokens:(NSUInteger)arg0 ;
-(BOOL)operationAllowed;
-(BOOL)operationAllowedWithCost:(CGFloat)arg0 ;
-(CGFloat)timeIntervalUntilOperationAllowed;
-(CGFloat)timeIntervalUntilOperationAllowedWithCost:(CGFloat)arg0 ;
-(NSUInteger)countOfOperationsAllowed;
-(NSUInteger)countOfOperationsAllowedWithCost:(CGFloat)arg0 ;
-(id)dumpStatistics;
-(id)init;
-(id)initWithFillRate:(CGFloat)arg0 capacity:(CGFloat)arg1 ;
-(id)initWithFillRate:(CGFloat)arg0 capacity:(CGFloat)arg1 initialAllocation:(CGFloat)arg2 ;
-(void)_replenishTokens;
-(void)reset;


@end


#endif