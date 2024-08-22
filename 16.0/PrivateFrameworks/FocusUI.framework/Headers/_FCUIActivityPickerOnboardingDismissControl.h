// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FCUIACTIVITYPICKERONBOARDINGDISMISSCONTROL_H
#define _FCUIACTIVITYPICKERONBOARDINGDISMISSCONTROL_H

@class UIControl, UIImageView, UIFont, NSString;
@protocol FCUIContentSizeCategoryAdjusting;



@interface _FCUIActivityPickerOnboardingDismissControl : UIControl <FCUIContentSizeCategoryAdjusting>

 {
    UIImageView *_imageView;
    UIFont *_referenceFont;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;


-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_scaledValueForValue:(CGFloat)arg0 ;
-(id)initWithAction:(id)arg0 ;
-(struct CGRect )_imageViewFrameWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )contentInsetsWithBounds:(struct CGRect )arg0 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesIfNecessary;
-(void)layoutSubviews;


@end


#endif