// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIALERTCONTROLLERVISUALSTYLEALERTTV_H
#define UIALERTCONTROLLERVISUALSTYLEALERTTV_H



#import "UIAlertControllerVisualStyleAlert.h"

@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert



-(BOOL)hideCancelAction:(id)arg0 inAlertController:(id)arg1 ;
-(BOOL)placementAvoidsKeyboard;
-(CGFloat)_marginAboveDetailMessageFirstBaseline;
-(CGFloat)_maximumContentWidth;
-(CGFloat)_minimumButtonWidth;
-(CGFloat)actionWidthForMinimumActionWidth:(CGFloat)arg0 ;
-(CGFloat)marginAboveMessageLabelFirstBaseline;
-(CGFloat)marginAboveTitleLabelFirstBaseline;
-(CGFloat)marginBelowLastLabelLastBaseline;
-(CGFloat)marginBelowMessageLabelLastBaseline;
-(CGFloat)marginBelowTitleLabelLastBaseline;
-(CGFloat)maximumWidth;
-(CGFloat)maximumWidthForTitleAndMessageContentView;
-(CGFloat)textFieldHorizontalMargin;
-(CGFloat)transitionDurationForPresentation:(BOOL)arg0 ofAlertController:(id)arg1 ;
-(NSInteger)_effectStyle;
-(NSInteger)maximumNumberOfLinesInMessageLabel;
-(NSInteger)maximumNumberOfLinesInTitleLabel;
-(NSInteger)permittedActionLayoutDirection;
-(id)_detailMessageFont;
-(id)_keyCommandInputForCancelAction;
-(id)dimmingViewForAlertController:(id)arg0 ;
-(id)messageLabelColor;
-(id)messageLabelFont;
-(id)preferredActionForActions:(id)arg0 suggestedPreferredAction:(id)arg1 ;
-(id)textFieldContainingViewWithTextField:(id)arg0 position:(NSInteger)arg1 ;
-(id)titleLabelColor;
-(id)titleLabelFont;
-(struct UIEdgeInsets )contentInsetsForContainerView:(id)arg0 ;
-(struct UIEdgeInsets )textFieldContentInset;
-(void)animateAlertControllerView:(id)arg0 ofAlertController:(id)arg1 forPresentation:(BOOL)arg2 inContainerView:(id)arg3 descendantOfContainerView:(id)arg4 duration:(CGFloat)arg5 completionBlock:(id)arg6 ;


@end


#endif