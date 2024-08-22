// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONSEARCHRANKEDCOLLECTION_H
#define WFACTIONSEARCHRANKEDCOLLECTION_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface WFActionSearchRankedCollection : NSObject {
    NSMutableOrderedSet *_itemsWithExactNameMatch;
    NSMutableOrderedSet *_itemsWithNameMatch;
    NSMutableOrderedSet *_itemsWithCategoryMatch;
    NSMutableOrderedSet *_itemsWithKeywordMatch;
}




-(id)init;
-(id)orderedSetForType:(NSUInteger)arg0 ;
-(id)rankedItems;
-(void)addItem:(id)arg0 forType:(NSUInteger)arg1 ;
-(void)prioritizeItem:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif