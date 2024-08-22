// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTOTPGENERATOR_H
#define WBSTOTPGENERATOR_H

@class NSData, NSArray, NSString, NSDictionary, NSDate, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSTOTPGenerator : NSObject <NSSecureCoding>

 {
    NSData *_key;
    NSArray *_cachedHeuristicallyDeterminedServiceNameHints;
}


@property (readonly, copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (readonly, nonatomic) NSUInteger algorithm; // ivar: _algorithm
@property (readonly, nonatomic) NSUInteger codeGenerationPeriod; // ivar: _codeGenerationPeriod
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSArray *heuristicallyDeterminedServiceNameHints;
@property (readonly, nonatomic) NSDate *initialDate; // ivar: _initialDate
@property (readonly, copy, nonatomic) NSString *issuer; // ivar: _issuer
@property (readonly, nonatomic) NSUInteger numberOfDigitsInCode; // ivar: _numberOfDigitsInCode
@property (copy, nonatomic) NSURL *originalURL; // ivar: _originalURL


+(BOOL)_urlWithComponentsHasValidOtpauthURLScheme:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_base32EncodedStringForKeyData:(id)arg0 ;
+(id)_keyDataForBase32EncodedString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_HMACLengthForAlgorithm:(NSUInteger)arg0 ;
-(NSUInteger)_algorithmForQueryItemValue:(id)arg0 ;
-(NSUInteger)_numberOfIntervalsSinceInitialDateForDate:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithKeyData:(id)arg0 initialDate:(id)arg1 codeGenerationPeriod:(NSUInteger)arg2 numberOfDigits:(NSUInteger)arg3 algorithm:(NSUInteger)arg4 issuer:(id)arg5 accountName:(id)arg6 originalURL:(id)arg7 ;
-(id)_stringForAlgorithm:(NSUInteger)arg0 ;
-(id)codeForDate:(id)arg0 ;
-(id)description;
-(id)exportableURLWithIssuer:(id)arg0 username:(id)arg1 ;
-(id)initWithASCIIEncodedKey:(id)arg0 initialDate:(id)arg1 codeGenerationPeriod:(NSUInteger)arg2 numberOfDigits:(NSUInteger)arg3 algorithm:(NSUInteger)arg4 ;
-(id)initWithBase32EncodedKey:(id)arg0 ;
-(id)initWithBase32EncodedKey:(id)arg0 initialDate:(id)arg1 codeGenerationPeriod:(NSUInteger)arg2 numberOfDigits:(NSUInteger)arg3 algorithm:(NSUInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithOTPAuthURL:(id)arg0 ;
-(id)startDateOfIntervalContainingDate:(id)arg0 ;
-(unsigned int)_commonCryptoAlgorithmForTOTPAlgorithm:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif