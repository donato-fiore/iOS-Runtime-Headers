// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKIDENTITYBUTTON_H
#define _PKIDENTITYBUTTON_H

@class UIButton, CAShapeLayer, UIImageView, UILabel, CAFilter;


#import "PKShapeView.h"

@interface _PKIdentityButton : UIButton {
    NSInteger _label;
    NSInteger _style;
    CAShapeLayer *_layer;
    CGSize _boundsSize;
    PKShapeView *_maskView;
    UIImageView *_iconView;
    UILabel *_singleLineLabel;
    UILabel *_multiLineLabel;
    CAFilter *_highlightFilter;
    BOOL _highlighted;
    CGSize _iconSize;
    CGSize _singleLineSize;
    UIEdgeInsets _singleLineAlignmentInset;
    CGSize _multiLineSize;
    UIEdgeInsets _multiLineAlignmentInset;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius


+(Class)layerClass;
+(id)buttonWithLabel:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_singleLineFitsSize:(struct CGSize )arg0 ;
-(CGFloat)_adjustedCornerRadiusForScale:(CGFloat)arg0 ;
-(id)_singleLineTitle;
-(id)_splitSurtitle;
-(id)_splitTitle;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(struct CGSize )_intrinsicMultiLineSize;
-(struct CGSize )_intrinsicSingleLineSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustVisibleLabelWithBounds:(struct CGRect )arg0 ;
-(void)_applyStyle;
-(void)_createHighlightFilterIfNecessary;
-(void)_sharedInit;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif