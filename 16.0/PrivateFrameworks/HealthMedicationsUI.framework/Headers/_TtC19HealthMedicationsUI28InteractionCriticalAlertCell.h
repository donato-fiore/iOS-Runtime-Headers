// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI28INTERACTIONCRITICALALERTCELL_H
#define _TTC19HEALTHMEDICATIONSUI28INTERACTIONCRITICALALERTCELL_H

@class UICollectionViewListCell;



@interface _TtC19HealthMedicationsUI28InteractionCriticalAlertCell : UICollectionViewListCell {
    ? item;
    ? activeConstraints;
    ? $__lazy_storage_$_interactionStackedMedmojiView;
    ? $__lazy_storage_$_dismissLabel;
    ? $__lazy_storage_$_titleButton;
    ? $__lazy_storage_$_subtitleLabel;
    ? $__lazy_storage_$_separatorView;
    ? $__lazy_storage_$_learnMoreLabel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)awakeFromNib;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif