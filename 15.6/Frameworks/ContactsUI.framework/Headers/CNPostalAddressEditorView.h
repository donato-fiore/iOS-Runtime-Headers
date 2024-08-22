// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPOSTALADDRESSEDITORVIEW_H
#define CNPOSTALADDRESSEDITORVIEW_H

@class UIControl, CNMutablePostalAddress, NSDictionary, NSString, CNPostalAddress, NSArray, CNPostalAddressFormattingSpecification, UIColor, NSMutableDictionary;
@protocol UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, CNCountryPickerControllerDelegate, ABText, CNPresenterDelegate;


#import "CNPostalAddressEditorTableView.h"

@interface CNPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, CNCountryPickerControllerDelegate, ABText>

 {
    CNMutablePostalAddress *_address;
    NSDictionary *_valueTextAttributes;
}


@property (copy, nonatomic) NSString *ab_text;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;
@property (copy, nonatomic) CNPostalAddress *address;
@property (copy, nonatomic) NSArray *cellsLayout; // ivar: _cellsLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNPostalAddressFormattingSpecification *formatSpecification; // ivar: _formatSpecification
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger lineCount;
@property (copy, nonatomic) UIColor *separatorColor;
@property (readonly) Class superclass;
@property (retain, nonatomic) CNPostalAddressEditorTableView *tableView; // ivar: _tableView
@property (readonly, nonatomic) NSMutableDictionary *textFields; // ivar: _textFields


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_addressValueForKey:(id)arg0 ;
-(id)_cellsLayoutForCountryCode:(id)arg0 ;
-(id)_countryCode;
-(id)_normalizeCountryCodeToISO:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyboardSettingsForAddress:(id)arg0 component:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_invalidateCellsLayout;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)countryPicker:(id)arg0 didPickCountryCode:(id)arg1 ;
-(void)countryPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)keyboardWillShow:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)textFieldChanged:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;


@end


#endif