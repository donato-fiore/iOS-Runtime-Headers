// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FCUIFOCUSSELECTIONHEADERFOOTERVIEW_H
#define _FCUIFOCUSSELECTIONHEADERFOOTERVIEW_H

@class UIView, UILabel, NSString;
@protocol FCUIContentSizeCategoryAdjusting;



@interface _FCUIFocusSelectionHeaderFooterView : UIView <FCUIContentSizeCategoryAdjusting>

 {
    UILabel *_label;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_attributedTextForText:(id)arg0 ;
-(id)_labelFont;
-(id)initWithText:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureLabel:(id)arg0 ;
-(void)_configureLabelIfNecessary;
-(void)_layoutLabel:(id)arg0 inBounds:(struct CGRect )arg1 measuringOnly:(struct CGSize *)arg2 ;
-(void)_layoutSubviewsInBounds:(struct CGRect )arg0 measuringOnly:(struct CGSize *)arg1 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForLabel:(id)arg0 ;
-(void)_updateTextAttributesIfNecessary;
-(void)layoutSubviews;


@end


#endif