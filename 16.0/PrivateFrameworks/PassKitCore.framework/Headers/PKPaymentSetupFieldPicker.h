// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFIELDPICKER_H
#define PKPAYMENTSETUPFIELDPICKER_H

@class NSArray;


#import "PKPaymentSetupField.h"
#import "PKPaymentSetupFieldPickerItem.h"

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;
@property (copy, nonatomic) NSArray *pickerItems; // ivar: _pickerItems
@property (nonatomic) NSUInteger pickerType; // ivar: _pickerType


-(BOOL)submissionStringMeetsAllRequirements;
-(NSUInteger)fieldType;
-(id)_submissionStringForValue:(id)arg0 ;
-(id)displayString;
-(void)_commonUpdate;
-(void)updateWithAttribute:(id)arg0 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif