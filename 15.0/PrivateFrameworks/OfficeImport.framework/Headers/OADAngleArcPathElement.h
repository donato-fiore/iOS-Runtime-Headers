// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADANGLEARCPATHELEMENT_H
#define OADANGLEARCPATHELEMENT_H



#import "OADPathElement.h"

@interface OADAngleArcPathElement : OADPathElement {
    OADAdjustPoint mCenter;
    OADAdjustPoint mSemiaxes;
    OADAdjustCoord mStartAngle;
    OADAdjustCoord mAngleLength;
    BOOL mConnectedToPrevious;
}




-(BOOL)connectedToPrevious;
-(id)initWithCenter:(struct OADAdjustPoint )arg0 semiaxes:(struct OADAdjustPoint )arg1 startAngle:(struct OADAdjustCoord )arg2 angleLength:(struct OADAdjustCoord )arg3 connectedToPrevious:(BOOL)arg4 ;
-(struct OADAdjustCoord )angleLength;
-(struct OADAdjustCoord )startAngle;
-(struct OADAdjustPoint )center;
-(struct OADAdjustPoint )semiaxes;


@end


#endif