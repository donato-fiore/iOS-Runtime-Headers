// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDPASSBUTTON_H
#define PKADDPASSBUTTON_H

@class UIButton, CAShapeLayer, PKShapeView, UIImageView, UILabel, CAFilter;



@interface PKAddPassButton : UIButton {
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
    BOOL _useLayoutMargins;
}


@property (nonatomic) NSInteger addPassButtonStyle; // ivar: _addPassButtonStyle


+(Class)layerClass;
+(id)addPassButtonWithStyle:(NSInteger)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_singleLineFitsSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithAddPassButtonStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicMultiLineSize;
-(struct CGSize )_intrinsicSingleLineSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustVisibleLabelWithBounds:(struct CGRect )arg0 ;
-(void)_applyStyle;
-(void)_createHighlightFilterIfNecessary;
-(void)_sharedInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif