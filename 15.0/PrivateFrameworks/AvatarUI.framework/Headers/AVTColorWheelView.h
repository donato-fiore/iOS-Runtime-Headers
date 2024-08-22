// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOLORWHEELVIEW_H
#define AVTCOLORWHEELVIEW_H

@class NSArray, UIView;


#import "AVTAttributeValueView.h"

@interface AVTColorWheelView : AVTAttributeValueView

@property (retain, nonatomic) NSArray *circleViews; // ivar: _circleViews
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView


+(BOOL)colorItems:(id)arg0 containColorItem:(id)arg1 ;
+(id)buildCircleViewWithDiameter:(CGFloat)arg0 ;
+(id)colorItemsFrom:(id)arg0 excluding:(id)arg1 ;
-(id)buildAllCircleViews;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )rotatePoint:(struct CGPoint )arg0 aroundCenter:(struct CGPoint )arg1 withAngle:(CGFloat)arg2 ;
-(void)updateWithPrimaryItems:(id)arg0 extendedItems:(id)arg1 ;


@end


#endif