// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAPDFTAGGERTABLECELLCONTEXT_H
#define TSAPDFTAGGERTABLECELLCONTEXT_H



#import "TSAPdfTaggerContext.h"
#import "TSAPdfTaggerTableLayoutSpaceContext.h"

@interface TSAPdfTaggerTableCellContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSUCellCoord cellID; // ivar: _cellID
@property (readonly, nonatomic) TSAPdfTaggerTableLayoutSpaceContext *tableLayoutSpaceContext; // ivar: _tableLayoutSpaceContext


-(id)initWithStateOfTagger:(id)arg0 cellID:(struct TSUCellCoord )arg1 ;


@end


#endif