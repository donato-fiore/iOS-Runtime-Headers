// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTEXTFIELDPINVIEW_H
#define PSTEXTFIELDPINVIEW_H

@class UITextField, UITableView, NSString;
@protocol UITableViewDataSource;


#import "PINView.h"
#import "AlphanumericPINTableViewCell.h"

@interface PSTextFieldPINView : PINView <UITableViewDataSource>

 {
    UITextField *_passcodeField;
    AlphanumericPINTableViewCell *_cell;
    UITableView *_table;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesNumericKeyboard; // ivar: _usesNumericKeyboard


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)keyboardInputChanged:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)stringValue;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)appendString:(id)arg0 ;
-(void)dealloc;
-(void)deleteLastCharacter;
-(void)hidePasscodeField:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)okButtonPressed:(id)arg0 ;
-(void)setBlocked:(BOOL)arg0 ;
-(void)setStringValue:(id)arg0 ;
-(void)setTextFieldKeyboardAppearance:(NSInteger)arg0 ;
-(void)setTextFieldKeyboardType:(NSInteger)arg0 ;
-(void)showError:(id)arg0 animate:(BOOL)arg1 ;


@end


#endif