// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER31EMOJIEDITINGINPUTVIEWCONTROLLER_H
#define _TTC11EMOJIPOSTER31EMOJIEDITINGINPUTVIEWCONTROLLER_H

@class UIViewController;
@protocol UITextFieldDelegate;



@interface _TtC11EmojiPoster31EmojiEditingInputViewController : UIViewController <UITextFieldDelegate>

 {
    ? navBar;
    ? logger;
    ? emoji;
    ? textField;
    ? emojiCountLabel;
    ? keyboardVC;
    ? delegate;
}




-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapCloseButton;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif