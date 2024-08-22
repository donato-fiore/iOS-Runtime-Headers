// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSTOKENIZER_H
#define IKCSSTOKENIZER_H


#import <Foundation/Foundation.h>

#import "IKCSSToken.h"

@interface IKCSSTokenizer : NSObject {
    NSUInteger currentOffset;
    NSUInteger textBytesCharCount;
    *unsigned short textBytes;
    IKCSSToken *reconsumeToken;
}


@property (readonly, nonatomic) IKCSSToken *currentToken; // ivar: _currentToken


+(BOOL)isDigit:(unsigned short)arg0 ;
+(BOOL)isHexDigit:(unsigned short)arg0 ;
+(BOOL)isLetter:(unsigned short)arg0 ;
+(BOOL)isLowercaseLetter:(unsigned short)arg0 ;
+(BOOL)isNameCodePoint:(unsigned short)arg0 ;
+(BOOL)isNameStartCodePoint:(unsigned short)arg0 ;
+(BOOL)isNewline:(unsigned short)arg0 ;
+(BOOL)isNonASCIICodePoint:(unsigned short)arg0 ;
+(BOOL)isNonPrintable:(unsigned short)arg0 ;
+(BOOL)isUppercaseLetter:(unsigned short)arg0 ;
+(BOOL)isWhitespace:(unsigned short)arg0 ;
-(BOOL)isEOF:(NSUInteger)arg0 ;
-(BOOL)isValidEscape:(NSUInteger)arg0 ;
-(BOOL)wouldStartIdentifier:(NSUInteger)arg0 ;
-(BOOL)wouldStartNumber:(NSUInteger)arg0 ;
-(id)_consumeAsterisk:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeAt:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeBackslash:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeCaret:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeComment:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeDollar:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeDot:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeHash:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeIdentLike:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeLessThan:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeMinus:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeName:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeNameStart:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeNumber:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeNumeric:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumePipe:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumePlus:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeSlash:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeString:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 toEndChar:(unsigned short)arg2 ;
-(id)_consumeTilde:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeToken:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeUnicodeRange:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeUrl:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)_consumeWhitespace:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(id)getNextToken;
-(id)initWithText:(id)arg0 ;
-(unsigned short)_consumeEscapedCodePoint:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(unsigned short)_getChar:(NSUInteger)arg0 ;
-(void)_consumeBadUrlRemnants:(NSUInteger)arg0 consumed:(*NSUInteger)arg1 ;
-(void)dealloc;
-(void)reconsumeToken:(id)arg0 ;


@end


#endif