// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXBEZIERCURVE_H
#define PXBEZIERCURVE_H


#import <Foundation/Foundation.h>


@interface PXBezierCurve : NSObject {
    ? _startP;
    ? _ctrlP1;
    ? _ctrlP2;
    ? _endP;
}




-(id)initWithStartingPoint:(struct ? )arg0 controlPoint1:(struct ? )arg1 controlPoint2:(struct ? )arg2 endPoint:(struct ? )arg3 ;
-(struct ? )positionOnCurveAtFraction:(CGFloat)arg0 ;


@end


#endif