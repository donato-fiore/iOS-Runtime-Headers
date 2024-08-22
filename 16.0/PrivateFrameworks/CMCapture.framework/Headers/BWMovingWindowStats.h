// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWMOVINGWINDOWSTATS_H
#define BWMOVINGWINDOWSTATS_H



#import "BWStats.h"

@interface BWMovingWindowStats : BWStats {
    int _numDataPoints;
    int _dataPointIndex;
    *CGFloat _dataPoints;
}


@property (readonly, nonatomic) int windowSize; // ivar: _windowSize


-(CGFloat)max;
-(CGFloat)min;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithWindowSize:(int)arg0 ;
-(void)addDataPoint:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif