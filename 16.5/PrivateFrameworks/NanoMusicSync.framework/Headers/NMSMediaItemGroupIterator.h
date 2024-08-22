// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMEDIAITEMGROUPITERATOR_H
#define NMSMEDIAITEMGROUPITERATOR_H

@class NSMutableArray, NSArray, NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "NMSQuotaEvaluationState.h"
#import "NMSQuotaEvaluationState_Legacy.h"

@interface NMSMediaItemGroupIterator : NSObject

@property (nonatomic) NSUInteger currentContainerIndex; // ivar: _currentContainerIndex
@property (nonatomic) NSUInteger currentItemIndex; // ivar: _currentItemIndex
@property (readonly, nonatomic) NSUInteger estimatedItemSize; // ivar: _estimatedItemSize
@property (readonly, nonatomic) NMSQuotaEvaluationState *evaluationState;
@property (readonly, nonatomic) NMSQuotaEvaluationState_Legacy *evaluationState;
@property (retain, nonatomic) NSMutableArray *indexesToBeRemoved; // ivar: _indexesToBeRemoved
@property (retain, nonatomic) NSArray *itemGroups; // ivar: _itemGroups
@property (readonly, nonatomic) NSUInteger iteratingOrder;
@property (retain, nonatomic) NSMutableOrderedSet *mutableItemListWithinQuota; // ivar: _mutableItemListWithinQuota
@property (nonatomic) NSUInteger nominatedItemSize; // ivar: _nominatedItemSize
@property (retain, nonatomic) NSMutableArray *remainingContainers; // ivar: _remainingContainers
@property (retain, nonatomic) NSMutableArray *remainingItemLists; // ivar: _remainingItemLists
@property (readonly, nonatomic) NSUInteger sizeForCurrentIdentifier;
@property (nonatomic) NSUInteger sizeForItemListWithinQuota; // ivar: _sizeForItemListWithinQuota


-(BOOL)isCurrentIdentifierEstimate;
-(id)currentItem;
-(id)downloadInfoWithinQuota;
-(id)identifiersForContainersOfType:(NSUInteger)arg0 ;
-(id)initWithItemGroups:(id)arg0 estimatedItemSize:(NSUInteger)arg1 ;
-(id)mediaContainersAboveQuota;
-(void)_continueToNextContainer;
-(void)_continueToNextIdentifier;
-(void)_generateItemListAndSizesDictIfNecessary;
-(void)_markToBeRemoved;
-(void)addCurrentIdentifierToWithinQuotaListAndCountSizeTowardsQuota:(BOOL)arg0 ;
-(void)markAllRemainingContainersAsSkipped;
-(void)removeCurrentIdentifier;
-(void)resetToIterateOverQuotaIdentifiers;
-(void)skipCurrentIdentifier;


@end


#endif