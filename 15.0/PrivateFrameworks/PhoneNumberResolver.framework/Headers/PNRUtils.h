// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNRUTILS_H
#define PNRUTILS_H


#import <Foundation/Foundation.h>


@interface PNRUtils : NSObject



+(BOOL)_isValidPhoneNumber:(id)arg0 ;
+(id)_countryCodeForInternationalCode:(id)arg0 ;
+(id)_currentCountry;
+(id)_currentLocale;
+(id)_preferredLanguages;
+(id)_stringByStrippingFormattingAndNotVisiblyAllowable:(id)arg0 ;


@end


#endif