// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFBADGEMASKVIEW_H
#define SFBADGEMASKVIEW_H

@class UIView, CAShapeLayer;



@interface SFBadgeMaskView : UIView

@property (nonatomic) CGRect badgeRect; // ivar: _badgeRect
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;


+(Class)layerClass;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateShape;
-(void)layoutSubviews;


@end


#endif