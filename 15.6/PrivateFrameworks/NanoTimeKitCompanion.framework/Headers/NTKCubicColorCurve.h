// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCUBICCOLORCURVE_H
#define NTKCUBICCOLORCURVE_H



#import "NTKColorCurve.h"
#import "NTKCubicSpline.h"

@interface NTKCubicColorCurve : NTKColorCurve {
    NTKCubicSpline *_spline;
    ? _colors;
    *float _fractions;
    NSUInteger _count;
}




-(id)colorForFraction:(float)arg0 ;
-(id)initWithColorCurveElements:(id)arg0 ;
-(id)initWithCubicColorCurveElements:(id)arg0 ;
-(id)rgbfColorForFraction;
-(void)dealloc;


@end


#endif