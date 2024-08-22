// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCESLISTVIEWCONTROLLER_H
#define PKPAYMENTPREFERENCESLISTVIEWCONTROLLER_H

@class PKContactFormatValidator, NSString, NSArray;
@protocol PKPaymentPreferenceSectionControllerDelegate, PKPaymentPreferenceContactSectionControllerDelegate, PKAddressEditorViewControllerDelegate, CNContactPickerDelegate, PKAddressSearcherViewControllerDelegate;


#import "PKDynamicCollectionViewController.h"
#import "PKPaymentPreferenceContactSectionController.h"
#import "PKPaymentPreferenceOptionListItem.h"

@interface PKPaymentPreferencesListViewController : PKDynamicCollectionViewController <PKPaymentPreferenceSectionControllerDelegate, PKPaymentPreferenceContactSectionControllerDelegate, PKAddressEditorViewControllerDelegate, CNContactPickerDelegate, PKAddressSearcherViewControllerDelegate>

 {
    id *_handler;
    PKContactFormatValidator *_contactFormatValidator;
    PKPaymentPreferenceContactSectionController *_editingContactSectionController;
    PKPaymentPreferenceOptionListItem *_editingItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *preferences; // ivar: _preferences
@property (readonly) Class superclass;


-(BOOL)collectionViewIsEditingForSectionController:(id)arg0 ;
-(id)_requiredKeysForContactPreference:(id)arg0 ;
// -(id)initWithPreferences:(id)arg0 title:(id)arg1 style:(NSInteger)arg2 handler:(id)arg3 contactFormatValidator:(unk)arg4  ;
-(void)_endCurrentInlineEditing;
-(void)_handleSelectedContact:(id)arg0 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_reloadEditedSection:(id)arg0 ;
-(void)_updateContactAtIndex:(NSUInteger)arg0 withCell:(id)arg1 ;
-(void)_updateNavigationBarButtons;
-(void)addressEditorViewController:(id)arg0 selectedContact:(id)arg1 ;
-(void)addressEditorViewControllerDidCancel:(id)arg0 ;
-(void)addressSearcherViewController:(id)arg0 selectedContact:(id)arg1 ;
-(void)addressSearcherViewControllerDidCancel:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)presentMeCardAlertControllerWithContact:(id)arg0 contactKey:(id)arg1 handler:(id)arg2 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 forSectionController:(id)arg2 ;
-(void)showAddressEditorForContactItem:(id)arg0 inSectionController:(id)arg1 ;
-(void)showAddressPickerForPreference:(id)arg0 inSectionController:(id)arg1 ;
-(void)showContactsPickerForPreference:(id)arg0 inSectionController:(id)arg1 ;
-(void)startInlineEditingForContactItem:(id)arg0 inSectionController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif