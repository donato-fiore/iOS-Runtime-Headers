// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCREDITCARDCOLLECTIONVIEWCELL_H
#define SFCREDITCARDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIStackView, UIImageView, UILabel, UIVisualEffectView, WBSCreditCardData;



@interface SFCreditCardCollectionViewCell : UICollectionViewCell {
    UIStackView *_topLevelStackView;
    UIStackView *_cardDescriptionStackView;
    UIImageView *_cardArt;
    UILabel *_cardNameLabel;
    UIVisualEffectView *_vibrantWalletImageView;
    UILabel *_cardDescriptionLabel;
}


@property (retain, nonatomic) WBSCreditCardData *cardData; // ivar: _cardData


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureViewWithCardData:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif