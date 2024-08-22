// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKENHANCEDMERCHANTCOLLECTIONVIEWCELL_H
#define PKENHANCEDMERCHANTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, CAFilter, UIColor, PKAccountEnhancedMerchant, UIImageView;



@interface PKEnhancedMerchantCollectionViewCell : UICollectionViewCell {
    CAFilter *_highlightFilter;
    UIColor *_normalInputColor;
    UIColor *_highlightInputColor;
    UIColor *_appliedInputColor;
    BOOL _highlighted;
    BOOL _selected;
}


@property (readonly, nonatomic) PKAccountEnhancedMerchant *enhancedMerchant; // ivar: _enhancedMerchant
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_createHighlightFilterIfNecessary;
-(void)_updateFilter;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateWithAccountEnhancedMerchant:(id)arg0 ;


@end


#endif