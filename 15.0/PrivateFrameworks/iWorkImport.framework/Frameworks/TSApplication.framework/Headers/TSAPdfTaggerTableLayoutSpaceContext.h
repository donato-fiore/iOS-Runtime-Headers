// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAPDFTAGGERTABLELAYOUTSPACECONTEXT_H
#define TSAPDFTAGGERTABLELAYOUTSPACECONTEXT_H

@class TSTLayoutSpace;


#import "TSAPdfTaggerContext.h"
#import "TSAPdfTaggerTableChunkContext.h"

@interface TSAPdfTaggerTableLayoutSpaceContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSUCellRect bodyCellRange; // ivar: _bodyCellRange
@property (readonly, nonatomic) _NSRange bodyRowRange;
@property (nonatomic) unsigned int currentRowIndex; // ivar: _currentRowIndex
@property (nonatomic) int currentTableRegion; // ivar: _currentTableRegion
@property (readonly, nonatomic) TSAPdfTaggerTableChunkContext *tableChunkContext; // ivar: _tableChunkContext
@property (readonly, nonatomic) TSTLayoutSpace *tableLayoutSpace; // ivar: _tableLayoutSpace


-(id)initWithStateOfTagger:(id)arg0 tableLayoutSpace:(id)arg1 ;
-(void)addRow:(unsigned int)arg0 ;


@end


#endif