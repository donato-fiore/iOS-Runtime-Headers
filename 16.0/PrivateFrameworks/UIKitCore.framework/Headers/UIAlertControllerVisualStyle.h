// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIALERTCONTROLLERVISUALSTYLE_H
#define UIALERTCONTROLLERVISUALSTYLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIAlertControllerDescriptor.h"
#import "UIInterfaceActionVisualStyle.h"
#import "UITraitCollection.h"

@interface UIAlertControllerVisualStyle : NSObject <NSCopying>



@property (retain, nonatomic) UIAlertControllerDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) NSInteger forcedInterfaceIdiom; // ivar: _forcedInterfaceIdiom
@property (readonly, nonatomic) UIInterfaceActionVisualStyle *interfaceActionVisualStyle; // ivar: _interfaceActionVisualStyle
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(NSInteger)interfaceActionPresentationStyle;
+(void)positionContentsOfAlertController:(id)arg0 alertContentView:(id)arg1 availableSpaceView:(id)arg2 visualStyle:(id)arg3 updatableConstraints:(id)arg4 ;
-(BOOL)_shouldReverseActions;
-(BOOL)hideCancelAction:(id)arg0 inAlertController:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)placementAvoidsKeyboard;
-(BOOL)shouldOccludeDuringPresentation;
-(BOOL)shouldPreserveRespondersAcrossWindows;
-(BOOL)transitionOfType:(NSInteger)arg0 shouldBeInteractiveForAlertController:(id)arg1 ;
-(CGFloat)_marginAboveDetailMessageFirstBaseline;
-(CGFloat)_marginAroundActionGroup;
-(CGFloat)_scaledMarginAboveDetailMessageFirstBaseline;
-(CGFloat)_scaledMarginAboveMessageLabelFirstBaseline;
-(CGFloat)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg0 titleText:(id)arg1 ;
-(CGFloat)_scaledMarginBelowLastLabelLastBaseline;
-(CGFloat)_scaledMarginBelowMessageLabelLastBaseline;
-(CGFloat)_scaledMarginBelowTitleLabelLastBaseline;
-(CGFloat)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg0 ;
-(CGFloat)_scaledSafeBaselineHeightForLabelFont:(id)arg0 inAlertControllerView:(id)arg1 ;
-(CGFloat)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg0 ;
-(CGFloat)_spacingBetweenDismissButtonAndContent;
-(CGFloat)actionWidthForMinimumActionWidth:(CGFloat)arg0 ;
-(CGFloat)contentHorizontalMargin;
-(CGFloat)contentVerticalMargin;
-(CGFloat)marginAboveMessageLabelFirstBaseline;
-(CGFloat)marginAboveTitleLabelFirstBaseline;
-(CGFloat)marginBelowLastLabelLastBaseline;
-(CGFloat)marginBelowMessageLabelLastBaseline;
-(CGFloat)marginBelowTitleLabelLastBaseline;
-(CGFloat)maximumHeightForDisplayOnScreen:(id)arg0 ;
-(CGFloat)maximumWidth;
-(CGFloat)maximumWidthForTitleAndMessageContentView;
-(CGFloat)minimumWidth;
-(CGFloat)textFieldHorizontalMargin;
-(CGFloat)transitionDurationForPresentation:(BOOL)arg0 ofAlertController:(id)arg1 ;
-(NSInteger)maximumNumberOfLinesInMessageLabel;
-(NSInteger)maximumNumberOfLinesInTitleLabel;
-(NSInteger)permittedActionLayoutDirection;
-(id)_detailMessageFont;
-(id)_keyCommandInputForCancelAction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultActionFont;
-(id)dimmingViewForAlertController:(id)arg0 ;
-(id)init;
-(id)interactionProgressForTransitionOfType:(NSInteger)arg0 forAlertController:(id)arg1 ;
-(id)messageLabelColor;
-(id)messageLabelFont;
-(id)preferredActionFont;
-(id)preferredActionForActions:(id)arg0 suggestedPreferredAction:(id)arg1 ;
-(id)regularActionFont;
-(id)textFieldContainingViewWithTextField:(id)arg0 position:(NSInteger)arg1 ;
-(id)tintColorForAlertController:(id)arg0 ;
-(id)titleLabelColor;
-(id)titleLabelFont;
-(id)vibrancyEffectForTitleAndMessageLabel;
-(struct CGSize )collectionViewOutsetSize;
-(struct CGSize )minimumActionContentSize;
-(struct UIEdgeInsets )actionImageMarginForAction;
-(struct UIEdgeInsets )actionSequenceEdgeInsets;
-(struct UIEdgeInsets )contentInsetsForContainerView:(id)arg0 ;
-(struct UIEdgeInsets )textFieldContentInset;
-(void)_reloadInterfaceActionVisualStyle;
-(void)animateAlertControllerView:(id)arg0 ofAlertController:(id)arg1 forPresentation:(BOOL)arg2 inContainerView:(id)arg3 descendantOfContainerView:(id)arg4 duration:(CGFloat)arg5 completionBlock:(id)arg6 ;
-(void)animateRevealOfAlertControllerView:(id)arg0 alertController:(id)arg1 inContainerView:(id)arg2 duration:(CGFloat)arg3 completionBlock:(id)arg4 ;
-(void)configureAttributesForImageView:(id)arg0 imageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg0 classificationLabel:(id)arg1 actionViewState:(id)arg2 ;


@end


#endif