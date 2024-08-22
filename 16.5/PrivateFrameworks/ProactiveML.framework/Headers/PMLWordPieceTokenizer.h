// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLWORDPIECETOKENIZER_H
#define PMLWORDPIECETOKENIZER_H

@protocol PMLWordPieceVocabProtocol;

#import <Foundation/Foundation.h>


@interface PMLWordPieceTokenizer : NSObject {
    id<PMLWordPieceVocabProtocol> *_vocab;
}




-(id)init;
-(id)initWithVocab:(id)arg0 ;
-(id)tokenize:(id)arg0 withLength:(NSUInteger)arg1 ;
-(int)toTokens:(struct _NSRange *)arg0 fromInput:(id)arg1 withLength:(NSUInteger)arg2 ;
-(int)tokenizeToIds:(*float)arg0 fromString:(id)arg1 tokens:(struct _NSRange *)arg2 tokenCount:(int)arg3 length:(NSUInteger)arg4 ;
-(unsigned int)endId;
-(unsigned int)padId;
-(unsigned int)startId;


@end


#endif