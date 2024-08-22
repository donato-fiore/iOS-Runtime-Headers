// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADQUADBEZIERCONTROLPOINTPATHELEMENT_H
#define OADQUADBEZIERCONTROLPOINTPATHELEMENT_H



#import "OADPathElement.h"

@interface OADQuadBezierControlPointPathElement : OADPathElement {
    OADAdjustPoint mControlPoint;
}




-(id)initWithControlPoint:(struct OADAdjustPoint )arg0 ;
-(struct OADAdjustPoint )controlPoint;


@end


#endif