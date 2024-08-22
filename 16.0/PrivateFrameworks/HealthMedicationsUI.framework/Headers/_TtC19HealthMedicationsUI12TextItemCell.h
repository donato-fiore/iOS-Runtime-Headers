// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI12TEXTITEMCELL_H
#define _TTC19HEALTHMEDICATIONSUI12TEXTITEMCELL_H

@class UICollectionViewListCell;
@protocol UITextViewDelegate;



@interface _TtC19HealthMedicationsUI12TextItemCell : UICollectionViewListCell <UITextViewDelegate>

 {
    ? $__lazy_storage_$_textView;
    ? item;
}




-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapDoneWithSender:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;


@end


#endif