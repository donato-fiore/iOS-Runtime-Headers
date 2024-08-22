// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVALUECELLCONTENTVIEW_H
#define _UIVALUECELLCONTENTVIEW_H

@class NSLayoutRect, NSString;
@protocol _UIContentViewComponentDescribing, _UIContentView;


#import "UIView.h"
#import "_UIValueCellContentViewConfiguration.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface _UIValueCellContentView : UIView <_UIContentViewComponentDescribing, _UIContentView>

 {
    _UIValueCellContentViewConfiguration *_animatingFromConfiguration;
    _UIValueCellContentViewConfiguration *_animatingToConfiguration;
    CGFloat _preferredMaxLayoutWidth;
}


@property (copy, nonatomic, setter=_setPrimaryTextFrameDidChangeHandler:) id *_primaryTextFrameDidChangeHandler; // ivar: _primaryTextFrameDidChangeHandler
@property (readonly, nonatomic) CGRect _primaryTextLayoutFrame;
@property (readonly, nonatomic) NSLayoutRect *_primaryTextLayoutRect;
@property (copy, nonatomic) _UIValueCellContentViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(BOOL)_needsDoubleUpdateConstraintsPass;
-(CGFloat)_multilineContextWidth;
-(CGFloat)_preferredMaxLayoutWidth;
-(id)_encodableSubviews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets )arg0 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect )arg0 ;
-(void)_setMultilineContextWidth:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif