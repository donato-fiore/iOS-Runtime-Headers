// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHER_H
#define CKVSPANMATCHER_H

@protocol CKVSpanMatchSearchIndex, CKVSpanMatchResultInterpreter;

#import <Foundation/Foundation.h>

#import "CKVTokenizer.h"

@interface CKVSpanMatcher : NSObject {
    NSObject<CKVSpanMatchSearchIndex> *_searchIndex;
    NSObject<CKVSpanMatchResultInterpreter> *_resultInterpreter;
}


@property (retain) CKVTokenizer *tokenizer; // ivar: _tokenizer


-(id)_getTokenizer;
-(id)init;
-(id)initWithSearchIndex:(id)arg0 resultInterpreter:(id)arg1 ;
-(id)matchSpansWithString:(id)arg0 ;
-(id)matchSpansWithTokenChain:(id)arg0 ;


@end


#endif