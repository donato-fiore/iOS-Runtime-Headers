// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI9FIELDCELL_H
#define _TTC19HEALTHMEDICATIONSUI9FIELDCELL_H

@class UICollectionViewListCell;
@protocol UITextFieldDelegate;



@interface _TtC19HealthMedicationsUI9FieldCell : UICollectionViewListCell <UITextFieldDelegate>

 {
    ? $__lazy_storage_$_textField;
    ? item;
}




-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapCell;
-(void)didTapDoneWithSender:(id)arg0 ;
-(void)textFieldDidChangeWithSender:(id)arg0 ;


@end


#endif