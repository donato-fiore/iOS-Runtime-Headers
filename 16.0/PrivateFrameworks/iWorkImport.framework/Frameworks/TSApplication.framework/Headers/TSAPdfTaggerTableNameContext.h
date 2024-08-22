// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAPDFTAGGERTABLENAMECONTEXT_H
#define TSAPDFTAGGERTABLENAMECONTEXT_H



#import "TSAPdfTaggerContext.h"
#import "TSAPdfTaggerTableChunkContext.h"

@interface TSAPdfTaggerTableNameContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSAPdfTaggerTableChunkContext *tableChunkContext; // ivar: _tableChunkContext


-(id)initWithStateOfTagger:(id)arg0 ;


@end


#endif