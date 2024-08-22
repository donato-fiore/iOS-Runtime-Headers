// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI24DOSAGECOLLECTIONVIEWCELL_H
#define _TTC19HEALTHMEDICATIONSUI24DOSAGECOLLECTIONVIEWCELL_H

@class UICollectionViewListCell;



@interface _TtC19HealthMedicationsUI24DosageCollectionViewCell : UICollectionViewListCell {
    ? currentDosage;
    ? item;
    ? $__lazy_storage_$_deleteAccessory;
    ? timePicker;
    ? $__lazy_storage_$_toolbar;
    ? $__lazy_storage_$_valueField;
    ? $__lazy_storage_$_valueLabel;
    ? $__lazy_storage_$_spacerAccessory;
    ? currentLayoutConstraints;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)doneTapped;
-(void)timePickerChanged:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)valueLabelTapped:(id)arg0 ;


@end


#endif