// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKADDRESSEDITORVIEWCONTROLLER_H
#define PKADDRESSEDITORVIEWCONTROLLER_H

@class UITableViewController, CNPostalAddressFormattingSpecification, PKContactFormatValidator, NSString, NSArray, CNMutablePostalAddress, MKLocalSearchCompleter;
@protocol UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MKLocalSearchCompleterDelegate, PKCountryPickerViewControllerDelegate, PKAddressTextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate, PKAddressEditorViewControllerDelegate;


#import "PKAddressTextField.h"

@interface PKAddressEditorViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MKLocalSearchCompleterDelegate, PKCountryPickerViewControllerDelegate, PKAddressTextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    BOOL _preselectedNameField;
    BOOL _displayGivenNameFirst;
    BOOL _displayPhoneticName;
    BOOL _isEditingBlankField;
}


@property (retain, nonatomic) CNPostalAddressFormattingSpecification *addressFormatter; // ivar: _addressFormatter
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator; // ivar: _contactFormatValidator
@property (nonatomic) BOOL countryIsEditable; // ivar: _countryIsEditable
@property (retain, nonatomic) PKAddressTextField *currentlySelectedField; // ivar: _currentlySelectedField
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddressEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *editingFields; // ivar: _editingFields
@property (retain, nonatomic) NSArray *errors; // ivar: _errors
@property (retain, nonatomic) NSString *familyName; // ivar: _familyName
@property (weak, nonatomic) PKAddressTextField *familyNameTextField; // ivar: _familyNameTextField
@property (retain, nonatomic) PKAddressTextField *firstTextFieldForName; // ivar: _firstTextFieldForName
@property (retain, nonatomic) NSString *givenName; // ivar: _givenName
@property (weak, nonatomic) PKAddressTextField *givenNameTextField; // ivar: _givenNameTextField
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *highlightedFieldKeys; // ivar: _highlightedFieldKeys
@property (retain, nonatomic) CNMutablePostalAddress *inputAddress; // ivar: _inputAddress
@property (retain, nonatomic) NSString *inputLabel; // ivar: _inputLabel
@property (retain, nonatomic) CNMutablePostalAddress *originalAddress; // ivar: _originalAddress
@property (retain, nonatomic) NSString *originalCountry; // ivar: _originalCountry
@property (retain, nonatomic) NSString *originalFamilyName; // ivar: _originalFamilyName
@property (retain, nonatomic) NSString *originalGivenName; // ivar: _originalGivenName
@property (retain, nonatomic) NSString *originalPhoneticFamilyName; // ivar: _originalPhoneticFamilyName
@property (retain, nonatomic) NSString *originalPhoneticGivenName; // ivar: _originalPhoneticGivenName
@property (retain, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (weak, nonatomic) PKAddressTextField *phoneticFamilyNameTextField; // ivar: _phoneticFamilyNameTextField
@property (retain, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (weak, nonatomic) PKAddressTextField *phoneticGivenNameTextField; // ivar: _phoneticGivenNameTextField
@property (nonatomic) BOOL readOnly; // ivar: _readOnly
@property (retain, nonatomic) NSArray *requiredFieldKeys; // ivar: _requiredFieldKeys
@property (nonatomic) BOOL requirementsMet; // ivar: _requirementsMet
@property (retain, nonatomic) MKLocalSearchCompleter *searchCompleter; // ivar: _searchCompleter
@property (weak, nonatomic) PKAddressTextField *street1TextField; // ivar: _street1TextField
@property (weak, nonatomic) PKAddressTextField *street2TextField; // ivar: _street2TextField
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;


-(BOOL)canChangeCountry;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(NSInteger)_fieldIndexForNameComponent:(NSUInteger)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_nameComponentForFieldIndex:(NSUInteger)arg0 ;
-(id)initWithContact:(id)arg0 requiredKeys:(id)arg1 highlightedKeys:(id)arg2 errors:(id)arg3 style:(NSInteger)arg4 ;
-(id)initWithContact:(id)arg0 style:(NSInteger)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_checkFormatOfAddressTextField:(id)arg0 ;
-(void)_showCountryPicker;
-(void)_updateUniqueAddressField:(id)arg0 withNewString:(id)arg1 ;
-(void)_updateWithPostalAddress:(id)arg0 ;
-(void)_validateAddressRequirements;
-(void)addressTextField:(id)arg0 didEndEditing:(id)arg1 ;
-(void)addressTextField:(id)arg0 textDidChange:(id)arg1 ;
-(void)assignErrorToField:(id)arg0 ;
-(void)cancel;
-(void)completer:(id)arg0 didFailWithError:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg0 ;
-(void)countryPicker:(id)arg0 didPickCountryCode:(id)arg1 ;
-(void)donePressed;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)recomputeEditingFields;
-(void)textDidChange:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif