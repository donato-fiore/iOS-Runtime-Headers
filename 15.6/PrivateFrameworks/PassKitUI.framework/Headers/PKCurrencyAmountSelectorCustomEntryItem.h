// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCURRENCYAMOUNTSELECTORCUSTOMENTRYITEM_H
#define PKCURRENCYAMOUNTSELECTORCUSTOMENTRYITEM_H

@class NSString;
@protocol PKSpendNotificationLimitViewControllerItem, UITextFieldDelegate;

#import <Foundation/Foundation.h>

#import "PKTextFieldTableViewCell.h"
#import "PKTextfieldTableViewSettingsRowCurrencyFormatter.h"

@interface PKCurrencyAmountSelectorCustomEntryItem : NSObject <PKSpendNotificationLimitViewControllerItem, UITextFieldDelegate>

 {
    PKTextFieldTableViewCell *_cell;
    PKTextfieldTableViewSettingsRowCurrencyFormatter *_formatter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *editingChangedHandler; // ivar: _editingChangedHandler
@property (readonly, nonatomic) NSInteger editingStyle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cellReuseIdentifier;
-(BOOL)shouldHighlight;
-(id)decimalNumberValue;
-(id)initWithCurrencyCode:(id)arg0 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_textFieldValueChanged:(id)arg0 ;
-(void)clear;
-(void)endEditing;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif