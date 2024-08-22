// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPERSONALPINCODEVIEWCONTROLLER_H
#define HUPERSONALPINCODEVIEWCONTROLLER_H

@class NSString, HFPinCodeManager;
@protocol UIResponderStandardEditActions, HUPresentationDelegateHost, HUPersonalPINCodeViewControllerDelegate, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUPersonalPINCodeItemManager.h"

@interface HUPersonalPINCodeViewController : HUItemTableViewController <UIResponderStandardEditActions, HUPresentationDelegateHost>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUPersonalPINCodeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HUPersonalPINCodeItemManager *personalPINCodeItemManager; // ivar: _personalPINCodeItemManager
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;


-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)currentPinCodeValue;
-(id)initWithItem:(id)arg0 pinCodeManager:(id)arg1 home:(id)arg2 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)_hideSpinner;
-(void)_shareCode;
-(void)_showSpinner;
-(void)copy:(id)arg0 ;
-(void)openPINCodeEditor;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif