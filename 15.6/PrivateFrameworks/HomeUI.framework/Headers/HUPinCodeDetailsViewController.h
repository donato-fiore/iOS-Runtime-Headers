// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPINCODEDETAILSVIEWCONTROLLER_H
#define HUPINCODEDETAILSVIEWCONTROLLER_H

@class NSMutableArray, NSString, NSArray, HFPinCodeManager;
@protocol HUSwitchCellDelegate, HUPersonalPINCodeViewControllerDelegate, HFPinCodeManagerObserver, HUPresentationDelegateHost, HUPinCodeDetailsViewDelegate, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUPinCodeDetailsItemManager.h"

@interface HUPinCodeDetailsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUPersonalPINCodeViewControllerDelegate, HFPinCodeManagerObserver, HUPresentationDelegateHost>



@property (retain, nonatomic) NSMutableArray *accessoriesToEdit; // ivar: _accessoriesToEdit
@property (nonatomic) BOOL creatingNewPinCode; // ivar: _creatingNewPinCode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUPinCodeDetailsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *editedPinCodeLabel; // ivar: _editedPinCodeLabel
@property (retain, nonatomic) NSString *editedPinCodeValue; // ivar: _editedPinCodeValue
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isClosing; // ivar: _isClosing
@property (retain, nonatomic) NSArray *pinAccessories; // ivar: _pinAccessories
@property (weak, nonatomic) HUPinCodeDetailsItemManager *pinCodeItemManager; // ivar: _pinCodeItemManager
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;


-(BOOL)_codeLabelHasChanged;
-(BOOL)_codeValueHasChanged;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_allTextFields;
-(id)_validatePinCodeLabel;
-(id)commitAccessoryChanges;
-(id)commitNewPinCode;
-(id)commitPinCodeChanges;
-(id)initWithItem:(id)arg0 pinCodeManager:(id)arg1 home:(id)arg2 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_resignFirstResponderForAllTextFields;
-(void)_updateSaveEnabled;
-(void)hideSpinner;
-(void)itemManagerDidFinishUpdate:(id)arg0 ;
-(void)personalPinCodeViewController:(id)arg0 pinCodeDidChange:(id)arg1 ;
-(void)pinCodeManagerFetchDidComplete:(id)arg0 ;
-(void)showSpinner;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif