// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADQUARTERELLIPSETOPATHELEMENT_H
#define OADQUARTERELLIPSETOPATHELEMENT_H



#import "OADToPointPathElement.h"

@interface OADQuarterEllipseToPathElement : OADToPointPathElement {
    BOOL mStartsVertical;
}




-(BOOL)startsVertical;
-(id)initWithToPoint:(struct OADAdjustPoint )arg0 startsVertical:(BOOL)arg1 ;


@end


#endif