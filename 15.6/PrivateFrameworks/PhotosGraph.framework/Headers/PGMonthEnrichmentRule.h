// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMONTHENRICHMENTRULE_H
#define PGMONTHENRICHMENTRULE_H

@class NSString;
@protocol PGHighlightItemEnrichmentRule, OS_os_log, PGHighlightItemModelReader;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNodeCollection.h"

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>

 {
    PGGraphMomentNodeCollection *_momentNodesAtWork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) NSObject<PGHighlightItemModelReader> *modelReader; // ivar: _modelReader
@property (readonly) Class superclass;


-(CGFloat)promotionScoreForHighlightItemList:(id)arg0 ;
-(id)_momentNodesAtWorkWithGraph:(id)arg0 ;
-(id)_sampleAssets:(id)arg0 withSize:(NSUInteger)arg1 ;
-(id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg0 previouslySelectedItemsCountByWeek:(id)arg1 maximumNumberOfItems:(NSUInteger)arg2 sortDescriptors:(id)arg3 ;
-(id)curatedAssetsForHighlightItemList:(id)arg0 contextualKeyAssetByHighlighItemUUID:(id)arg1 ;
-(id)fallbackKeyAssetWithHighlightItemList:(id)arg0 ;
-(id)firstKeyAssetWithHighlightItemList:(id)arg0 ;
-(id)initWithModelReader:(id)arg0 loggingConnection:(id)arg1 ;
-(id)keyAssetForHighlightItemList:(id)arg0 contextualKeyAssetByHighlighItemUUID:(id)arg1 ;
-(id)sortedItemsByWeekOfMonthFromItems:(id)arg0 sortDescriptors:(id)arg1 ;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg0 withGraph:(id)arg1 neighborScoreComputer:(id)arg2 usingBlock:(id)arg3 ;
// -(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg0 withGraph:(id)arg1 neighborScoreComputer:(id)arg2 usingBlock:(id)arg3 maximumNumberOfVisibleItems:(unk)arg4 maximumNumberOfVisibleRegularItems:(NSUInteger)arg5  ;


@end


#endif