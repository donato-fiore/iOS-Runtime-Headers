// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI27TEXTFIELDCOLLECTIONVIEWCELL_H
#define _TTC18HEALTHEXPERIENCEUI27TEXTFIELDCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell;



@interface _TtC18HealthExperienceUI27TextFieldCollectionViewCell : UICollectionViewListCell {
    ? item;
    ? $__lazy_storage_$_proxy;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_valueField;
    ? titleAndValueFieldSideBySideConstraints;
    ? titleAndValueFieldStackedConstraints;
    ? isEditEnabled;
}




-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif