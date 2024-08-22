// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVTEXTFIELDVIEWCONTROLLER_H
#define _TVTEXTFIELDVIEWCONTROLLER_H

@class UIViewController, NSString, UITextField, IKTextFieldElement;
@protocol IKAppKeyboardDelegate, _TVSearchBarDelegate;



@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) UITextField *textField;
@property (readonly, retain, nonatomic) IKTextFieldElement *viewElement; // ivar: _viewElement


-(void)_updateKeyboardWithUserText;
-(void)_updateUserText;
-(void)_updateViewLayout;
-(void)dealloc;
-(void)loadView;
-(void)searchBarDidChangeText:(id)arg0 ;
-(void)textDidChangeForKeyboard:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;


@end


#endif