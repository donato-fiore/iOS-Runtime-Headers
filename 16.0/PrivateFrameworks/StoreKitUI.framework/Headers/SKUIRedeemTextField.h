// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREDEEMTEXTFIELD_H
#define SKUIREDEEMTEXTFIELD_H

@class UITextField, UIView;



@interface SKUIRedeemTextField : UITextField {
    UIView *_bottomBorderView;
    UIView *_topBorderView;
    UIView *_backdropView;
}


@property (nonatomic) BOOL backdropBackground; // ivar: _backdropBackground
@property (nonatomic) BOOL suppressBorder; // ivar: _suppressBorder


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif