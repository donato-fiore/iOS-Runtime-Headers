// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPARAGRAPHARBITRATOR_H
#define NSPARAGRAPHARBITRATOR_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>

#import "_NSOptimalLineBreaker.h"

@interface NSParagraphArbitrator : NSObject {
    NSAttributedString *_attributedString;
    _NSRange _paragraphRange;
    *__CTLine _paragraphLine;
    CGFloat _textContainerWidth;
    *UBreakIterator _breaker;
    NSString *_breakerString;
    NSString *_breakerLocale;
    NSUInteger _usesOptimalLayout;
    BOOL _needsOptimalLayout;
    _NSOptimalLineBreaker *_optimalLineBreaker;
}


@property (retain) NSAttributedString *attributedString;
@property CGFloat hyphenationFactor; // ivar: _hyphenationFactor
@property NSUInteger lineBreakStrategy; // ivar: _lineBreakStrategy
@property (copy) id *lineWidth; // ivar: _lineWidth
@property (readonly) BOOL mayCompressLines;
@property *__CTLine paragraphLine;
@property _NSRange paragraphRange;
@property (copy) NSString *preferredLanguage; // ivar: _preferredLanguage
@property _NSRange previousLineRange; // ivar: _previousLineRange
@property BOOL textContainerIsSimple; // ivar: _textContainerIsSimple
@property CGFloat textContainerWidth;
@property (readonly) *__CFStringTokenizer tokenizer; // ivar: _tokenizer
@property NSInteger typesetterBehavior; // ivar: _typesetterBehavior
@property (copy) id *validateLineBreakContext; // ivar: _validateLineBreakContext


+(id)paragraphArbitratorWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)_shouldUseOptimalLayout;
-(BOOL)prepareBreakIteratorForAttributedString:(id)arg0 characterIndex:(NSUInteger)arg1 ;
-(BOOL)prepareTokenizerForPreferredLanguage:(id)arg0 ;
-(CGFloat)raggednessWithCharIndexAsLineBreak:(NSUInteger)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)adjustedLineBreakIndexForProposedIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(struct ? )_firstFitLineBreakContextBeforeIndex:(NSUInteger)arg0 lineFragmentWidth:(CGFloat)arg1 range:(struct _NSRange )arg2 ;
-(struct ? )_optimalLineBreakContextBeforeIndex:(NSUInteger)arg0 lineFragmentWidth:(CGFloat)arg1 range:(struct _NSRange )arg2 ;
-(struct ? )lineBreakContextBeforeIndex:(NSUInteger)arg0 lineFragmentWidth:(CGFloat)arg1 range:(struct _NSRange )arg2 ;
-(void)_computeOptimalLayout;
-(void)dealloc;
-(void)reset;
-(void)resetBreaker;


@end


#endif