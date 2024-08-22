// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADTOPOINTPATHELEMENT_H
#define OADTOPOINTPATHELEMENT_H



#import "OADPathElement.h"

@interface OADToPointPathElement : OADPathElement {
    OADAdjustPoint mToPoint;
    BOOL mRelative;
}




-(BOOL)relative;
-(id)initWithToPoint:(struct OADAdjustPoint )arg0 ;
-(struct OADAdjustPoint )toPoint;
-(void)setRelative:(BOOL)arg0 ;


@end


#endif