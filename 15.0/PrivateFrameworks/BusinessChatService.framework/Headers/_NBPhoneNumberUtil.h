// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NBPHONENUMBERUTIL_H
#define _NBPHONENUMBERUTIL_H

@class NSRegularExpression, NSDictionary, NSLock, NSMutableDictionary, CTTelephonyNetworkInfo;

#import <Foundation/Foundation.h>

#import "_NBMetadataHelper.h"
#import "_NBRegExMatcher.h"

@interface _NBPhoneNumberUtil : NSObject

@property (retain, nonatomic) NSRegularExpression *CAPTURING_DIGIT_PATTERN; // ivar: _CAPTURING_DIGIT_PATTERN
@property (readonly, nonatomic) NSDictionary *DIGIT_MAPPINGS;
@property (retain, nonatomic) NSRegularExpression *VALID_ALPHA_PHONE_PATTERN; // ivar: _VALID_ALPHA_PHONE_PATTERN
@property (retain, nonatomic) NSLock *entireStringCacheLock; // ivar: _entireStringCacheLock
@property (retain, nonatomic) NSMutableDictionary *entireStringRegexCache; // ivar: _entireStringRegexCache
@property (retain, nonatomic) _NBMetadataHelper *helper; // ivar: _helper
@property (retain, nonatomic) NSLock *lockPatternCache; // ivar: _lockPatternCache
@property (retain, nonatomic) _NBRegExMatcher *matcher; // ivar: _matcher
@property (retain, nonatomic) NSMutableDictionary *regexPatternCache; // ivar: _regexPatternCache
@property (readonly, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo;


+(id)sharedInstance;
+(void)initialize;
-(BOOL)canBeInternationallyDialled:(id)arg0 ;
-(BOOL)canBeInternationallyDialled:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkRegionForParsing:(id)arg0 defaultRegion:(id)arg1 ;
-(BOOL)descHasPossibleNumberData:(id)arg0 ;
-(BOOL)formattingRuleHasFirstGroupOnly:(id)arg0 ;
-(BOOL)hasFormattingPatternForNumber:(id)arg0 ;
-(BOOL)hasUnexpectedItalianLeadingZero:(id)arg0 ;
-(BOOL)hasValidCountryCallingCode:(id)arg0 ;
-(BOOL)isAllDigits:(id)arg0 ;
-(BOOL)isAlphaNumber:(id)arg0 ;
-(BOOL)isLeadingZeroPossible:(id)arg0 ;
-(BOOL)isNANPACountry:(id)arg0 ;
-(BOOL)isNationalNumberSuffixOfTheOther:(id)arg0 second:(id)arg1 ;
-(BOOL)isNumberGeographical:(id)arg0 ;
-(BOOL)isNumberMatchingDesc:(id)arg0 numberDesc:(id)arg1 ;
-(BOOL)isPossibleNumber:(id)arg0 ;
-(BOOL)isPossibleNumber:(id)arg0 error:(*id)arg1 ;
-(BOOL)isPossibleNumberString:(id)arg0 regionDialingFrom:(id)arg1 error:(*id)arg2 ;
-(BOOL)isStartingStringByRegex:(id)arg0 regex:(id)arg1 ;
-(BOOL)isValidNumber:(id)arg0 ;
-(BOOL)isValidNumberForRegion:(id)arg0 regionCode:(id)arg1 ;
-(BOOL)isValidRegionCode:(id)arg0 ;
-(BOOL)isViablePhoneNumber:(id)arg0 ;
-(BOOL)matchesEntirely:(id)arg0 string:(id)arg1 ;
-(BOOL)maybeStripNationalPrefixAndCarrierCode:(*id)arg0 metadata:(id)arg1 carrierCode:(*id)arg2 ;
-(BOOL)parsePrefixAsIdd:(id)arg0 sourceString:(*id)arg1 ;
-(BOOL)rawInputContainsNationalPrefix:(id)arg0 nationalPrefix:(id)arg1 regionCode:(id)arg2 ;
-(BOOL)truncateTooLongNumber:(id)arg0 ;
-(NSInteger)getNumberType:(id)arg0 ;
-(NSInteger)getNumberTypeHelper:(id)arg0 metadata:(id)arg1 ;
-(NSInteger)isNumberMatch:(id)arg0 second:(id)arg1 ;
-(NSInteger)isNumberMatch:(id)arg0 second:(id)arg1 error:(*id)arg2 ;
-(NSInteger)isPossibleNumberWithReason:(id)arg0 ;
-(NSInteger)isPossibleNumberWithReason:(id)arg0 error:(*id)arg1 ;
-(NSInteger)maybeStripInternationalPrefixAndNormalize:(*id)arg0 possibleIddPrefix:(id)arg1 ;
-(NSInteger)testNumberLength:(id)arg0 desc:(id)arg1 ;
-(NSInteger)validateNumberLength:(id)arg0 metadata:(id)arg1 ;
-(NSInteger)validateNumberLength:(id)arg0 metadata:(id)arg1 type:(NSInteger)arg2 ;
-(id)chooseFormattingPatternForNumber:(id)arg0 nationalNumber:(id)arg1 ;
-(id)componentsSeparatedByRegex:(id)arg0 regex:(id)arg1 ;
-(id)convertAlphaCharactersInNumber:(id)arg0 ;
-(id)countryCodeByCarrier;
-(id)entireRegularExpressionWithPattern:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)errorWithObject:(id)arg0 withDomain:(id)arg1 ;
-(id)extractCountryCode:(id)arg0 nationalNumber:(*id)arg1 ;
-(id)extractPossibleNumber:(id)arg0 ;
-(id)format:(id)arg0 numberFormat:(NSInteger)arg1 ;
-(id)format:(id)arg0 numberFormat:(NSInteger)arg1 error:(*id)arg2 ;
-(id)formatByPattern:(id)arg0 numberFormat:(NSInteger)arg1 userDefinedFormats:(id)arg2 ;
-(id)formatByPattern:(id)arg0 numberFormat:(NSInteger)arg1 userDefinedFormats:(id)arg2 error:(*id)arg3 ;
-(id)formatInOriginalFormat:(id)arg0 regionCallingFrom:(id)arg1 ;
-(id)formatInOriginalFormat:(id)arg0 regionCallingFrom:(id)arg1 error:(*id)arg2 ;
-(id)formatNationalNumberWithCarrierCode:(id)arg0 carrierCode:(id)arg1 ;
-(id)formatNationalNumberWithCarrierCode:(id)arg0 carrierCode:(id)arg1 error:(*id)arg2 ;
-(id)formatNationalNumberWithPreferredCarrierCode:(id)arg0 fallbackCarrierCode:(id)arg1 ;
-(id)formatNationalNumberWithPreferredCarrierCode:(id)arg0 fallbackCarrierCode:(id)arg1 error:(*id)arg2 ;
-(id)formatNsn:(id)arg0 metadata:(id)arg1 phoneNumberFormat:(NSInteger)arg2 carrierCode:(id)arg3 ;
-(id)formatNsnUsingPattern:(id)arg0 formattingPattern:(id)arg1 numberFormat:(NSInteger)arg2 carrierCode:(id)arg3 ;
-(id)formatNumberForMobileDialing:(id)arg0 regionCallingFrom:(id)arg1 withFormatting:(BOOL)arg2 ;
-(id)formatNumberForMobileDialing:(id)arg0 regionCallingFrom:(id)arg1 withFormatting:(BOOL)arg2 error:(*id)arg3 ;
-(id)formatOutOfCountryCallingNumber:(id)arg0 regionCallingFrom:(id)arg1 ;
-(id)formatOutOfCountryCallingNumber:(id)arg0 regionCallingFrom:(id)arg1 error:(*id)arg2 ;
-(id)formatOutOfCountryKeepingAlphaChars:(id)arg0 regionCallingFrom:(id)arg1 ;
-(id)formatOutOfCountryKeepingAlphaChars:(id)arg0 regionCallingFrom:(id)arg1 error:(*id)arg2 ;
-(id)getCountryCodeForRegion:(id)arg0 ;
-(id)getCountryCodeForValidRegion:(id)arg0 error:(*id)arg1 ;
-(id)getCountryMobileTokenFromCountryCode:(NSInteger)arg0 ;
-(id)getExampleNumber:(id)arg0 error:(*id)arg1 ;
-(id)getExampleNumberForNonGeoEntity:(id)arg0 error:(*id)arg1 ;
-(id)getExampleNumberForType:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(id)getMetadataForRegionOrCallingCode:(id)arg0 regionCode:(id)arg1 ;
-(id)getNationalSignificantNumber:(id)arg0 ;
-(id)getNddPrefixForRegion:(id)arg0 stripNonDigits:(BOOL)arg1 ;
-(id)getNumberDescByType:(id)arg0 type:(NSInteger)arg1 ;
-(id)getRegionCodeForCountryCode:(id)arg0 ;
-(id)getRegionCodeForNumber:(id)arg0 ;
-(id)getRegionCodeForNumberFromRegionList:(id)arg0 regionCodes:(id)arg1 ;
-(id)getRegionCodesForCountryCode:(id)arg0 ;
-(id)getSupportedRegions;
-(id)init;
-(id)matchFirstByRegex:(id)arg0 regex:(id)arg1 ;
-(id)matchedStringByRegex:(id)arg0 regex:(id)arg1 ;
-(id)matchesByRegex:(id)arg0 regex:(id)arg1 ;
-(id)maybeExtractCountryCode:(id)arg0 metadata:(id)arg1 nationalNumber:(*id)arg2 keepRawInput:(BOOL)arg3 phoneNumber:(*id)arg4 error:(*id)arg5 ;
-(id)maybeGetFormattedExtension:(id)arg0 metadata:(id)arg1 numberFormat:(NSInteger)arg2 ;
-(id)maybeStripExtension:(*id)arg0 ;
-(id)normalize:(id)arg0 ;
-(id)normalizeDiallableCharsOnly:(id)arg0 ;
-(id)normalizeDigitsOnly:(id)arg0 ;
-(id)normalizeHelper:(id)arg0 normalizationReplacements:(id)arg1 removeNonMatches:(BOOL)arg2 ;
-(id)parse:(id)arg0 defaultRegion:(id)arg1 error:(*id)arg2 ;
-(id)parseAndKeepRawInput:(id)arg0 defaultRegion:(id)arg1 error:(*id)arg2 ;
-(id)parseHelper:(id)arg0 defaultRegion:(id)arg1 keepRawInput:(BOOL)arg2 checkRegion:(BOOL)arg3 error:(*id)arg4 ;
-(id)parseWithPhoneCarrierRegion:(id)arg0 error:(*id)arg1 ;
-(id)prefixNumberWithCountryCallingCode:(id)arg0 phoneNumberFormat:(NSInteger)arg1 formattedNationalNumber:(id)arg2 formattedExtension:(id)arg3 ;
-(id)regularExpressionWithPattern:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)replaceFirstStringByRegex:(id)arg0 regex:(id)arg1 withTemplate:(id)arg2 ;
-(id)replaceStringByRegex:(id)arg0 regex:(id)arg1 withTemplate:(id)arg2 ;
-(id)stringByReplacingOccurrencesString:(id)arg0 withMap:(id)arg1 removeNonMatches:(BOOL)arg2 ;
-(int)getLengthOfGeographicalAreaCode:(id)arg0 ;
-(int)getLengthOfGeographicalAreaCode:(id)arg0 error:(*id)arg1 ;
-(int)getLengthOfNationalDestinationCode:(id)arg0 ;
-(int)getLengthOfNationalDestinationCode:(id)arg0 error:(*id)arg1 ;
-(int)indexOfStringByString:(id)arg0 target:(id)arg1 ;
-(int)stringPositionByRegex:(id)arg0 regex:(id)arg1 ;
-(void)buildNationalNumberForParsing:(id)arg0 nationalNumber:(*id)arg1 ;
-(void)initNormalizationMappings;
-(void)initRegularExpressionSet;
-(void)normalizeSB:(*id)arg0 ;
-(void)setItalianLeadingZerosForPhoneNumber:(id)arg0 phoneNumber:(id)arg1 ;


@end


#endif