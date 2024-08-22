// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSTARRATINGCONTROL_H
#define SKSTARRATINGCONTROL_H

@class UIControl, UIImageView, UILabel, NSString;



@interface SKStarRatingControl : UIControl {
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    CGSize _hitPadding;
    CGPoint _trackingLastPoint;
    CGPoint _trackingStartPoint;
    float _value;
}


@property (copy, nonatomic) NSString *explanationText;
@property (nonatomic) CGFloat starWidth; // ivar: _starWidth
@property (nonatomic) float value;


-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canHandleSwipes;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_newExplanationLabel;
-(id)initWithBackgroundImage:(id)arg0 foregroundImage:(id)arg1 ;
-(struct CGRect )_foregroundImageClipBounds;
-(struct CGRect )hitRect;
-(void)_updateValueForPoint:(struct CGPoint )arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHitPadding:(struct CGSize )arg0 ;
-(void)sizeToFit;


@end


#endif