// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPHONENUMBER_H
#define CTPHONENUMBER_H

@class NSString;
@protocol NSCopying, CTMessageAddress;

#import <Foundation/Foundation.h>


@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress>

 {
    NSInteger _slot;
}


@property (readonly) NSString *countryCode; // ivar: _countryCode
@property (readonly) NSString *digits; // ivar: _digits
@property BOOL isShortCode; // ivar: _isShortCode


+(BOOL)isValidPhoneNumber:(id)arg0 ;
+(BOOL)isValidPhoneNumberChar:(unsigned short)arg0 ;
+(id)phoneNumberWithDigits:(NSInteger)arg0 digits:(id)arg1 countryCode:(id)arg2 ;
+(id)phoneNumberWithDigits:(id)arg0 countryCode:(id)arg1 ;
-(NSInteger)numberOfDigitsForShortCodeNumber;
-(NSInteger)numberOfDigitsForShortCodeNumber:(NSInteger)arg0 ;
-(id)canonicalFormat;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodedString;
-(id)formatForCallingCountry:(id)arg0 ;
-(id)initWithDigits:(NSInteger)arg0 digits:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithDigits:(id)arg0 countryCode:(id)arg1 ;


@end


#endif