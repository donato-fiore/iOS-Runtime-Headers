// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOCOMMENTENTRYVIEW_H
#define PUPHOTOCOMMENTENTRYVIEW_H

@class UIView, UILabel, NSString, UIButton, UITextView;
@protocol UITextViewDelegate, PUPhotoCommentEntryViewDelegate;



@interface PUPhotoCommentEntryView : UIView <UITextViewDelegate>

 {
    UILabel *placeholderLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoCommentEntryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) UILabel *placeholderLabel; // ivar: _placeholderLabel
@property (readonly, retain, nonatomic) UIButton *postButton; // ivar: _postButton
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(BOOL)textViewShouldEndEditing:(id)arg0 ;
-(CGFloat)preferredHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)trimmedText;
-(void)clearText;
-(void)layoutSubviews;
-(void)setText:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif