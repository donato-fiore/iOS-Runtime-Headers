// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPINCODEEDITORVIEWCONTROLLER_H
#define HUPINCODEEDITORVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel, HMHome, HFPinCodeManager, UIBarButtonItem, HFItem, UITextField;
@protocol UITextFieldDelegate, HUPresentationDelegateHost, HUPresentationDelegate;



@interface HUPinCodeEditorViewController : UIViewController <UITextFieldDelegate, HUPresentationDelegateHost>



@property (nonatomic) NSInteger codeLengthMax; // ivar: _codeLengthMax
@property (nonatomic) NSInteger codeLengthMin; // ivar: _codeLengthMin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *editedPinCode; // ivar: _editedPinCode
@property (retain, nonatomic) UILabel *footerLabel; // ivar: _footerLabel
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) UILabel *instructionHeader; // ivar: _instructionHeader
@property (copy, nonatomic) id *newPINCodeCompletionBlock; // ivar: _newPINCodeCompletionBlock
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) UIBarButtonItem *saveButtonItem; // ivar: _saveButtonItem
@property (retain, nonatomic) HFItem *sourceItem; // ivar: _sourceItem
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField
@property (copy, nonatomic) id *updatedPINCodeCompletionBlock; // ivar: _updatedPINCodeCompletionBlock


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)checkForPINCodeValueValidationErrors;
-(id)commitPinCodeChange;
-(id)initForCreatingNewPinCodeWithManager:(id)arg0 initialPinCodeValue:(id)arg1 home:(id)arg2 completionBlock:(id)arg3 ;
-(id)initForEditingPinCodeWithItem:(id)arg0 pinCodeManager:(id)arg1 pinCodeValue:(id)arg2 home:(id)arg3 completionBlock:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_commonInitWithManager:(id)arg0 home:(id)arg1 initialPinCodeValue:(id)arg2 ;
-(void)_hideSpinner;
-(void)_showSpinner;
-(void)_updateHeaderAndFooter;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)saveButtonPressed:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif