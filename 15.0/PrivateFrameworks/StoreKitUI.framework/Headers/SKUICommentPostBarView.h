// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOMMENTPOSTBARVIEW_H
#define SKUICOMMENTPOSTBARVIEW_H

@class UIView, UIButton, UILabel, NSString;
@protocol UITextFieldDelegate, SKUICommentDelegate;


#import "SKUICommentPostBarTextField.h"

@interface SKUICommentPostBarView : UIView <UITextFieldDelegate>

 {
    UIButton *_postButton;
    SKUICommentPostBarTextField *_postTextField;
    UILabel *_asLabel;
    UIButton *_asNameButton;
    NSString *_asText;
}


@property (copy, nonatomic) NSString *commenter; // ivar: _commenter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUICommentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)_asLabel;
-(id)_asNameButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_changeCommenter:(id)arg0 ;
-(void)_post:(id)arg0 ;
-(void)_postComment;
-(void)layoutSubviews;
-(void)setAsText:(id)arg0 ;
-(void)setPlaceholderText:(id)arg0 ;
-(void)setPostButtonText:(id)arg0 ;
-(void)setPostButtonVisible:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif