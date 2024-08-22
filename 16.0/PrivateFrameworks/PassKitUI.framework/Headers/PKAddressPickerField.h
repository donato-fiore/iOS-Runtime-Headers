// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKADDRESSPICKERFIELD_H
#define PKADDRESSPICKERFIELD_H

@class UIPickerView, PKPickerContactFieldConfiguration;


#import "PKAddressTextField.h"

@interface PKAddressPickerField : UIPickerView

@property (readonly, nonatomic) PKAddressTextField *addressTextField; // ivar: _addressTextField
@property (readonly, nonatomic) PKPickerContactFieldConfiguration *pickerFieldConfiguration; // ivar: _pickerFieldConfiguration


-(id)initWithFrame:(struct CGRect )arg0 addressTextField:(id)arg1 ;


@end


#endif