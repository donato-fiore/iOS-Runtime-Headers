// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI25MEDICATIONDETAILSCARDCELL_H
#define _TTC19HEALTHMEDICATIONSUI25MEDICATIONDETAILSCARDCELL_H

@class UICollectionViewListCell;



@interface _TtC19HealthMedicationsUI25MedicationDetailsCardCell : UICollectionViewListCell {
    ? $__lazy_storage_$_pillImageView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_captionLabel;
    ? $__lazy_storage_$_separatorView;
    ? $__lazy_storage_$_notesLabel;
    ? notesConstraints;
    ? emptyNotesConstraints;
    ? item;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cellTripleTapped:(id)arg0 ;


@end


#endif