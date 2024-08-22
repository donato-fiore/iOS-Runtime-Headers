// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDLEXER_H
#define CNVCARDLEXER_H

@class NSMutableData, NSArray;

#import <Foundation/Foundation.h>


@interface CNVCardLexer : NSObject {
    NSMutableData *_data;
    char * _bytes;
    NSUInteger _length;
    NSUInteger _peekedPoint;
    NSUInteger _cursor;
    BOOL _unicode;
    NSInteger _errorCount;
    NSArray *_activeTokenSets;
}




+(id)returnDelimiterData;
+(id)singleByteTokens;
+(id)utf16Tokens;
-(BOOL)_applyNextStringInEncoding:(NSUInteger)arg0 quotedPrintable:(BOOL)arg1 stopTokens:(int)arg2 trim:(BOOL)arg3 maximumValueLength:(NSUInteger)arg4 intoString:(id)arg5 ;
-(BOOL)advancePastEOL;
-(BOOL)advancePastEOLSingle;
-(BOOL)advancePastEOLUnicode;
-(BOOL)advanceToEOL;
-(BOOL)advanceToEOLSingle;
-(BOOL)advanceToEOLUnicode;
-(BOOL)advanceToToken:(int)arg0 throughTypes:(NSInteger)arg1 ;
-(BOOL)advancedPastToken:(int)arg0 ;
-(BOOL)atEOF;
-(NSInteger)advanceToSingleByteString;
-(NSInteger)advanceToString;
-(NSInteger)advanceToUnicodeString;
-(NSInteger)errorCount;
-(NSUInteger)cursor;
-(id)clipAtGraphemeClusters:(id)arg0 maximumValueLength:(NSUInteger)arg1 addEllipsisIfClipped:(BOOL)arg2 ;
-(id)dataWithRange:(struct _NSRange )arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)nextArraySeperatedByToken:(int)arg0 stoppingAt:(int)arg1 inEncoding:(NSUInteger)arg2 maximumValueLength:(NSUInteger)arg3 ;
-(id)nextBase64Data;
-(id)nextBase64Line:(*BOOL)arg0 ;
-(id)nextEscapedCharacter;
-(id)nextQuotedPrintableData;
-(id)nextQuotedStringValueInEncoding:(NSUInteger)arg0 ;
-(id)nextSingleByteBase64Line:(*BOOL)arg0 ;
-(id)nextSingleByteStringInEncoding:(NSUInteger)arg0 quotedPrintable:(BOOL)arg1 stopTokens:(int)arg2 trim:(BOOL)arg3 maximumValueLength:(NSUInteger)arg4 ;
-(id)nextStringInEncoding:(NSUInteger)arg0 quotedPrintable:(BOOL)arg1 stopTokens:(int)arg2 trim:(BOOL)arg3 maximumValueLength:(NSUInteger)arg4 ;
-(id)nextUnicodeBase64Line:(*BOOL)arg0 ;
-(id)nextUnicodeStringStopTokens:(int)arg0 quotedPrintable:(BOOL)arg1 trim:(BOOL)arg2 maximumValueLength:(NSUInteger)arg3 ;
-(id)os_log;
-(id)stringByRoundingData:(id)arg0 toNextWholeCharacterUsingEncoding:(NSUInteger)arg1 prefixLength:(NSUInteger)arg2 suffixLength:(NSUInteger)arg3 maximumValueLength:(NSUInteger)arg4 ;
-(id)stringFromData:(id)arg0 encoding:(NSUInteger)arg1 prefixLength:(NSUInteger)arg2 suffixLength:(NSUInteger)arg3 ;
-(id)stringFromSubData:(id)arg0 encoding:(NSUInteger)arg1 ;
-(id)stringWithRange:(struct _NSRange )arg0 encoding:(NSUInteger)arg1 ;
-(id)tokenSetForLength:(NSInteger)arg0 ;
-(id)trimData:(id)arg0 withPrefixLength:(NSUInteger)arg1 suffixLength:(NSUInteger)arg2 ;
-(id)unicodeStringByRoundingData:(id)arg0 toNextWholeCharacterUsingEncoding:(NSUInteger)arg1 prefixLength:(NSUInteger)arg2 suffixLength:(NSUInteger)arg3 maximumValueLength:(NSUInteger)arg4 ;
-(int)nextTokenPeek:(BOOL)arg0 ;
-(int)nextTokenPeek:(BOOL)arg0 length:(NSInteger)arg1 ;
-(int)nextTokenPeekSingle:(BOOL)arg0 length:(NSInteger)arg1 ;
-(int)nextTokenPeekUnicode:(BOOL)arg0 length:(NSInteger)arg1 ;
-(int)peekAtNextToken;
-(int)readNextToken;
-(int)tokenAtCursor;
-(int)tokenAtCursorIgnoringLineFolding;
-(struct _NSRange )emptyRangeStartingAtCursor;
-(struct _NSRange )expandRange:(struct _NSRange )arg0 untilNextByteIs:(id)arg1 ;
-(struct _NSRange )rangeWithLength:(NSUInteger)arg0 lTrim:(NSUInteger)arg1 rTrim:(NSUInteger)arg2 ;
-(unsigned short)charAtPosition:(NSUInteger)arg0 withOffset:(NSInteger)arg1 ;
-(void)advanceToPeekPoint;
-(void)appendDataInRange:(struct _NSRange )arg0 toData:(id)arg1 ;
-(void)appendNextEscapedCharacterToData:(id)arg0 ;
-(void)appendNextQuotedPrintableDataToData:(id)arg0 ;
-(void)skipToStopTokens:(int)arg0 ;
-(void)unicodeSkipToStopTokens:(int)arg0 ;


@end


#endif