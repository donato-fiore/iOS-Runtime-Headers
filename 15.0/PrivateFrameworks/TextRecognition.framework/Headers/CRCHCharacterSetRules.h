// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCHCHARACTERSETRULES_H
#define CRCHCHARACTERSETRULES_H

@class NSCharacterSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRCHCharacterSetRules : NSObject {
    map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> _strokeMaxPenalties;
    map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> _signatureUniChar;
}


@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_charSetRulesQueue; // ivar: __charSetRulesQueue
@property (retain, nonatomic) NSCharacterSet *arithmeticOperatorCharSet; // ivar: _arithmeticOperatorCharSet
@property (retain, nonatomic) NSCharacterSet *containsDotCharSet; // ivar: _containsDotCharSet
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
@property (retain, nonatomic) NSCharacterSet *endPunctuationCharSet; // ivar: _endPunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *lexiconSkipCharSet; // ivar: _lexiconSkipCharSet
@property (retain, nonatomic) NSCharacterSet *lowercaseCharSet; // ivar: _lowercaseCharSet
@property (retain, nonatomic) NSCharacterSet *middlePunctuationCharSet; // ivar: _middlePunctuationCharSet
@property (retain, nonatomic) NSCharacterSet *numeralEndLetterCharSet; // ivar: _numeralEndLetterCharSet
@property (retain, nonatomic) NSCharacterSet *prefixCapitalizationExceptionCharSet; // ivar: _prefixCapitalizationExceptionCharSet
@property (retain, nonatomic) NSCharacterSet *selfLoopPunctuationCharSet; // ivar: _selfLoopPunctuationCharSet
@property ? signatureUniChar;
@property (retain, nonatomic) NSCharacterSet *startPunctuationCharSet; // ivar: _startPunctuationCharSet
@property ? strokeMaxPenalties;
@property (retain, nonatomic) NSCharacterSet *uppercaseCharSet; // ivar: _uppercaseCharSet
@property (retain, nonatomic) NSCharacterSet *urlPunctuationCharSet; // ivar: _urlPunctuationCharSet


+(NSUInteger)characterType:(unsigned int)arg0 ;
+(NSUInteger)expectedMaxStrokeCount:(unsigned int)arg0 ;
+(NSUInteger)expectedMinStrokeCount:(unsigned int)arg0 ;
-(NSUInteger)_characterType:(unsigned int)arg0 ;
-(NSUInteger)_expectedMaxStrokeCount:(unsigned int)arg0 ;
-(NSUInteger)_expectedMinStrokeCount:(unsigned int)arg0 ;


@end


#endif