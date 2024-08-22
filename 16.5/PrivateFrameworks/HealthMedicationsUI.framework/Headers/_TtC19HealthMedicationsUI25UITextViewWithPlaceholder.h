// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI25UITEXTVIEWWITHPLACEHOLDER_H
#define _TTC19HEALTHMEDICATIONSUI25UITEXTVIEWWITHPLACEHOLDER_H

@class UITextView, NSString;



@interface _TtC19HealthMedicationsUI25UITextViewWithPlaceholder : UITextView {
    ? $__lazy_storage_$_placeholderLabel;
    ? cancellable;
}


@property (nonatomic, copy) NSString *text;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif