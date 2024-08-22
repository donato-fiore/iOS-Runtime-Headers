// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERFACEACTIONCONCRETEVISUALSTYLE_APPLETV_H
#define UIINTERFACEACTIONCONCRETEVISUALSTYLE_APPLETV_H

@class NSString;
@protocol UIInterfaceActionConcreteVisualStyleImpl;


#import "UIInterfaceActionConcreteVisualStyle.h"

@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)selectByPressGestureRequired;
-(CGFloat)actionSectionSpacing;
-(CGFloat)contentCornerRadius;
-(CGFloat)horizontalImageContentSpacing;
-(CGFloat)verticalImageContentSpacing;
-(id)actionImageViewTintColorForImageProperty:(id)arg0 actionViewState:(id)arg1 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(id)actionPropertiesAffectingLabelStyling;
-(id)actionTitleLabelColorForViewState:(id)arg0 ;
-(id)actionTitleLabelFontForViewState:(id)arg0 ;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg0 ;
-(id)defaultScreen;
-(id)newActionBackgroundViewForViewState:(id)arg0 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg0 ;
-(struct CGSize )minimumActionContentSize;
-(struct UIEdgeInsets )actionSequenceEdgeInsets;
-(struct UIEdgeInsets )contentMargin;
-(void)configureAttributesForActionRepresentationView:(id)arg0 actionViewState:(id)arg1 ;
-(void)configureAttributesForActionScrollView:(id)arg0 groupViewState:(id)arg1 ;
-(void)configureAttributesForTitleLabel:(id)arg0 classificationLabel:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg0 alongsideTransitionCoordinator:(id)arg1 ;
-(void)configureForPresentingGroupView:(id)arg0 alongsideTransitionCoordinator:(id)arg1 ;


@end


#endif