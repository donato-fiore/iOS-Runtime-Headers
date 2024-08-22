// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TWOSAMPLETESTRESULT_H
#define TWOSAMPLETESTRESULT_H

@class NSDate, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface TwoSampleTestResult : NSObject

@property (retain, nonatomic) NSDate *maxTimestamp1; // ivar: _maxTimestamp1
@property (retain, nonatomic) NSDate *maxTimestamp2; // ivar: _maxTimestamp2
@property (retain, nonatomic) NSDate *minTimestamp1; // ivar: _minTimestamp1
@property (retain, nonatomic) NSDate *minTimestamp2; // ivar: _minTimestamp2
@property (nonatomic) NSInteger numSuccesses1; // ivar: _numSuccesses1
@property (nonatomic) NSInteger numSuccesses2; // ivar: _numSuccesses2
@property (retain, nonatomic) NSNumber *rejectNullHypothesis; // ivar: _rejectNullHypothesis
@property (nonatomic) NSInteger sampleSize1; // ivar: _sampleSize1
@property (nonatomic) NSInteger sampleSize2; // ivar: _sampleSize2
@property (nonatomic) BOOL testRan; // ivar: _testRan
@property (retain, nonatomic) NSString *testSkippedReason; // ivar: _testSkippedReason
@property (retain, nonatomic) NSNumber *testStatistic; // ivar: _testStatistic


-(id)description;
-(id)initWithTestRan:(BOOL)arg0 testSkippedReason:(id)arg1 testStatistic:(id)arg2 rejectNullHypothesis:(id)arg3 sampleSize1:(NSInteger)arg4 numSuccesses1:(NSInteger)arg5 minTimestamp1:(id)arg6 maxTimestamp1:(id)arg7 sampleSize2:(NSInteger)arg8 numSuccesses2:(NSInteger)arg9 minTimestamp2:(id)arg10 maxTimestamp2:(id)arg11 ;


@end


#endif