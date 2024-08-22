// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCUBICSPLINE_H
#define NTKCUBICSPLINE_H


#import <Foundation/Foundation.h>


@interface NTKCubicSpline : NSObject {
    *? _processedPoints;
    *? _controlPoints;
    *? _workspace;
    *? _splineMatrix;
    BOOL _closed;
    int _length;
    int _startIndex;
    ? _a;
    ? _b;
    ? _c;
    ? _d;
}




-(BOOL)isClosed;
-(id)initWithNumberOfControlPoints:(int)arg0 isClosed:(BOOL)arg1 ;
-(id)interpolateAt;
-(id)interpolateAtderivative;
-(int)length;
-(struct ? *)controlPointsBuffer;
-(void)_processClosedSpline;
-(void)_processOpenSpline;
-(void)_processSpline;
-(void)dealloc;
-(void)getControlPointsprocessedPoints;
-(void)interpolateWithSteps:(int)arg0 interpolation:(id)arg1 ;
-(void)process;


@end


#endif