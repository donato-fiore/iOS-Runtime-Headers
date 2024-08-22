// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTCELLACTIONBUTTONSVIEW_H
#define NCNOTIFICATIONLISTCELLACTIONBUTTONSVIEW_H

@class UIView, NSArray, UIStackView, NSString, _UIStatesFeedbackGenerator;
@protocol PLContentSizeCategoryAdjusting, MTMaterialGrouping;


#import "NCNotificationListCellActionButton.h"

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>



@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) NSInteger backgroundMaterialRecipe; // ivar: _backgroundMaterialRecipe
@property (retain, nonatomic) UIStackView *buttonsStackView; // ivar: _buttonsStackView
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NCNotificationListCellActionButton *defaultActionButton; // ivar: _defaultActionButton
@property (retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator; // ivar: _defaultActionFeedbackGenerator
@property (readonly, nonatomic) CGFloat defaultWidth; // ivar: _defaultWidth
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPlayHaptic; // ivar: _didPlayHaptic
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightDefaultActionButton; // ivar: _highlightDefaultActionButton
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) BOOL shouldPerformDefaultAction;
@property (nonatomic) BOOL shouldVerticallyStackButtons; // ivar: _shouldVerticallyStackButtons
@property (nonatomic) CGFloat stretchedWidth; // ivar: _stretchedWidth
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_maxAllowedButtonWidth;
-(NSUInteger)_widthMultipleForVerticallyStackedButtonsWithCount:(NSUInteger)arg0 ;
-(id)senderForActionWithIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_actuateFeedbackForDefaultActionLockedIfNecessary;
-(void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
-(void)_configureActionButtonsWithActions:(id)arg0 ;
-(void)_configureButtonsStackViewIfNecessary;
-(void)_configureClippingViewIfNecessary;
-(void)_configureDefaultActionFeedbackIfNecessary;
-(void)_configureDefaultWidth;
-(void)_hideNonDefaultActionButtons;
-(void)_layoutButtonsStackView;
-(void)_layoutClippingView;
-(void)_performNonDefaultActionButtonsHideRevealAnimation:(id)arg0 ;
-(void)_revealNonDefaultActionButtons;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif