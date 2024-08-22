// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADADJUSTRECT_H
#define OADADJUSTRECT_H


#import <Foundation/Foundation.h>


@interface OADAdjustRect : NSObject {
    OADAdjustCoord mLeft;
    OADAdjustCoord mTop;
    OADAdjustCoord mRight;
    OADAdjustCoord mBottom;
}




-(id)description;
-(id)initWithLeft:(struct OADAdjustCoord )arg0 top:(struct OADAdjustCoord )arg1 right:(struct OADAdjustCoord )arg2 bottom:(struct OADAdjustCoord )arg3 ;
-(struct OADAdjustCoord )bottom;
-(struct OADAdjustCoord )left;
-(struct OADAdjustCoord )right;
-(struct OADAdjustCoord )top;


@end


#endif