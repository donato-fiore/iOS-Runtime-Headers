// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPARAGRAPHARBITRATOR_H
#define NSPARAGRAPHARBITRATOR_H

@class NSString, NSAttributedString;

#import <Foundation/Foundation.h>


@interface NSParagraphArbitrator : NSObject {
    *UBreakIterator _breaker;
    NSString *_breakerString;
    NSString *_breakerLocale;
}


@property (retain) NSAttributedString *attributedString; // ivar: _attributedString
@property CGFloat hyphenationFactor; // ivar: _hyphenationFactor
@property NSUInteger lineBreakStrategy; // ivar: _lineBreakStrategy
@property (copy) id *lineWidth; // ivar: _lineWidth
@property _NSRange paragraphRange; // ivar: _paragraphRange
@property (copy) NSString *preferredLanguage; // ivar: _preferredLanguage
@property _NSRange previousLineRange; // ivar: _previousLineRange
@property (readonly) *__CFStringTokenizer tokenizer; // ivar: _tokenizer
@property NSInteger typesetterBehavior; // ivar: _typesetterBehavior
@property (copy) id *validateLineBreakContext; // ivar: _validateLineBreakContext


+(id)paragraphArbitratorWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)prepareBreakIteratorForAttributedString:(id)arg0 characterIndex:(NSUInteger)arg1 ;
-(BOOL)prepareTokenizerForPreferredLanguage:(id)arg0 ;
-(CGFloat)raggednessWithCharIndexAsLineBreak:(NSUInteger)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)adjustedLineBreakIndexForProposedIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(struct ? )lineBreakContextBeforeIndex:(NSUInteger)arg0 lineFragmentWidth:(CGFloat)arg1 range:(struct _NSRange )arg2 ;
-(void)dealloc;
-(void)reset;
-(void)resetBreaker;


@end


#endif