// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ASSETVIEWER21CHECKOUTCONTAINERVIEW_H
#define _TTC11ASSETVIEWER21CHECKOUTCONTAINERVIEW_H

@class UIView, UILabel, UIStackView;



@interface _TtC11AssetViewer21CheckoutContainerView : UIView {
    ? traitManager;
    ? parentStackView;
    ? subTitleLabel;
    ? tertiaryTitleLabel;
    ? ctaButton;
    ? applePayButton;
    ? rightParentStackViewConstraint;
}


@property (nonatomic, readonly) UILabel *titleLabel; // ivar: titleLabel
@property (nonatomic, readonly) UIStackView *verticalTextStackView; // ivar: verticalTextStackView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contentSizeCategoryDidChangeWithNotification:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif