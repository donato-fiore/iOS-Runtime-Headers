// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAPDFTAGGERTOCCHUNKCONTEXT_H
#define TSAPDFTAGGERTOCCHUNKCONTEXT_H

@class NSMutableDictionary, TSWPTOCRep;


#import "TSAPdfTaggerContext.h"

@interface TSAPdfTaggerTocChunkContext : TSAPdfTaggerContext {
    NSMutableDictionary *_paragraphStyleToLevelMap;
}


@property (readonly, nonatomic) TSWPTOCRep *tocChunkRep; // ivar: _tocChunkRep


-(id)initWithStateOfTagger:(id)arg0 tocChunkRep:(id)arg1 ;
-(int)levelForParagraphStyle:(id)arg0 ;
-(void)setUp;


@end


#endif