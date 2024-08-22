// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERFACEACTIONCONCRETEVISUALSTYLE_H
#define UIINTERFACEACTIONCONCRETEVISUALSTYLE_H

@class NSString;
@protocol UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying;

#import <Foundation/Foundation.h>


@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)selectByIndirectPointerTouchRequired;
-(BOOL)selectByPressGestureRequired;
-(BOOL)selectionFeedbackEnabled;
-(CGFloat)actionSectionSpacing;
-(CGFloat)actionTitleLabelMinimumScaleFactor;
-(CGFloat)contentCornerRadius;
-(CGFloat)horizontalImageContentSpacing;
-(CGFloat)verticalImageContentSpacing;
-(id)actionClassificationLabelColorForViewState:(id)arg0 ;
-(id)actionClassificationLabelFontForViewState:(id)arg0 ;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(id)actionImageViewTintColorForImageProperty:(id)arg0 actionViewState:(id)arg1 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(id)actionPropertiesAffectingImageViewStyling;
-(id)actionPropertiesAffectingLabelStyling;
-(id)actionTitleLabelColorForViewState:(id)arg0 ;
-(id)actionTitleLabelFontForViewState:(id)arg0 ;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultScreen;
-(id)newActionBackgroundViewForViewState:(id)arg0 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg0 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg0 ;
-(id)newRepresentationViewForAction:(id)arg0 ;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg0 ;
-(struct CGSize )maximumActionGroupContentSize;
-(struct CGSize )minimumActionContentSize;
-(struct UIEdgeInsets )actionSequenceEdgeInsets;
-(struct UIEdgeInsets )contentMargin;
-(void)configureAttributesForActionRepresentationView:(id)arg0 actionViewState:(id)arg1 ;
-(void)configureAttributesForActionScrollView:(id)arg0 groupViewState:(id)arg1 ;
-(void)configureAttributesForImageView:(id)arg0 imageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg0 classificationLabel:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg0 alongsideTransitionCoordinator:(id)arg1 ;
-(void)configureForPresentingGroupView:(id)arg0 alongsideTransitionCoordinator:(id)arg1 ;


@end


#endif