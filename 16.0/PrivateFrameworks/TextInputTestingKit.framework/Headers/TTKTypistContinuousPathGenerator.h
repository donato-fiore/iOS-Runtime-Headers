// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTKTYPISTCONTINUOUSPATHGENERATOR_H
#define TTKTYPISTCONTINUOUSPATHGENERATOR_H



#import "TTKDefaultContinuousPathGenerator.h"

@interface TTKTypistContinuousPathGenerator : TTKDefaultContinuousPathGenerator {
    CGFloat _currentTimestamp;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha


-(id)_generateControlPoints:(id)arg0 alpha:(CGFloat)arg1 ;
-(id)_generateTouchPointsOnPath:(id)arg0 withSegmentTiming:(id)arg1 ;
-(id)generatePathFromInflectionPoints:(id)arg0 segmentTiming:(id)arg1 keys:(id)arg2 string:(id)arg3 layout:(id)arg4 ;
-(id)generatePathFromInflectionPoints:(id)arg0 timestamp:(CGFloat)arg1 segmentTiming:(id)arg2 keys:(id)arg3 string:(id)arg4 layout:(id)arg5 ;
-(id)initWithParams:(id)arg0 ;
-(struct CGPoint )_pointOnCurve:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif