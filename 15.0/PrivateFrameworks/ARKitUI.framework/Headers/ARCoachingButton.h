// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGBUTTON_H
#define ARCOACHINGBUTTON_H

@class UIControl, UIColor, UIFont, UIImage, NSString;


#import "ARCoachingControlBlurredBackgroundView.h"
#import "ARCoachingWrappedButton.h"

@interface ARCoachingButton : UIControl

@property (retain, nonatomic) UIColor *black35PercentColor; // ivar: _black35PercentColor
@property (retain, nonatomic) UIColor *black70PercentColor; // ivar: _black70PercentColor
@property (retain, nonatomic) UIColor *blue100PercentColor; // ivar: _blue100PercentColor
@property (retain, nonatomic) UIColor *blue50PercentColor; // ivar: _blue50PercentColor
@property (retain, nonatomic) ARCoachingControlBlurredBackgroundView *blurredBackgroundView; // ivar: _blurredBackgroundView
@property (retain, nonatomic) UIFont *boldFont; // ivar: _boldFont
@property (retain, nonatomic) ARCoachingWrappedButton *button; // ivar: _button
@property (nonatomic) NSInteger buttonStyle; // ivar: _buttonStyle
@property (nonatomic) UIEdgeInsets contentEdgeInsets;
@property (nonatomic) NSInteger controlStyle; // ivar: _controlStyle
@property (nonatomic) NSInteger currentStyle; // ivar: _currentStyle
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) UIEdgeInsets largeImageInsets; // ivar: _largeImageInsets
@property (retain, nonatomic) UIFont *regularFont; // ivar: _regularFont
@property (nonatomic) NSInteger textStyle; // ivar: _textStyle
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *white100PercentColor; // ivar: _white100PercentColor
@property (retain, nonatomic) UIColor *white26PercentColor; // ivar: _white26PercentColor
@property (retain, nonatomic) UIColor *white35PercentColor; // ivar: _white35PercentColor
@property (retain, nonatomic) UIColor *white52PercentColor; // ivar: _white52PercentColor
@property (retain, nonatomic) UIColor *white70PercentColor; // ivar: _white70PercentColor
@property (retain, nonatomic) UIColor *white75PercentColor; // ivar: _white75PercentColor


-(id)_colorDarkenedIfNeededForColor:(id)arg0 ;
-(id)initWithButton:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 largeImageInsets:(struct UIEdgeInsets )arg4 ;
-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 buttonStyle:(NSInteger)arg1 textStyle:(NSInteger)arg2 controlStyle:(NSInteger)arg3 adjustsFontForContentSizeCategory:(BOOL)arg4 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_didUpdateContentSizeCategory:(id)arg0 ;
-(void)_didUpdateDarkenColorsSetting:(id)arg0 ;
-(void)_updateTitleStyleForButton:(id)arg0 withControlStyle:(NSInteger)arg1 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCurrentAppearanceIfNeeded;


@end


#endif