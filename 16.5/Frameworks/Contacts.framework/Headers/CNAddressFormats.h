// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNADDRESSFORMATS_H
#define CNADDRESSFORMATS_H


#import <Foundation/Foundation.h>


@interface CNAddressFormats : NSObject



+(id)addressFormatForCountryCode:(id)arg0 ;
+(id)addressFormats;
+(id)countryCodeByGlobalDefaultsLookup;
+(id)countryCodeByLocaleLookup;
+(id)defaultKeyboardSettingsDictionary;
+(id)fallbackCountryCode;
+(id)makeSupportedCountries;
+(id)supportedCountries;
+(id)usaStateAbbreviations;
+(id)usaStateNames;


@end


#endif