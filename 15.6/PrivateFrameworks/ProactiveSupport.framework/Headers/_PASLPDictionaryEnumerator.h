// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASLPDICTIONARYENUMERATOR_H
#define _PASLPDICTIONARYENUMERATOR_H

@class NSEnumerator;
@protocol _PASLPReaderProtocol;


#import "_PASLPDictionaryContext.h"

@interface _PASLPDictionaryEnumerator : NSEnumerator {
    id<_PASLPReaderProtocol> *_reader;
    _PASLPDictionaryContext *_context;
    NSUInteger _ofs;
}




-(id)initWithLazyPlistReader:(id)arg0 context:(id)arg1 ;
-(id)nextObject;


@end


#endif