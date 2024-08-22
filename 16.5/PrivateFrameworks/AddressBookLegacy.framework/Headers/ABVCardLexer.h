// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABVCARDLEXER_H
#define ABVCARDLEXER_H

@class NSMutableData, NSArray;

#import <Foundation/Foundation.h>

#import "ABVCardWatchdogTimer.h"

@interface ABVCardLexer : NSObject {
    NSMutableData *_data;
    char * _bytes;
    NSUInteger _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    BOOL _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
    ABVCardWatchdogTimer *_timer;
}




-(BOOL)_advancePastLineFoldingSequenceIfNeeded;
-(BOOL)advancePastEOL;
-(BOOL)advancePastEOLSingle;
-(BOOL)advancePastEOLUnicode;
-(BOOL)advanceToEOL;
-(BOOL)advanceToEOLSingle;
-(BOOL)advanceToEOLUnicode;
-(BOOL)advanceToToken:(int)arg0 throughTypes:(int)arg1 ;
-(BOOL)advancedPastToken:(int)arg0 ;
-(BOOL)atEOF;
-(id)initWithData:(id)arg0 watchdogTimer:(id)arg1 ;
-(id)nextArraySeperatedByToken:(int)arg0 stoppingAt:(int)arg1 inEncoding:(NSUInteger)arg2 ;
-(id)nextBase64Data;
-(id)nextBase64Line:(*BOOL)arg0 ;
-(id)nextEscapedCharacter;
-(id)nextQuotedPrintableData;
-(id)nextSingleByteBase64Line:(*BOOL)arg0 ;
-(id)nextSingleByteStringInEncoding:(NSUInteger)arg0 quotedPrintable:(BOOL)arg1 stopTokens:(int)arg2 trim:(BOOL)arg3 ;
-(id)nextStringInEncoding:(NSUInteger)arg0 quotedPrintable:(BOOL)arg1 stopTokens:(int)arg2 trim:(BOOL)arg3 ;
-(id)nextUnicodeBase64Line:(*BOOL)arg0 ;
-(id)nextUnicodeStringStopTokens:(int)arg0 quotedPrintable:(BOOL)arg1 trim:(BOOL)arg2 ;
-(id)tokenName:(int)arg0 ;
-(id)tokenSetForLength:(int)arg0 ;
-(int)advanceToSingleByteString;
-(int)advanceToString;
-(int)advanceToUnicodeString;
-(int)errorCount;
-(int)nextTokenPeak:(BOOL)arg0 ;
-(int)nextTokenPeakSingle:(BOOL)arg0 length:(int)arg1 ;
-(int)nextTokenPeakUnicode:(BOOL)arg0 length:(int)arg1 ;
-(int)tokenAtCursor;
-(unsigned int)cursor;
-(void)_applyNextStringInEncoding:(NSUInteger)arg0 quotedPrintable:(BOOL)arg1 stopTokens:(int)arg2 trim:(BOOL)arg3 intoString:(id)arg4 ;
-(void)advanceToPeakPoint;
-(void)dealloc;


@end


#endif