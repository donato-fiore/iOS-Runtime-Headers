// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER29EMOJICOLLECTIONVIEWCONTROLLER_H
#define _TTC11EMOJIPOSTER29EMOJICOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController;
@protocol UITextFieldDelegate;



@interface _TtC11EmojiPoster29EmojiCollectionViewController : UICollectionViewController <UITextFieldDelegate>

 {
    ? configuration;
    ? diffableDataSource;
    ? isSpinning;
    ? hiddenEmojiField;
}




-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif