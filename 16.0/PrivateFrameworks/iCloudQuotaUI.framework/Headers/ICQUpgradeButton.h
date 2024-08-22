// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUPGRADEBUTTON_H
#define ICQUPGRADEBUTTON_H

@class UIButton, ICQOffer, NSAttributedString, ICQLink;



@interface ICQUpgradeButton : UIButton {
    ICQOffer *_offer;
}


@property (readonly, nonatomic) NSAttributedString *attributedDetailedLink; // ivar: _attributedDetailedLink
@property (readonly, nonatomic) NSAttributedString *attributedDetailedText; // ivar: _attributedDetailedText
@property (readonly, nonatomic) ICQLink *link; // ivar: _link
@property (retain, nonatomic) ICQOffer *offer;


+(BOOL)shouldShowForOffer:(id)arg0 ;
+(BOOL)shouldShowForPremiumOffer:(id)arg0 ;
+(id)attributedStringWithFormat:(id)arg0 attributes:(id)arg1 buttonLinkAttributes:(id)arg2 links:(id)arg3 ;
+(id)buttonWithType:(NSInteger)arg0 ;
+(id)spaceArrowAttributedStringWithBaseAttributes:(id)arg0 ;
+(id)upgradeButton;
-(id)buttonAttributes;
-(id)buttonLinkAttributes;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif