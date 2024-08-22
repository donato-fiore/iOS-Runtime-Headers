// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARLMTKALDIVOCAB_H
#define _EARLMTKALDIVOCAB_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _EARLMTKaldiVocab : NSObject {
    NSUInteger _bosIndex;
    NSUInteger _eosIndex;
    NSUInteger _unkIndex;
    NSString *_eosToken;
    unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> _w2i;
}




+(void)initialize;
-(NSUInteger)beginOfSentenceIndex;
-(NSUInteger)endOfSentenceIndex;
-(NSUInteger)indexForWord:(id)arg0 ;
-(NSUInteger)unknownWordIndex;
-(NSUInteger)vocabSize;
-(id)endOfSentenceToken;
-(id)init;
-(id)initWithContentsOfUrl:(id)arg0 outError:(*id)arg1 ;


@end


#endif