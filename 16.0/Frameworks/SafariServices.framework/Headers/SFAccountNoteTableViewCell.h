// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACCOUNTNOTETABLEVIEWCELL_H
#define SFACCOUNTNOTETABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UITapGestureRecognizer, NSString, UITextView;
@protocol UITextViewDelegate, SFAccountNoteTableViewCellDelegate;



@interface SFAccountNoteTableViewCell : UITableViewCell <UITextViewDelegate>

 {
    NSLayoutConstraint *_heightConstraint;
    UITapGestureRecognizer *_textViewTapGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAccountNoteTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *textDidChange; // ivar: _textDidChange
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_didTapTextView;
-(void)_updateHeightConstraint;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg0 ;


@end


#endif