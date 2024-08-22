// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETSORTBYDATESFETCHRESULT_H
#define PXASSETSORTBYDATESFETCHRESULT_H

@class NSDictionary, NSIndexSet, NSSortDescriptor;

#import <Foundation/Foundation.h>


@interface PXAssetSortByDatesFetchResult : NSObject

@property (readonly, nonatomic) NSDictionary *dateByIndex; // ivar: _dateByIndex
@property (readonly, nonatomic) NSIndexSet *fetchedIndexes; // ivar: _fetchedIndexes
@property (readonly, nonatomic) NSSortDescriptor *sortDescriptor; // ivar: _sortDescriptor


-(id)initWithSortDescriptor:(id)arg0 fetchedIndexes:(id)arg1 dateByIndex:(id)arg2 ;
-(void)enumerateFetchedItemsUsingBlock:(id)arg0 ;


@end


#endif