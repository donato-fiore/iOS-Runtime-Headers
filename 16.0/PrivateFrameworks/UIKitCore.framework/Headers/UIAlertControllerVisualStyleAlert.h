// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIALERTCONTROLLERVISUALSTYLEALERT_H
#define UIALERTCONTROLLERVISUALSTYLEALERT_H



#import "UIAlertControllerVisualStyle.h"

@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle



-(BOOL)placementAvoidsKeyboard;
-(CGFloat)_marginAroundActionGroup;
-(CGFloat)marginAboveMessageLabelFirstBaseline;
-(CGFloat)marginAboveTitleLabelFirstBaseline;
-(CGFloat)marginBelowLastLabelLastBaseline;
-(CGFloat)marginBelowMessageLabelLastBaseline;
-(CGFloat)marginBelowTitleLabelLastBaseline;
-(CGFloat)maximumWidth;
-(CGFloat)textFieldHorizontalMargin;
-(CGFloat)transitionDurationForPresentation:(BOOL)arg0 ofAlertController:(id)arg1 ;
-(NSInteger)permittedActionLayoutDirection;
-(id)messageLabelColor;
-(id)messageLabelFont;
-(id)textFieldContainingViewWithTextField:(id)arg0 position:(NSInteger)arg1 ;
-(id)titleLabelColor;
-(id)titleLabelFont;
-(struct UIEdgeInsets )contentInsetsForContainerView:(id)arg0 ;
-(void)animateAlertControllerView:(id)arg0 ofAlertController:(id)arg1 forPresentation:(BOOL)arg2 inContainerView:(id)arg3 descendantOfContainerView:(id)arg4 duration:(CGFloat)arg5 completionBlock:(id)arg6 ;


@end


#endif