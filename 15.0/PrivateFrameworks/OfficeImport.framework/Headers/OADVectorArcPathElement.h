// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADVECTORARCPATHELEMENT_H
#define OADVECTORARCPATHELEMENT_H



#import "OADPathElement.h"

@interface OADVectorArcPathElement : OADPathElement {
    OADAdjustCoord mLeft;
    OADAdjustCoord mTop;
    OADAdjustCoord mRight;
    OADAdjustCoord mBottom;
    OADAdjustPoint mStartVector;
    OADAdjustPoint mEndVector;
    BOOL mClockwise;
    BOOL mConnectedToPrevious;
}




-(BOOL)clockwise;
-(BOOL)connectedToPrevious;
-(id)initWithLeft:(struct OADAdjustCoord )arg0 top:(struct OADAdjustCoord )arg1 right:(struct OADAdjustCoord )arg2 bottom:(struct OADAdjustCoord )arg3 startVector:(struct OADAdjustPoint )arg4 endVector:(struct OADAdjustPoint )arg5 clockwise:(BOOL)arg6 connectedToPrevious:(BOOL)arg7 ;
-(struct OADAdjustCoord )bottom;
-(struct OADAdjustCoord )left;
-(struct OADAdjustCoord )right;
-(struct OADAdjustCoord )top;
-(struct OADAdjustPoint )endVector;
-(struct OADAdjustPoint )startVector;


@end


#endif