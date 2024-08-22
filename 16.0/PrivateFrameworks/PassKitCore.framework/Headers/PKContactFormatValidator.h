// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTACTFORMATVALIDATOR_H
#define PKCONTACTFORMATVALIDATOR_H


#import <Foundation/Foundation.h>

#import "PKContactFormatConfiguration.h"

@interface PKContactFormatValidator : NSObject {
    PKContactFormatConfiguration *_configuration;
}




-(BOOL)_isFieldEntry:(id)arg0 validForContactFieldConfiguration:(id)arg1 ;
-(BOOL)_isFieldEntry:(id)arg0 validForPickerContactFieldConfiguration:(id)arg1 ;
-(BOOL)_isFieldEntry:(id)arg0 validForTextContactFieldConfiguration:(id)arg1 ;
-(BOOL)emailAddressIsValid:(id)arg0 ;
-(BOOL)hasFormatValidationConfigurationForCountryCode:(id)arg0 ;
-(BOOL)isFamilyName:(id)arg0 validFormatForCountryCode:(id)arg1 ;
-(BOOL)isGivenName:(id)arg0 validFormatForCountryCode:(id)arg1 ;
-(BOOL)isPhoneticFamilyName:(id)arg0 validFormatForCountryCode:(id)arg1 ;
-(BOOL)isPhoneticGivenName:(id)arg0 validFormatForCountryCode:(id)arg1 ;
-(BOOL)isPostalAddressFieldEntry:(id)arg0 validForPostalFieldKey:(id)arg1 forCountryCode:(id)arg2 ;
-(BOOL)phoneNumberIsValid:(id)arg0 forCountryCode:(id)arg1 ;
-(NSUInteger)checkNameFormat:(id)arg0 forCountryCode:(id)arg1 ;
-(NSUInteger)checkPostalAddressFormat:(id)arg0 ;
-(id)_formattedFieldEntry:(id)arg0 forFieldConfiguration:(id)arg1 ;
-(id)contactFieldConfigurationForFamilyNameForCountryCode:(id)arg0 ;
-(id)contactFieldConfigurationForGivenNameForCountryCode:(id)arg0 ;
-(id)contactFieldConfigurationForPhoneticFamilyNameForCountryCode:(id)arg0 ;
-(id)contactFieldConfigurationForPhoneticGivenNameForCountryCode:(id)arg0 ;
-(id)contactFieldConfigurationForPostalField:(id)arg0 forCountryCode:(id)arg1 ;
-(id)formatPostalAddress:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif