// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGHIGHLIGHTITEMENRICHMENT_H
#define PGHIGHLIGHTITEMENRICHMENT_H

@protocol PGHighlightItemListModelWriter, PGHighlightItemEnrichmentRule;

#import <Foundation/Foundation.h>

#import "PGNeighborScoreComputer.h"

@interface PGHighlightItemEnrichment : NSObject

@property (readonly, nonatomic) NSObject<PGHighlightItemListModelWriter> *modelWriter; // ivar: _modelWriter
@property (retain, nonatomic) PGNeighborScoreComputer *neighborScoreComputer; // ivar: _neighborScoreComputer
@property (readonly, nonatomic) NSObject<PGHighlightItemEnrichmentRule> *rule; // ivar: _rule


-(id)initWithRule:(id)arg0 modelWriter:(id)arg1 ;
-(void)_contextualKeyAssetForYearHighlightItemList:(id)arg0 sharingFilter:(unsigned short)arg1 curationContext:(id)arg2 contextualOptions:(id)arg3 options:(id)arg4 availableContextualRules:(id)arg5 progressBlock:(id)arg6 ;
-(void)contextualKeyAssetForYearHighlightItemLists:(id)arg0 withManager:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(id)arg4 ;
-(void)enrichHighlightItemLists:(id)arg0 progressBlock:(id)arg1 ;
-(void)updateVisibilityStateForHighlightItemLists:(id)arg0 withManager:(id)arg1 progressBlock:(id)arg2 ;


@end


#endif