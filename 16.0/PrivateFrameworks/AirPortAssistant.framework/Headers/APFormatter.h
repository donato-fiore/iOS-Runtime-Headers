// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APFORMATTER_H
#define APFORMATTER_H

@class NSFormatter, NSCharacterSet;



@interface APFormatter : NSFormatter {
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
}


@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength


+(id)asciiFormatter:(NSUInteger)arg0 ;
+(id)asciiSet;
+(id)formatterForBSFormatter:(int)arg0 withMaxLen:(NSInteger)arg1 ;
+(id)hexFormatter:(NSUInteger)arg0 ;
+(id)hexSet;
+(id)ipFormatter:(NSUInteger)arg0 ;
+(id)ipOctetFormatter:(NSUInteger)arg0 ;
+(id)ipv4AddressSet;
+(id)ipv4AddressWithPrefixSet;
+(id)ipv6AddressSet;
+(id)maxLengthFormatter:(NSUInteger)arg0 ;
+(id)multipleIPFormatter:(NSUInteger)arg0 ;
+(id)multipleIpAddressesSet;
+(id)nonZeroNumberOnly:(NSUInteger)arg0 ;
+(id)numberOnlyFormatter:(NSUInteger)arg0 ;
+(id)phoneNumberFormatter:(NSUInteger)arg0 ;
+(id)phoneNumberSet;
+(id)pogoPasswordSet;
+(id)portRangeFormatter:(NSUInteger)arg0 ;
+(id)portRangeSet;
+(id)romanFormatter:(NSUInteger)arg0 ;
+(id)romanSet;
+(id)sharedIPFormatter;
+(id)sharedIPv4PrefixFormatter;
+(id)sharedIPv6Formatter;
+(id)sharedMultipleIPFormatter;
+(id)sharedPhoneNumberFormatter;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(id)characterSet;
-(id)initWithCharacterSet:(id)arg0 withMaxLength:(NSUInteger)arg1 ;
-(id)initWithMaxLength:(NSUInteger)arg0 ;
-(id)initWithStringOfValidCharacters:(id)arg0 withMaxLength:(NSUInteger)arg1 ;
-(id)invertedCharacterSet;
-(id)stringForObjectValue:(id)arg0 ;
-(void)dealloc;
-(void)setCharacterSet:(id)arg0 ;
-(void)setInvertedCharacterSet:(id)arg0 ;


@end


#endif