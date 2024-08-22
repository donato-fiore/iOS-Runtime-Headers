// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMIMEENRICHEDREADER_H
#define MFMIMEENRICHEDREADER_H

@class NSMutableString;

#import <Foundation/Foundation.h>


@interface MFMimeEnrichedReader : NSObject {
    ? _inputBuffer;
    NSInteger _currentIndex;
    NSInteger _inputLength;
    BOOL _noFillLevel;
    BOOL _eatOneNewline;
    BOOL _insideComment;
    BOOL _wantsPlainText;
    int _lastQuoteLevel;
    *__CFArray _commandStack;
    id *_outputString;
    NSMutableString *_outputBuffer;
    *__CFString _prependHTML;
    *__CFString _postpendHTML;
    float _indentWidth;
}




+(struct __CFCharacterSet *)parenSet;
+(struct __CFCharacterSet *)punctuationSet;
-(id)currentFont;
-(id)description;
-(int)readTokenInto:(*id)arg0 ;
-(void)appendNewLine:(id)arg0 ;
-(void)appendStringToBuffer:(id)arg0 ;
-(void)beginCommand:(id)arg0 ;
-(void)closeUpQuoting;
-(void)convertEnrichedString:(id)arg0 intoOutputString:(id)arg1 ;
-(void)convertRichTextString:(id)arg0 intoOutputString:(id)arg1 ;
-(void)dealloc;
-(void)endCommand:(id)arg0 ;
-(void)handleNoParameterCommand:(struct ? *)arg0 ;
-(void)mismatchError:(id)arg0 ;
-(void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
-(void)parseParameterString:(id)arg0 ;
-(void)resetStateWithString:(id)arg0 outputString:(id)arg1 ;
-(void)setWantsHTML:(BOOL)arg0 ;
-(void)setupFontStackEntry:(struct _CommandStackEntry *)arg0 ;


@end


#endif