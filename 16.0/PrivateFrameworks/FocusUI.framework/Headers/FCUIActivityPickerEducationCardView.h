// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIACTIVITYPICKEREDUCATIONCARDVIEW_H
#define FCUIACTIVITYPICKEREDUCATIONCARDVIEW_H

@class UIView, MTMaterialView, UILabel, UITapGestureRecognizer, NSStringDrawingContext, NSString, UIAction;
@protocol FCUIContentSizeCategoryAdjusting;


#import "_FCUIActivityPickerOnboardingDismissControl.h"

@interface FCUIActivityPickerEducationCardView : UIView <FCUIContentSizeCategoryAdjusting>

 {
    MTMaterialView *_backgroundMaterialView;
    UILabel *_headlineLabel;
    UILabel *_bodyLabel;
    UITapGestureRecognizer *_defaultTapGesture;
    _FCUIActivityPickerOnboardingDismissControl *_dismissControl;
    NSStringDrawingContext *_drawingContext;
    BOOL _textAttributesValid;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIAction *defaultAction; // ivar: _defaultAction
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) UIAction *dismissAction; // ivar: _dismissAction
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *headlineText; // ivar: _headlineText
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, nonatomic) UIView *prominentView; // ivar: _prominentView
@property (readonly) Class superclass;


+(id)_defaultPromimentViewWithBaubleDescriptions:(id)arg0 ;
+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
+(id)defaultEducationCardViewActivityIdentifiers;
+(id)defaultEducationCardViewFallbackBaubleDescriptions;
+(id)defaultEducationCardViewWithProminentViewBaubleDescriptions:(id)arg0 dismissAction:(id)arg1 ;
-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithProminentView:(id)arg0 headlineText:(id)arg1 bodyText:(id)arg2 dismissAction:(id)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)_configureBodyLabelIfNecessary;
-(void)_configureDismissControlIfNecessaryWithAction:(id)arg0 ;
-(void)_configureHeadlineLabelIfNecessary;
-(void)_handleDefaultTap:(id)arg0 ;
-(void)_layoutSubviewInBounds:(struct CGRect )arg0 measuringOnly:(struct CGSize *)arg1 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForBodyLabel;
-(void)_updateTextAttributesForHeadlineLabel;
-(void)_updateTextAttributesIfNecessary;
-(void)layoutSubviews;


@end


#endif