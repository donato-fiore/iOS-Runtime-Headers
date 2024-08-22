// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPLATTERACTIONBUTTONSVIEW_H
#define PLPLATTERACTIONBUTTONSVIEW_H

@class UIView, UIColor, UIStackView, NSString, UIAction, _UIStatesFeedbackGenerator;
@protocol PLContentSizeCategoryAdjusting, MTMaterialGrouping;


#import "PLPlatterActionButton.h"

@interface PLPlatterActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) NSInteger backgroundMaterialRecipe; // ivar: _backgroundMaterialRecipe
@property (retain, nonatomic) UIColor *backgroundTintColor; // ivar: _backgroundTintColor
@property (retain, nonatomic) UIStackView *buttonsStackView; // ivar: _buttonsStackView
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIAction *defaultAction; // ivar: _defaultAction
@property (retain, nonatomic) PLPlatterActionButton *defaultActionButton; // ivar: _defaultActionButton
@property (retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator; // ivar: _defaultActionFeedbackGenerator
@property (readonly, nonatomic) CGFloat defaultWidth; // ivar: _defaultWidth
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPlayHaptic; // ivar: _didPlayHaptic
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightDefaultActionButton; // ivar: _highlightDefaultActionButton
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) CGFloat stretchedWidth; // ivar: _stretchedWidth
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic, getter=isVerticallyStacked) BOOL verticallyStacked; // ivar: _verticallyStacked


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_maxAllowedButtonWidth;
-(NSUInteger)_widthMultipleForVerticallyStackedButtonsWithCount:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 actions:(id)arg1 cornerRadius:(CGFloat)arg2 shouldVerticallyStack:(BOOL)arg3 ;
-(id)senderForActionWithIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_actuateFeedbackForDefaultActionLockedIfNecessary;
-(void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
-(void)_configureDefaultActionFeedbackIfNecessary;
-(void)_hideNonDefaultActionButtons;
-(void)_layoutButtonsStackView;
-(void)_layoutClippingView;
-(void)_performNonDefaultActionButtonsHideRevealAnimation:(id)arg0 ;
-(void)_revealNonDefaultActionButtons;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif