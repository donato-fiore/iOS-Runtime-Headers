// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAPDFTAGGERTEXTSTORAGECHUNKCONTEXT_H
#define TSAPDFTAGGERTEXTSTORAGECHUNKCONTEXT_H

@class TSWPRep;


#import "TSAPdfTaggerTextColumnOwnerContext.h"

@interface TSAPdfTaggerTextStorageChunkContext : TSAPdfTaggerTextColumnOwnerContext

@property (readonly, nonatomic) TSWPRep *textStorageChunk; // ivar: _textStorageChunk


-(id)initWithStateOfTagger:(id)arg0 textStorageChunk:(id)arg1 limitSelection:(id)arg2 ;


@end


#endif