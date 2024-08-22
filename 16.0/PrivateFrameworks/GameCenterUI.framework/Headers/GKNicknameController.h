// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKNICKNAMECONTROLLER_H
#define GKNICKNAMECONTROLLER_H

@class UIActivityIndicatorView, NSString, UITextField, GKReachability, NSArray;
@protocol UITextFieldDelegate, GKNicknameControllerDelegate;

#import <Foundation/Foundation.h>


@interface GKNicknameController : NSObject <UITextFieldDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultNickname; // ivar: _defaultNickname
@property (weak) NSObject<GKNicknameControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *nickname; // ivar: _nickname
@property (nonatomic) BOOL nicknameChangeWasCommitted; // ivar: _nicknameChangeWasCommitted
@property (nonatomic) BOOL nicknameWasEdited; // ivar: _nicknameWasEdited
@property (retain, nonatomic) GKReachability *reachability; // ivar: _reachability
@property (nonatomic) BOOL shouldShakeTextFieldOnError; // ivar: _shouldShakeTextFieldOnError
@property (nonatomic) BOOL shouldUseSuggestedNicknameOnDefaultNickname; // ivar: _shouldUseSuggestedNicknameOnDefaultNickname
@property (retain, nonatomic) NSArray *suggestedNicknames; // ivar: _suggestedNicknames
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)init;
-(void)commitNicknameChanges:(id)arg0 ;
-(void)didSelectSuggestion:(id)arg0 ;
-(void)displayNicknameSuggestions;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadSuggestedNicknames:(id)arg0 ;
-(void)nicknameTextChanged:(id)arg0 ;
-(void)reset;
-(void)shakeNicknameTextFieldWithCompletionBlock:(id)arg0 ;
-(void)startObservingKeyboardEvents;
-(void)stopObservingKeyboardEvents;
-(void)textFieldDidBecomeFirstResponder:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidResignFirstResponder:(id)arg0 ;
-(void)updateReturnKeyEnabledState;


@end


#endif