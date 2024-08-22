// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTBUTTON_H
#define PKPAYMENTBUTTON_H

@class UIButton, CAShapeLayer, CAFilter;



@interface PKPaymentButton : UIButton {
    CAShapeLayer *_layer;
    CAFilter *_highlightFilter;
    BOOL _highlighted;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) NSInteger type; // ivar: _type


+(Class)layerClass;
+(id)buttonWithType:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(NSInteger)_effectiveButtonStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPaymentButtonType:(NSInteger)arg0 paymentButtonStyle:(NSInteger)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_createHighlightFilterIfNecessary;
-(void)applyAccessibilityValues;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif