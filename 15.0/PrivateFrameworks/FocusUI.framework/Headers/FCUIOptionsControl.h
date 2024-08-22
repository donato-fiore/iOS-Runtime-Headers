// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUIOPTIONSCONTROL_H
#define FCUIOPTIONSCONTROL_H

@class UIControl, UIView, UIImageView, MTVisualStylingProvider, UIFont, NSString, NSArray;
@protocol FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring;



@interface FCUIOptionsControl : UIControl <FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring>

 {
    UIView *_backgroundView;
    UIImageView *_glyphView;
    MTVisualStylingProvider *_glyphVisualStylingProvider;
    UIFont *_referenceFont;
    CGFloat _referencePointSize;
    CGFloat _maxPointSize;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) NSInteger controlType; // ivar: _controlType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isParentControlHighlighted) BOOL parentControlHighlighted; // ivar: _parentControlHighlighted
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_scaledValueForValue:(CGFloat)arg0 ;
-(NSInteger)_glyphViewVisualStyleForCurrentState;
-(id)initWithReferencePointSize:(CGFloat)arg0 maximumPointSize:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureGlyphViewIfNecessary;
-(void)_setNeedsTextAttributesUpdate;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesIfNecessary;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)setGlyphVisualStylingProvider:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif