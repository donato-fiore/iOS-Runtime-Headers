// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBSTROKEVIEW_H
#define UIKBSTROKEVIEW_H

@class NSMutableArray;


#import "UIView.h"

@interface UIKBStrokeView : UIView {
    NSMutableArray *_points;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addStrokePoint:(struct CGPoint )arg0 withTimestamp:(CGFloat)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)resetStrokePoints;


@end


#endif