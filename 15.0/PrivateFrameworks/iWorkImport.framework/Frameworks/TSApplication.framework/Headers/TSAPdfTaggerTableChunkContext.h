// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAPDFTAGGERTABLECHUNKCONTEXT_H
#define TSAPDFTAGGERTABLECHUNKCONTEXT_H

@class TSTTableRep;


#import "TSAPdfTaggerContext.h"

@interface TSAPdfTaggerTableChunkContext : TSAPdfTaggerContext

@property (nonatomic) BOOL firstSpace; // ivar: _firstSpace
@property (readonly, nonatomic) BOOL multispace; // ivar: _multispace
@property (readonly, nonatomic) TSTTableRep *tableChunkRep; // ivar: _tableChunkRep


-(id)initWithStateOfTagger:(id)arg0 tableChunk:(id)arg1 ;


@end


#endif