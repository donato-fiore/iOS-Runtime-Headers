// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADCUBICBEZIERTOPATHELEMENT_H
#define OADCUBICBEZIERTOPATHELEMENT_H



#import "OADPathElement.h"

@interface OADCubicBezierToPathElement : OADPathElement {
    OADAdjustPoint mControlPoint1;
    OADAdjustPoint mControlPoint2;
    OADAdjustPoint mToPoint;
    BOOL mRelative;
}




-(BOOL)relative;
-(id)initWithControlPoint1:(struct OADAdjustPoint )arg0 controlPoint2:(struct OADAdjustPoint )arg1 toPoint:(struct OADAdjustPoint )arg2 ;
-(struct OADAdjustPoint )controlPoint1;
-(struct OADAdjustPoint )controlPoint2;
-(struct OADAdjustPoint )toPoint;
-(void)setRelative:(BOOL)arg0 ;


@end


#endif