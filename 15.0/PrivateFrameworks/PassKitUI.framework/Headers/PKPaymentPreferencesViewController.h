// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPREFERENCESVIEWCONTROLLER_H
#define PKPAYMENTPREFERENCESVIEWCONTROLLER_H

@class UIViewController, UITextField, NSIndexPath, PKPaymentPass, UISwitch, NSArray, PKContactFormatValidator, NSString, UITableView;
@protocol CNContactPickerDelegate, UITextFieldDelegate, PKAddressSearcherViewControllerDelegate, PKAddressEditorViewControllerDelegate, UITableViewDataSource, UITableViewDelegate;


#import "PKPassSnapshotter.h"
#import "PKPaymentPreferenceButtonCell.h"

@interface PKPaymentPreferencesViewController : UIViewController <CNContactPickerDelegate, UITextFieldDelegate, PKAddressSearcherViewControllerDelegate, PKAddressEditorViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>

 {
    PKPassSnapshotter *_passSnapshotter;
    UITextField *_currentEditingField;
    NSIndexPath *_currentEditingIndexPath;
    PKPaymentPreferenceButtonCell *_sizingButtonCell;
    PKPaymentPass *_paymentPassForBillingErrors;
    PKPaymentPass *_currentlySelectedPaymentPass;
    UISwitch *_peerPaymentAccountPaymentSwitch;
    NSArray *_latestPreferences;
    BOOL _keyboardVisible;
    unsigned short _layoutRecursionCounter;
    BOOL _preferredContentSizeUpdateDeferred;
    PKContactFormatValidator *_contactFormatValidator;
    BOOL _isEditingFieldThatWasOriginallyInvalid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *pickedContactHandler; // ivar: _pickedContactHandler
@property (copy, nonatomic) id *pickedContactPropertyHandler; // ivar: _pickedContactPropertyHandler
@property (retain, nonatomic) NSArray *preferences; // ivar: _preferences
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_isPaymentStyle;
-(BOOL)_isViewTranslucent;
-(BOOL)_saveUpdatedContact:(id)arg0 contactKey:(id)arg1 preference:(id)arg2 atIndex:(NSInteger)arg3 ;
-(BOOL)_shouldUpdatePreferredContentSize;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForNamePreference:(id)arg0 row:(NSUInteger)arg1 ;
-(id)_cellForPreference:(id)arg0 row:(NSUInteger)arg1 ;
-(id)_cellOfClass:(Class)arg0 ;
-(id)_hyperlinkFooterViewForPreference:(id)arg0 ;
-(id)_peerPaymentAccountPaymentSwitch;
-(id)_requiredKeysForPreference:(id)arg0 contact:(id)arg1 ;
// -(id)initWithStyle:(NSInteger)arg0 preferences:(id)arg1 title:(id)arg2 handler:(id)arg3 contactFormatValidator:(unk)arg4  ;
-(id)pk_childrenForAppearance;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_checkFormatOfTextField:(id)arg0 forBeginEditing:(BOOL)arg1 ;
-(void)_cleanupInlineEdits;
-(void)_editPreferenceAtIndexPath:(id)arg0 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_presentMeCardAlertControllerWithContact:(id)arg0 contactKey:(id)arg1 handler:(id)arg2 ;
-(void)_savePickedContact:(id)arg0 inPreference:(id)arg1 ;
-(void)_setContactHandlersForPreference:(id)arg0 ;
-(void)_showAddressEditorForContact:(id)arg0 title:(id)arg1 requiredKeys:(id)arg2 highlightedKeys:(id)arg3 errors:(id)arg4 ;
-(void)_showAddressPickerForPreference:(id)arg0 ;
-(void)_showContactsPickerForPreference:(id)arg0 ;
-(void)_startInlineEditingForPreference:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)_updateContactAndForceSelection:(BOOL)arg0 ;
-(void)_updateNavigationBarButtons;
-(void)_updatePreferredContentSize;
-(void)addressEditorViewController:(id)arg0 selectedContact:(id)arg1 ;
-(void)addressEditorViewControllerDidCancel:(id)arg0 ;
-(void)addressSearcherViewController:(id)arg0 selectedContact:(id)arg1 ;
-(void)addressSearcherViewControllerDidCancel:(id)arg0 ;
-(void)applePayCashSwitchValueChanged:(id)arg0 ;
-(void)clearErrorsForPreference:(Class)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)hideTextField:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setErrors:(id)arg0 animated:(BOOL)arg1 ;
-(void)setErrors:(id)arg0 otherPass:(id)arg1 animated:(BOOL)arg2 ;
-(void)setErrors:(id)arg0 selectedPass:(id)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif