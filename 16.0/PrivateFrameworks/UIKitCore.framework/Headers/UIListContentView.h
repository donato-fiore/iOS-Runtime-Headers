// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UILISTCONTENTVIEW_H
#define UILISTCONTENTVIEW_H

@class NSLayoutRect, NSString;
@protocol _UIContentViewComponentDescribing, UIContentView;


#import "UIView.h"
#import "UIListContentConfiguration.h"
#import "_UIListContentImageView.h"
#import "UILabel.h"
#import "UILayoutGuide.h"

@interface UIListContentView : UIView <_UIContentViewComponentDescribing, UIContentView>

 {
    UIListContentConfiguration *_animatingFromConfiguration;
    UIListContentConfiguration *_animatingToConfiguration;
    CGFloat _preferredMaxLayoutWidth;
    ? _contentViewFlags;
    _UIListContentImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_secondaryTextLabel;
}


@property (copy, nonatomic, setter=_setPrimaryTextFrameDidChangeHandler:) id *_primaryTextFrameDidChangeHandler; // ivar: _primaryTextFrameDidChangeHandler
@property (readonly, nonatomic) CGRect _primaryTextLayoutFrame;
@property (readonly, nonatomic) NSLayoutRect *_primaryTextLayoutRect;
@property (copy, nonatomic) UIListContentConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILayoutGuide *imageLayoutGuide; // ivar: _imageLayoutGuide
@property (readonly, nonatomic) UILayoutGuide *secondaryTextLayoutGuide; // ivar: _secondaryTextLayoutGuide
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILayoutGuide *textLayoutGuide; // ivar: _textLayoutGuide


-(BOOL)_needsDoubleUpdateConstraintsPass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)supportsConfiguration:(id)arg0 ;
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