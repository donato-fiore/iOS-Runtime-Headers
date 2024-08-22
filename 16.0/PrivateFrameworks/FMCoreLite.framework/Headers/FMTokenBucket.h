// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMTOKENBUCKET_H
#define FMTOKENBUCKET_H


#import <Foundation/Foundation.h>


@interface FMTokenBucket : NSObject

@property (nonatomic) CGFloat capacity; // ivar: _capacity
@property (nonatomic) CGFloat fillRate; // ivar: _fillRate
@property (nonatomic) CGFloat interArrivalTime; // ivar: _interArrivalTime
@property (nonatomic) CGFloat lastArrivalTime; // ivar: _lastArrivalTime
@property (nonatomic) CGFloat lastBucketFill; // ivar: _lastBucketFill
@property (readonly, nonatomic) BOOL operationAllowed;
@property (nonatomic) CGFloat operationCost; // ivar: _operationCost
@property (nonatomic) NSInteger operationsAllowed; // ivar: _operationsAllowed
@property (nonatomic) CGFloat tokenBucket; // ivar: _tokenBucket
@property (nonatomic) CGFloat totalInterArrivalTime; // ivar: _totalInterArrivalTime
@property (nonatomic) NSInteger totalOperations; // ivar: _totalOperations
@property (nonatomic) CGFloat totalTokensConsumed; // ivar: _totalTokensConsumed
@property (nonatomic) CGFloat totalTokensGenerated; // ivar: _totalTokensGenerated
@property (nonatomic) CGFloat wastedTokens; // ivar: _wastedTokens


-(BOOL)_consumeTokens:(NSInteger)arg0 ;
-(BOOL)operationAllowedWithCost:(CGFloat)arg0 ;
-(CGFloat)timeIntervalUntilOperationAllowed;
-(CGFloat)timeIntervalUntilOperationAllowedWithCost:(CGFloat)arg0 ;
-(NSInteger)countOfOperationsAllowed;
-(NSInteger)countOfOperationsAllowedWithCost:(CGFloat)arg0 ;
-(id)dumpStatistics;
-(id)initWithFillRate:(CGFloat)arg0 capacity:(CGFloat)arg1 ;
-(id)initWithFillRate:(CGFloat)arg0 capacity:(CGFloat)arg1 initialAllocation:(CGFloat)arg2 ;
-(void)_replenishTokens;
-(void)reset;


@end


#endif