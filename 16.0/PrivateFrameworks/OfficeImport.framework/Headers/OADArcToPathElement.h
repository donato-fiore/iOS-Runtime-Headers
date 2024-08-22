// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADARCTOPATHELEMENT_H
#define OADARCTOPATHELEMENT_H



#import "OADPathElement.h"

@interface OADArcToPathElement : OADPathElement {
    OADAdjustPoint mSemiaxes;
    OADAdjustCoord mStartAngle;
    OADAdjustCoord mAngleLength;
}




-(id)initWithSemiaxes:(struct OADAdjustPoint )arg0 startAngle:(struct OADAdjustCoord )arg1 angleLength:(struct OADAdjustCoord )arg2 ;
-(struct OADAdjustCoord )angleLength;
-(struct OADAdjustCoord )startAngle;
-(struct OADAdjustPoint )semiaxes;


@end


#endif