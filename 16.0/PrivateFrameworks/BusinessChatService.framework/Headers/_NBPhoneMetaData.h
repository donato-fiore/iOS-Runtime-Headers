// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NBPHONEMETADATA_H
#define _NBPHONEMETADATA_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>

#import "_NBPhoneNumberDesc.h"

@interface _NBPhoneMetaData : NSObject

@property (retain, nonatomic) NSString *codeID; // ivar: _codeID
@property (retain, nonatomic) NSNumber *countryCode; // ivar: _countryCode
@property (retain, nonatomic) _NBPhoneNumberDesc *emergency; // ivar: _emergency
@property (retain, nonatomic) _NBPhoneNumberDesc *fixedLine; // ivar: _fixedLine
@property (retain, nonatomic) _NBPhoneNumberDesc *generalDesc; // ivar: _generalDesc
@property (retain, nonatomic) NSString *internationalPrefix; // ivar: _internationalPrefix
@property (retain, nonatomic) NSArray *intlNumberFormats; // ivar: _intlNumberFormats
@property (retain, nonatomic) NSString *leadingDigits; // ivar: _leadingDigits
@property (nonatomic) BOOL leadingZeroPossible; // ivar: _leadingZeroPossible
@property (nonatomic) BOOL mainCountryForCode; // ivar: _mainCountryForCode
@property (retain, nonatomic) _NBPhoneNumberDesc *mobile; // ivar: _mobile
@property (retain, nonatomic) NSString *nationalPrefix; // ivar: _nationalPrefix
@property (retain, nonatomic) NSString *nationalPrefixForParsing; // ivar: _nationalPrefixForParsing
@property (retain, nonatomic) NSString *nationalPrefixTransformRule; // ivar: _nationalPrefixTransformRule
@property (retain, nonatomic) _NBPhoneNumberDesc *noInternationalDialling; // ivar: _noInternationalDialling
@property (retain, nonatomic) NSArray *numberFormats; // ivar: _numberFormats
@property (retain, nonatomic) _NBPhoneNumberDesc *pager; // ivar: _pager
@property (retain, nonatomic) _NBPhoneNumberDesc *personalNumber; // ivar: _personalNumber
@property (retain, nonatomic) NSString *preferredExtnPrefix; // ivar: _preferredExtnPrefix
@property (retain, nonatomic) NSString *preferredInternationalPrefix; // ivar: _preferredInternationalPrefix
@property (retain, nonatomic) _NBPhoneNumberDesc *premiumRate; // ivar: _premiumRate
@property (nonatomic) BOOL sameMobileAndFixedLinePattern; // ivar: _sameMobileAndFixedLinePattern
@property (retain, nonatomic) _NBPhoneNumberDesc *sharedCost; // ivar: _sharedCost
@property (retain, nonatomic) _NBPhoneNumberDesc *tollFree; // ivar: _tollFree
@property (retain, nonatomic) _NBPhoneNumberDesc *uan; // ivar: _uan
@property (retain, nonatomic) _NBPhoneNumberDesc *voicemail; // ivar: _voicemail
@property (retain, nonatomic) _NBPhoneNumberDesc *voip; // ivar: _voip


-(id)description;
-(id)init;
-(id)initWithEntry:(id)arg0 ;
-(id)numberFormatsFromEntry:(id)arg0 ;


@end


#endif