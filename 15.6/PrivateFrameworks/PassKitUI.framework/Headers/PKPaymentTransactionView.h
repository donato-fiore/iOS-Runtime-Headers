// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONVIEW_H
#define PKPAYMENTTRANSACTIONVIEW_H

@class UIView, UILabel, UIImageView, CNAvatarView, UIColor, UIImage, NSString, NSAttributedString;



@interface PKPaymentTransactionView : UIView {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_rewardsAmountLabel;
    UILabel *_transactionValueLabel;
    UIImageView *_primaryImageView;
    UIImageView *_disclosureView;
    BOOL _isTemplateLayout;
}


@property (nonatomic) BOOL allowPrimaryStringExpansion; // ivar: _allowPrimaryStringExpansion
@property (readonly, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (nonatomic) BOOL hideRewardsBackground; // ivar: _hideRewardsBackground
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (retain, nonatomic) UIImage *primaryImage; // ivar: _primaryImage
@property (retain, nonatomic) NSString *primaryString; // ivar: _primaryString
@property (retain, nonatomic) NSString *rewardsValueString;
@property (retain, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (retain, nonatomic) NSString *secondaryString; // ivar: _secondaryString
@property (nonatomic) BOOL showsAvatarView; // ivar: _showsAvatarView
@property (nonatomic) BOOL showsDisclosureView; // ivar: _showsDisclosureView
@property (nonatomic) BOOL strokeImage; // ivar: _strokeImage
@property (retain, nonatomic) NSString *tertiaryString; // ivar: _tertiaryString
@property (retain, nonatomic) NSAttributedString *transactionValueAttributedText;


+(id)defaultTertiaryLabelFont;
-(BOOL)_shouldUseStackedLayout;
-(BOOL)shouldShowTransactionPreviewForTouchAtPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(CGFloat)_defaultLayoutHeight;
-(id)_disclosureView;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateAvatarView;
-(void)_updateImageViewDynamicColors;
-(void)_updatePrimaryLabelString;
-(void)createSubviews;
-(void)layoutSubviews;
-(void)resetFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif