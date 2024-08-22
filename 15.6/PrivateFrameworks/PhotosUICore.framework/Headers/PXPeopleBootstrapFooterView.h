// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEBOOTSTRAPFOOTERVIEW_H
#define PXPEOPLEBOOTSTRAPFOOTERVIEW_H

@class UICollectionReusableView, UIButton;
@protocol PXPeopleBootstrapFooterViewDelegate;



@interface PXPeopleBootstrapFooterView : UICollectionReusableView

@property (readonly, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) NSObject<PXPeopleBootstrapFooterViewDelegate> *footerViewDelegate; // ivar: _footerViewDelegate


+(id)_buttonFont;
+(id)_buttonTitle;
+(struct CGSize )_buttonSizeForBoundingSize:(struct CGSize )arg0 ;
+(struct CGSize )sizeForBoundingSize:(struct CGSize )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_confirmTapped:(id)arg0 ;
-(void)enableButton;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif