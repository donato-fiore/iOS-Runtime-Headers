// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTFIELDTABLEVIEWSETTINGSROWCURRENCYFORMATTER_H
#define PKTEXTFIELDTABLEVIEWSETTINGSROWCURRENCYFORMATTER_H

@class NSString, NSNumberFormatter;


#import "PKTextFieldTableViewSettingsRowFormatter.h"

@interface PKTextfieldTableViewSettingsRowCurrencyFormatter : PKTextFieldTableViewSettingsRowFormatter {
    NSString *_currencyCode;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)formattedValueFromInput:(id)arg0 ;
-(id)initWithCurrencyCode:(id)arg0 ;
-(id)submissionValueFromFormattedInput:(id)arg0 ;


@end


#endif