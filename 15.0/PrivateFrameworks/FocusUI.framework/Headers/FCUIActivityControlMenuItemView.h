// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUIACTIVITYCONTROLMENUITEMVIEW_H
#define FCUIACTIVITYCONTROLMENUITEMVIEW_H

@class UIView, UILabel, NSHashTable, UIImageView, NSMutableDictionary, NSStringDrawingContext, NSString, UIAction, NSArray;
@protocol FCUIMenuElement, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring;



@interface FCUIActivityControlMenuItemView : UIView <FCUIMenuElement, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring>

 {
    UIView *_backgroundView;
    UILabel *_activationDescriptionLabel;
    UILabel *_activationDetailsLabel;
    NSHashTable *_viewsRequiringUpdate;
    UIView *_highlightView;
    UIView *_separatorView;
    UIImageView *_checkmarkImageView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
    NSStringDrawingContext *_drawingContext;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIAction *defaultAction; // ivar: _defaultAction
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isMenuElement) BOOL menuElement;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSString *representedObjectIdentifier;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible; // ivar: _separatorVisible
@property (readonly) Class superclass;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_separatorHeight;
-(NSUInteger)_numberOfLinesForActivationDescriptionInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForActivationDetailsInFrame:(struct CGRect )arg0 ;
-(id)_activationDescription;
-(id)_activationDetails;
-(id)_checkmarkImage;
-(id)_newLabel;
-(struct CGRect )_checkmarkFrameForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_textFrameForBounds:(struct CGRect )arg0 checkmarkFrame:(struct CGRect )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addViewRequiringUpdate:(id)arg0 ;
-(void)_configureActivationDescriptionLabelIfNecessary;
-(void)_configureActivationDetailsLabelIfNecessary;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureCheckmarkImageViewIfNecessary;
-(void)_configureHightlightViewIfNecessary;
-(void)_configureSeparatorViewIfNecessary;
-(void)_didPerformUpdate;
-(void)_setActivationDescription:(id)arg0 ;
-(void)_setActivationDetails:(id)arg0 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_tearDownCheckmarkImageViewIfNecessary;
-(void)_tearDownSeparatorViewIfNecessary;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForActivationDescriptionLabel;
-(void)_updateTextAttributesForActivationDetailsLabel;
-(void)_updateTextAttributesIfNecessary;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProvider:(id)arg0 didChangeForCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)performAction;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif