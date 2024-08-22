// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBTUTORIALMODALDISPLAY_H
#define UIKBTUTORIALMODALDISPLAY_H

@class NSArray, NSString, NSLayoutConstraint, UIFont;


#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIButton.h"
#import "UIKBTutorialModalDisplayStyling.h"

@interface UIKBTutorialModalDisplay : UIView

@property (retain, nonatomic) NSArray *adjustableConstraints; // ivar: _adjustableConstraints
@property (nonatomic) NSInteger appearance; // ivar: _appearance
@property (retain, nonatomic) UIVisualEffectView *backgroundBlurView; // ivar: _backgroundBlurView
@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) NSLayoutConstraint *containerViewTopConstraits; // ivar: _containerViewTopConstraits
@property (readonly, nonatomic) NSString *largeTitle;
@property (readonly, nonatomic) UIFont *largeTitleFont;
@property (readonly, nonatomic) NSArray *mediaContents;
@property (readonly, nonatomic) CGFloat mediaLayoutWidthAdjustment;
@property (retain, nonatomic) UIView *mediaView; // ivar: _mediaView
@property (readonly, nonatomic) CGFloat pagingInterval;
@property (readonly, nonatomic) BOOL presentsFullScreen;
@property (retain, nonatomic) UIKBTutorialModalDisplayStyling *styling; // ivar: _styling
@property (readonly, nonatomic) NSArray *textBodyDescriptions;
@property (readonly, nonatomic) UIFont *textBodyFont;
@property (readonly, nonatomic) NSInteger textBodyMaxLines;
@property (readonly, nonatomic) NSArray *textTitleDescriptions;
@property (readonly, nonatomic) UIFont *textTitleFont;
@property (retain, nonatomic) NSLayoutConstraint *widthAdjustmentConstraint; // ivar: _widthAdjustmentConstraint


-(BOOL)isPortrait;
-(CGFloat)containerBottomPadding;
-(CGFloat)containerTopPadding;
-(id)constructMediaView;
-(id)initWithKeyboardAppearance:(NSInteger)arg0 ;
-(struct CGSize )sizeForTutorialPageView;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)configBackgroundBlur;
-(void)configContainerView;
-(void)containerForAlertPresentation;
-(void)containerForFullScreenView;
-(void)containerForKeyboardView;
-(void)extraButtonTapAction;
-(void)layoutSubviews;
-(void)restartPagingAnimation;
-(void)tapInsideButton:(id)arg0 ;
-(void)updateMediaViewTextAndPlacement;


@end


#endif