// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHONENUMBER_H
#define CNPHONENUMBER_H

@class NSString;
@protocol CNObjectValidation, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>

 {
    os_unfair_lock_s _stateLock;
    *__CFPhoneNumber _phoneNumberRef;
}


@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *digits;
@property (readonly, copy, nonatomic) NSString *formattedInternationalStringValue;
@property (readonly, copy, nonatomic) NSString *formattedStringValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *initialCountryCode; // ivar: _initialCountryCode
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *unformattedInternationalStringValue;


+(BOOL)_isCountryCodeForNorthAmericanDialingPlan:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)StringValue:(SEL)arg0 ;
+(id)defaultCountryCode;
+(id)dialingCodeForISOCountryCode:(id)arg0 ;
+(id)new;
+(id)phoneNumberWithCopiedStringValue:(id)arg0 ;
+(id)phoneNumberWithDigits:(id)arg0 countryCode:(id)arg1 ;
+(id)phoneNumberWithStringValue:(id)arg0 ;
+(id)unsupportedCountryCodes;
+(struct __CFPhoneNumber *)createCFPhoneNumberForStringValue:(id)arg0 countryCode:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFullyQualified;
-(BOOL)isLikePhoneNumber:(id)arg0 ;
-(BOOL)isLikePhoneNumberForSamePerson:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fullyQualifiedDigits;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 countryCode:(id)arg1 ;
-(id)lastFourDigits;
-(id)primitiveInitWithStringValue:(id)arg0 countryCode:(id)arg1 ;
-(id)stringValueWithCFPhoneNumberOptions:(NSUInteger)arg0 ;
-(struct __CFPhoneNumber *)nts_lazyPhoneNumberRef;
-(struct __CFPhoneNumber *)phoneNumberRef;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif