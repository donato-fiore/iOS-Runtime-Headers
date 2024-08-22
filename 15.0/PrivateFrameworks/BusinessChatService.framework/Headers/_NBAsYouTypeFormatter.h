// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NBASYOUTYPEFORMATTER_H
#define _NBASYOUTYPEFORMATTER_H

@class NSRegularExpression, NSMutableString, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_NBPhoneMetaData.h"
#import "_NBPhoneNumberUtil.h"

@interface _NBAsYouTypeFormatter : NSObject

@property (retain, nonatomic) NSRegularExpression *CHARACTER_CLASS_PATTERN_; // ivar: _CHARACTER_CLASS_PATTERN_
@property (retain, nonatomic) NSRegularExpression *DIGIT_PATTERN_; // ivar: _DIGIT_PATTERN_
@property (retain, nonatomic) NSRegularExpression *ELIGIBLE_FORMAT_PATTERN_; // ivar: _ELIGIBLE_FORMAT_PATTERN_
@property (retain, nonatomic) NSRegularExpression *NATIONAL_PREFIX_SEPARATORS_PATTERN_; // ivar: _NATIONAL_PREFIX_SEPARATORS_PATTERN_
@property (retain, nonatomic) NSRegularExpression *STANDALONE_DIGIT_PATTERN_; // ivar: _STANDALONE_DIGIT_PATTERN_
@property (nonatomic) BOOL ableToFormat_; // ivar: _ableToFormat_
@property (retain, nonatomic) NSMutableString *accruedInputWithoutFormatting_; // ivar: _accruedInputWithoutFormatting_
@property (retain, nonatomic) NSMutableString *accruedInput_; // ivar: _accruedInput_
@property (retain, nonatomic) NSString *currentFormattingPattern_; // ivar: _currentFormattingPattern_
@property (retain, nonatomic) _NBPhoneMetaData *currentMetaData_; // ivar: _currentMetaData_
@property (retain, nonatomic) NSString *currentOutput_; // ivar: _currentOutput_
@property (retain, nonatomic) NSString *defaultCountry_; // ivar: _defaultCountry_
@property (retain, nonatomic) _NBPhoneMetaData *defaultMetaData_; // ivar: _defaultMetaData_
@property (retain, nonatomic) NSMutableString *formattingTemplate_; // ivar: _formattingTemplate_
@property (nonatomic) BOOL inputHasFormatting_; // ivar: _inputHasFormatting_
@property (nonatomic) BOOL isCompleteNumber_; // ivar: _isCompleteNumber_
@property (nonatomic) BOOL isExpectingCountryCallingCode_; // ivar: _isExpectingCountryCallingCode_
@property (readonly, nonatomic) BOOL isSuccessfulFormatting; // ivar: _isSuccessfulFormatting
@property (nonatomic) NSUInteger lastMatchPosition_; // ivar: _lastMatchPosition_
@property (retain, nonatomic) NSMutableString *nationalNumber_; // ivar: _nationalNumber_
@property (retain, nonatomic) NSString *nationalPrefixExtracted_; // ivar: _nationalPrefixExtracted_
@property (nonatomic) NSUInteger originalPosition_; // ivar: _originalPosition_
@property (retain, nonatomic) _NBPhoneNumberUtil *phoneUtil_; // ivar: _phoneUtil_
@property (nonatomic) NSUInteger positionToRemember_; // ivar: _positionToRemember_
@property (retain, nonatomic) NSMutableArray *possibleFormats_; // ivar: _possibleFormats_
@property (retain, nonatomic) NSMutableString *prefixBeforeNationalNumber_; // ivar: _prefixBeforeNationalNumber_
@property (nonatomic) BOOL shouldAddSpaceAfterNationalPrefix_; // ivar: _shouldAddSpaceAfterNationalPrefix_


-(BOOL)ableToExtractLongerNdd_;
-(BOOL)attemptToExtractCountryCallingCode_;
-(BOOL)attemptToExtractIdd_;
-(BOOL)createFormattingTemplate_:(id)arg0 ;
-(BOOL)isDigitOrLeadingPlusSign_:(id)arg0 ;
-(BOOL)isFormatEligible_:(id)arg0 ;
-(BOOL)isNanpaNumberWithNationalPrefix_;
-(BOOL)maybeCreateNewTemplate_;
-(NSUInteger)getRememberedPosition;
-(id)appendNationalNumber_:(id)arg0 ;
-(id)attemptToChooseFormattingPattern_;
-(id)attemptToChoosePatternWithPrefixExtracted_;
-(id)attemptToFormatAccruedDigits_;
-(id)description;
-(id)getFormattingTemplate_:(id)arg0 numberFormat:(id)arg1 ;
-(id)getMetadataForRegion_:(id)arg0 ;
-(id)init;
-(id)initWithRegionCode:(id)arg0 ;
-(id)initWithRegionCode:(id)arg0 bundle:(id)arg1 ;
-(id)inputAccruedNationalNumber_;
-(id)inputDigit:(id)arg0 ;
-(id)inputDigitAndRememberPosition:(id)arg0 ;
-(id)inputDigitHelper_:(id)arg0 ;
-(id)inputDigitWithOptionToRememberPosition_:(id)arg0 rememberPosition:(BOOL)arg1 ;
-(id)inputString:(id)arg0 ;
-(id)inputStringAndRememberPosition:(id)arg0 ;
-(id)normalizeAndAccrueDigitsAndPlusSign_:(id)arg0 rememberPosition:(BOOL)arg1 ;
-(id)removeLastDigit;
-(id)removeLastDigitAndRememberPosition;
-(id)removeNationalPrefixFromNationalNumber_;
-(void)clear;
-(void)getAvailableFormats_:(id)arg0 ;
-(void)narrowDownPossibleFormats_:(id)arg0 ;


@end


#endif