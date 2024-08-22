// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERFACEACTIONVISUALSTYLE_H
#define UIINTERFACEACTIONVISUALSTYLE_H

@class UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl>, NSString;
@protocol UIInterfaceActionConcreteVisualStyleImplInternal, UIInterfaceActionConcreteVisualStyleImpl, NSCopying;

#import <Foundation/Foundation.h>

#import "UIInterfaceActionGroupViewState.h"
#import "UIInterfaceActionOverrideVisualStyle.h"

@interface UIInterfaceActionVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, UIInterfaceActionConcreteVisualStyleImpl, NSCopying>



@property (retain, nonatomic) UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *concreteVisualStyle; // ivar: _concreteVisualStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *fontForViewStateBlock; // ivar: _fontForViewStateBlock
@property (readonly, nonatomic) UIInterfaceActionGroupViewState *groupViewState; // ivar: _groupViewState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIInterfaceActionOverrideVisualStyle *visualStyleOverride; // ivar: _visualStyleOverride


+(id)idiomSpecificStyleForTraitCollection:(id)arg0 presentationStyle:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)selectByIndirectPointerTouchRequired;
-(BOOL)selectByPressGestureRequired;
-(BOOL)selectionFeedbackEnabled;
-(CGFloat)actionSectionSpacing;
-(CGFloat)actionTitleLabelMinimumScaleFactor;
-(CGFloat)contentCornerRadius;
-(CGFloat)horizontalImageContentSpacing;
-(CGFloat)verticalImageContentSpacing;
-(id)_base_actionPropertiesAffectingImageViewStyling;
-(id)_base_actionPropertiesAffectingLabelStyling;
-(id)_styleForVisualProperties;
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
-(id)copyWithGroupViewState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultConcreteActionTitleLabelPreferredFont;
-(id)defaultConcreteActionTitleLabelRegularFont;
-(id)defaultScreen;
-(id)init;
-(id)initWithConcreteVisualStyle:(id)arg0 ;
-(id)newActionBackgroundViewForViewState:(id)arg0 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg0 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg0 ;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg0 ;
-(struct CGSize )maximumActionGroupContentSize;
-(struct CGSize )minimumActionContentSize;
-(struct UIEdgeInsets )actionSequenceEdgeInsets;
-(struct UIEdgeInsets )contentMargin;
-(void)_base_configureAttributesForImageView:(id)arg0 imageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)_base_configureAttributesForTitleLabel:(id)arg0 classificationLabel:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForActionRepresentationView:(id)arg0 actionViewState:(id)arg1 ;
-(void)configureAttributesForActionScrollView:(id)arg0 groupViewState:(id)arg1 ;
-(void)configureAttributesForImageView:(id)arg0 imageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg0 classificationLabel:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg0 alongsideTransitionCoordinator:(id)arg1 ;
-(void)configureForPresentingGroupView:(id)arg0 alongsideTransitionCoordinator:(id)arg1 ;


@end


#endif