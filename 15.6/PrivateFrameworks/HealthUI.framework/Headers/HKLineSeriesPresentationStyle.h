// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKLINESERIESPRESENTATIONSTYLE_H
#define HKLINESERIESPRESENTATIONSTYLE_H


#import <Foundation/Foundation.h>

#import "HKAxisLabelStyle.h"
#import "HKLineSeriesPointMarkerStyle.h"
#import "HKFillStyle.h"
#import "HKLegendPointAnnotationStyle.h"
#import "HKStrokeStyle.h"

@interface HKLineSeriesPresentationStyle : NSObject

@property (retain, nonatomic) HKAxisLabelStyle *annotationStyle; // ivar: _annotationStyle
@property (retain, nonatomic) HKAxisLabelStyle *axisAnnotationStyle; // ivar: _axisAnnotationStyle
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *endCapStyle; // ivar: _endCapStyle
@property (retain, nonatomic) HKFillStyle *fillStyle; // ivar: _fillStyle
@property (retain, nonatomic) HKLegendPointAnnotationStyle *legendAnnotationStyle; // ivar: _legendAnnotationStyle
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *pointMarkerStyle; // ivar: _pointMarkerStyle
@property (nonatomic) BOOL shouldApplyRollingAverage; // ivar: _shouldApplyRollingAverage
@property (nonatomic) BOOL shouldNegateAnnotationValue; // ivar: _shouldNegateAnnotationValue
@property (nonatomic) CGFloat sineWaveSmoothingFactor; // ivar: _sineWaveSmoothingFactor
@property (retain, nonatomic) HKStrokeStyle *strokeStyle; // ivar: _strokeStyle
@property (nonatomic) int waveForm; // ivar: _waveForm




@end


#endif