// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADQUADBEZIERTOPATHELEMENT_H
#define OADQUADBEZIERTOPATHELEMENT_H



#import "OADPathElement.h"

@interface OADQuadBezierToPathElement : OADPathElement {
    OADAdjustPoint mControlPoint;
    OADAdjustPoint mToPoint;
}




-(id)initWithControlPoint:(struct OADAdjustPoint )arg0 toPoint:(struct OADAdjustPoint )arg1 ;
-(struct OADAdjustPoint )controlPoint;
-(struct OADAdjustPoint )toPoint;


@end


#endif