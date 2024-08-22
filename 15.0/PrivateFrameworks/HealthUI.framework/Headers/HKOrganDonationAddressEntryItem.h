// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKORGANDONATIONADDRESSENTRYITEM_H
#define HKORGANDONATIONADDRESSENTRYITEM_H

@class NSString, UIPickerView, NSDictionary, NSArray;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, HKSimpleDataEntryCellDelegate;


#import "HKSimpleDataEntryItem.h"
#import "HKOrganDonationAddressCell.h"

@interface HKOrganDonationAddressEntryItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource, HKSimpleDataEntryCellDelegate>

 {
    HKOrganDonationAddressCell *_cell;
    NSString *_address1;
    NSString *_address2;
    NSString *_city;
    NSString *_state;
    NSString *_zipcode;
    UIPickerView *_statePicker;
    NSDictionary *_statesDict;
    NSArray *_sortedStateKeys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)cell;
-(id)formattedKeyAndValue;
-(id)initWithRegistrant:(id)arg0 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)textFieldDidChangeValue:(id)arg0 forCell:(id)arg1 ;
-(void)updateCellDisplay;


@end


#endif