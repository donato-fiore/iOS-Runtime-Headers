// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSKEYCHAINSYNCPHONENUMBER_H
#define PSKEYCHAINSYNCPHONENUMBER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "KeychainSyncCountryInfo.h"

@interface PSKeychainSyncPhoneNumber : NSObject

@property (retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // ivar: _countryInfo
@property (retain, nonatomic) NSString *digits; // ivar: _digits


+(id)phoneNumberWithDigits:(id)arg0 countryInfo:(id)arg1 ;
-(id)_stringByAddingDialingPrefixToString:(id)arg0 ;
-(id)formattedAndObfuscatedString;
-(id)formattedString;
-(id)formattedStringWithDialingPrefix;


@end


#endif