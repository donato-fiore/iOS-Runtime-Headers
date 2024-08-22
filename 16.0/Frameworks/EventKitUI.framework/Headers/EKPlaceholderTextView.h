// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPLACEHOLDERTEXTVIEW_H
#define EKPLACEHOLDERTEXTVIEW_H

@class UITextView, UILabel;



@interface EKPlaceholderTextView : UITextView {
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
}




-(id)_placeholderLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)placeholder;
-(void)_updatePlaceholder;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)textChanged:(id)arg0 ;


@end


#endif