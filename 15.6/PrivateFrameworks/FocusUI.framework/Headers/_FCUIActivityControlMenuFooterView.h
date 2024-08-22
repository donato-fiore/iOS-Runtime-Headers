// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FCUIACTIVITYCONTROLMENUFOOTERVIEW_H
#define _FCUIACTIVITYCONTROLMENUFOOTERVIEW_H

@class UIView, UILabel, NSMutableDictionary, NSString, UIAction, NSArray;
@protocol FCUIMenuElement, MTVisualStylingRequiring, FCUIContentSizeCategoryAdjusting;



@interface _FCUIActivityControlMenuFooterView : UIView <FCUIMenuElement, MTVisualStylingRequiring, FCUIContentSizeCategoryAdjusting>

 {
    UILabel *_footerLabel;
    UIView *_highlightView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIAction *footerAction; // ivar: _footerAction
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isMenuElement) BOOL menuElement;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSString *representedObjectIdentifier;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) Class superclass;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_continuousCornerRadius;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureFooterLabelIfNecessary;
-(void)_configureHightlightViewIfNecessary;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForFooterLabel;
-(void)_updateTextAttributesIfNecessary;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 observerBlock:(id)arg4 ;
-(void)_visualStylingProvider:(id)arg0 didChangeForCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)performAction;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif