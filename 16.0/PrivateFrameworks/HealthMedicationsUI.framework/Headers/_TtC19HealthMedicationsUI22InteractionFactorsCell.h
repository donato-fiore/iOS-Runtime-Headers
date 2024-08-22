// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI22INTERACTIONFACTORSCELL_H
#define _TTC19HEALTHMEDICATIONSUI22INTERACTIONFACTORSCELL_H

@class UICollectionViewListCell;



@interface _TtC19HealthMedicationsUI22InteractionFactorsCell : UICollectionViewListCell {
    ? item;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subtitleLabel;
    ? $__lazy_storage_$_editButton;
    ? isUsingVerticalLayout;
    ? currentConstraints;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)editButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif