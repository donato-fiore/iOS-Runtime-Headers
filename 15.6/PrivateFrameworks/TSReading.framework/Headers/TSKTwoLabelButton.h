// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKTWOLABELBUTTON_H
#define TSKTWOLABELBUTTON_H

@class UIButton, UIImage, UIImageView, UILabel, UIColor;



@interface TSKTwoLabelButton : UIButton

@property (retain, nonatomic) UIImage *disabledStateImage; // ivar: mDisabledStateImage
@property (retain, nonatomic) UIImage *highlightedStateImage; // ivar: mHighlightedStateImage
@property (retain, nonatomic) UIImageView *imageView; // ivar: mImageView
@property (retain, nonatomic) UIImage *normalStateImage; // ivar: mNormalStateImage
@property (retain, nonatomic) UILabel *secondLabel; // ivar: mSecondLabel
@property (retain, nonatomic) UIColor *secondLabelTextColor; // ivar: mSecondLabelTextColor


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)p_syncButtonState;


@end


#endif