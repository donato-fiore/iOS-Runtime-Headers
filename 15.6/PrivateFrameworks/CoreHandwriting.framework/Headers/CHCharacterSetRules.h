// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCHARACTERSETRULES_H
#define CHCHARACTERSETRULES_H

@class NSCharacterSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHCharacterSetRules : NSObject {
    map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> _strokeMaxPenalties;
    map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> _signatureUniChar;
}


@property (retain, nonatomic) NSCharacterSet *CJKPairedPunctuationsCharSet; // ivar: _CJKPairedPunctuationsCharSet
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_charSetRulesQueue; // ivar: __charSetRulesQueue
@property (retain, nonatomic) NSCharacterSet *alphaNumericCharSet; // ivar: _alphaNumericCharSet
@property (retain, nonatomic) NSCharacterSet *arithmeticOperatorCharSet; // ivar: _arithmeticOperatorCharSet
@property (retain, nonatomic) NSCharacterSet *commonJapaneseSymbols; // ivar: _commonJapaneseSymbols
@property (retain, nonatomic) NSCharacterSet *containsDotCharSet; // ivar: _containsDotCharSet
@property (retain, nonatomic) NSCharacterSet *containsTwoDotsCharSet; // ivar: _containsTwoDotsCharSet
@property (retain, nonatomic) NSCharacterSet *currencySymbols; // ivar: _currencySymbols
@property (retain, nonatomic) NSCharacterSet *dateTimeEndLetterCharSet; // ivar: _dateTimeEndLetterCharSet
@property (retain, nonatomic) NSCharacterSet *dateTimeSeparatorCharSet; // ivar: _dateTimeSeparatorCharSet
@property (retain, nonatomic) NSCharacterSet *digitCharSet; // ivar: _digitCharSet
@property (retain, nonatomic) NSCharacterSet *digitEndPunctuationCharSet; // ivar: _digitEndPunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *digitStartPunctuationCharSet; // ivar: _digitStartPunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *emailAtCharSet; // ivar: _emailAtCharSet
@property (retain, nonatomic) NSCharacterSet *emailPunctuationCharSet; // ivar: _emailPunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *emoticonBottomCharSet; // ivar: _emoticonBottomCharSet
@property (retain, nonatomic) NSCharacterSet *emoticonMiddleCharSet; // ivar: _emoticonMiddleCharSet
@property (retain, nonatomic) NSCharacterSet *emoticonTopCharSet; // ivar: _emoticonTopCharSet
@property (retain, nonatomic) NSCharacterSet *endOfSentencePunctuationCharSet; // ivar: _endOfSentencePunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *endOfWordPunctuationCharSet; // ivar: _endOfWordPunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *lexiconSkipCharSet; // ivar: _lexiconSkipCharSet
@property (retain, nonatomic) NSCharacterSet *lowercaseCharSet; // ivar: _lowercaseCharSet
@property (retain, nonatomic) NSCharacterSet *middlePunctuationCharSet; // ivar: _middlePunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *nonSpaceSeparatorCharSet; // ivar: _nonSpaceSeparatorCharSet
@property (retain, nonatomic) NSCharacterSet *numeralEndLetterCharSet; // ivar: _numeralEndLetterCharSet
@property (retain, nonatomic) NSCharacterSet *prefixCapitalizationExceptionCharSet; // ivar: _prefixCapitalizationExceptionCharSet
@property (retain, nonatomic) NSCharacterSet *punctuationThatNeedSpaceCleanup; // ivar: _punctuationThatNeedSpaceCleanup
@property (retain, nonatomic) NSCharacterSet *selfLoopPunctuationCharSet; // ivar: _selfLoopPunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *sentenceStartPunctuationInSpanish; // ivar: _sentenceStartPunctuationInSpanish
@property ? signatureUniChar;
@property (retain, nonatomic) NSCharacterSet *startPunctuationCharSet; // ivar: _startPunctuationCharSet
@property ? strokeMaxPenalties;
@property (retain, nonatomic) NSCharacterSet *symbolsRequiringSpaceBeforeInFrench; // ivar: _symbolsRequiringSpaceBeforeInFrench
@property (retain, nonatomic) NSCharacterSet *uppercaseCharSet; // ivar: _uppercaseCharSet
@property (retain, nonatomic) NSCharacterSet *urlPunctuationCharSet; // ivar: _urlPunctuationCharSet


+(NSUInteger)characterType:(unsigned int)arg0 ;
+(NSUInteger)characterTypeFromString:(id)arg0 ;
+(NSUInteger)expectedMaxDotCount:(unsigned int)arg0 ;
+(NSUInteger)expectedMaxStrokeCount:(unsigned int)arg0 ;
+(NSUInteger)expectedMinStrokeCount:(unsigned int)arg0 ;
-(NSUInteger)_characterType:(unsigned int)arg0 ;
-(NSUInteger)_expectedMaxDotCount:(unsigned int)arg0 ;
-(NSUInteger)_expectedMaxStrokeCount:(unsigned int)arg0 ;
-(NSUInteger)_expectedMinStrokeCount:(unsigned int)arg0 ;


@end


#endif