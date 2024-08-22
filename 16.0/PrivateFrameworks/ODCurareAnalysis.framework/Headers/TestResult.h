// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TESTRESULT_H
#define TESTRESULT_H

@class NSDate, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface TestResult : NSObject

@property (retain, nonatomic) NSDate *maxTimestamp; // ivar: _maxTimestamp
@property (retain, nonatomic) NSDate *minTimestamp; // ivar: _minTimestamp
@property (nonatomic) NSInteger numSuccesses; // ivar: _numSuccesses
@property (retain, nonatomic) NSNumber *pValue; // ivar: _pValue
@property (retain, nonatomic) NSNumber *rejectNullHypothesis; // ivar: _rejectNullHypothesis
@property (nonatomic) NSInteger sampleSize; // ivar: _sampleSize
@property (nonatomic) BOOL testRan; // ivar: _testRan
@property (retain, nonatomic) NSString *testSkippedReason; // ivar: _testSkippedReason


-(id)description;
-(id)initWithTestRan:(BOOL)arg0 testSkippedReason:(id)arg1 pValue:(id)arg2 rejectNullHypothesis:(id)arg3 sampleSize:(NSInteger)arg4 numSuccesses:(NSInteger)arg5 minTimestamp:(id)arg6 maxTimestamp:(id)arg7 ;


@end


#endif