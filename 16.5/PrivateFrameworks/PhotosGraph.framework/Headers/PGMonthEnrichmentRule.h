// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg0 previouslySelectedItemsCountByWeek:(id)arg1 maximumNumberOfItems:(NSUInteger)arg2 sortDescriptors:(id)arg3 ;
-(id)fallbackKeyAssetWithHighlightItemList:(id)arg0 sharingFilter:(unsigned short)arg1 ;
-(id)initWithModelReader:(id)arg0 loggingConnection:(id)arg1 ;
-(id)keyAssetForHighlightItemList:(id)arg0 sharingFilter:(unsigned short)arg1 ;
-(id)sortedItemsByWeekOfMonthFromItems:(id)arg0 sortDescriptors:(id)arg1 ;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg0 sharingFilter:(unsigned short)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(id)arg4 ;
// -(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg0 sharingFilter:(unsigned short)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(id)arg4 maximumNumberOfVisibleItems:(unk)arg5 maximumNumberOfVisibleRegularItems:(NSUInteger)arg6  ;


@end


#endif