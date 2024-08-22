// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHONENUMBERHELPER_H
#define CNPHONENUMBERHELPER_H


#import <Foundation/Foundation.h>


@interface CNPhoneNumberHelper : NSObject



+(BOOL)isStringPhoneNumber:(id)arg0 ;
+(id)countryCodeForNumber:(id)arg0 ;
+(id)defaultCountryCode;
+(id)internationalizedFormattedNumber:(id)arg0 countryCode:(id)arg1 ;
+(id)internationalizedUnformattedNumber:(id)arg0 countryCode:(id)arg1 ;
+(id)lastFourDigitsForNumber:(id)arg0 ;
+(id)makePhoneNumberRegex;


@end


#endif