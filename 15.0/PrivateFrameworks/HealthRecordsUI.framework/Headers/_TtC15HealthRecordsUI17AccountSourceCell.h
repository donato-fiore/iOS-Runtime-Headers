// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI17ACCOUNTSOURCECELL_H
#define _TTC15HEALTHRECORDSUI17ACCOUNTSOURCECELL_H

@class UICollectionViewCell;



@interface _TtC15HealthRecordsUI17AccountSourceCell : UICollectionViewCell {
    ? contentMargins;
    ? $__lazy_storage_$_logoView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subtitleLabel;
    ? $__lazy_storage_$_detailLabel;
    ? $__lazy_storage_$_webLinkButton;
    ? $__lazy_storage_$_stackView;
    ? accountURL;
    ? item;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)webLinkTapped;


@end


#endif