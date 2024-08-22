// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCUSTOMTITLEVIEW_H
#define EKCUSTOMTITLEVIEW_H

@class UIView, UIImageView, UILabel;



@interface EKCustomTitleView : UIView

@property BOOL animating; // ivar: _animating
@property (retain) UIImageView *originalImage; // ivar: _originalImage
@property (retain) UILabel *originalTitle; // ivar: _originalTitle
@property BOOL showSubtitle; // ivar: _showSubtitle
@property (retain) UILabel *subTitle; // ivar: _subTitle
@property (retain) UILabel *title; // ivar: _title
@property (retain) UIImageView *titleImage; // ivar: _titleImage


-(BOOL)isAccessibilityElement;
-(NSInteger)accessibilityElementCount;
-(NSInteger)indexOfAccessibilityElement:(id)arg0 ;
-(id)accessibilityElementAtIndex:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 subTitle:(id)arg1 eventViewController:(id)arg2 ;
-(struct CGRect )_centerAndClipFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)animateInWithCompletionBlock:(id)arg0 ;
-(void)animateOutWithCompletionBlock:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif