// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI14NAVIGATIONCELL_H
#define _TTC15HEALTHRECORDSUI14NAVIGATIONCELL_H

@class UICollectionViewListCell;



@interface _TtC15HealthRecordsUI14NavigationCell : UICollectionViewListCell {
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_disclosureImageView;
    ? margin;
    ? topAndBottomDistance;
    ? item;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)showDetailViewController:(id)arg0 viewController:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif