// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUIACTIVITYBAUBLEVIEW_H
#define FCUIACTIVITYBAUBLEVIEW_H

@class UIView, UIImageView, UIFont, NSString;
@protocol FCUIContentSizeCategoryAdjusting, FCUIActivityBaubleLayoutDescribing;



@interface FCUIActivityBaubleView : UIView <FCUIContentSizeCategoryAdjusting, FCUIActivityBaubleLayoutDescribing>

 {
    UIImageView *_glyphImageView;
    UIFont *_referenceFont;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maximumPointSize; // ivar: _maximumPointSize
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, nonatomic) CGFloat referenceDimension; // ivar: _referenceDimension
@property (readonly, nonatomic) CGFloat referencePointSize; // ivar: _referencePointSize
@property (readonly) Class superclass;


-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_scaledValueForValue:(CGFloat)arg0 ;
-(CGFloat)scaledValueForValue:(CGFloat)arg0 ;
-(id)initWithBaubleDescription:(id)arg0 shadowAttributes:(struct ? )arg1 ;
-(id)tintColor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesIfNecessary;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;


@end


#endif