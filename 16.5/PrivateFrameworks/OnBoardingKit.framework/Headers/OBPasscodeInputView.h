// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBPASSCODEINPUTVIEW_H
#define OBPASSCODEINPUTVIEW_H

@class UIView;
@protocol OBPasscodeInputViewDelegate;



@interface OBPasscodeInputView : UIView

@property (weak, nonatomic) NSObject<OBPasscodeInputViewDelegate> *delegate; // ivar: _delegate


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(id)passcode;
-(id)passcodeField;
-(struct CGSize )intrinsicContentSize;
-(void)setPasscode:(id)arg0 ;
-(void)shake;


@end


#endif