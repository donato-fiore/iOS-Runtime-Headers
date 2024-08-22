// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLHIGHLIGHTITEMLIST_H
#define PLHIGHLIGHTITEMLIST_H

@class NSSet, NSDate, NSMutableSet, NSMutableOrderedSet, NSArray, NSString;
@protocol PLHighlightItem;

#import <Foundation/Foundation.h>


@interface PLHighlightItemList : NSObject

@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSMutableSet *internalAddedHighlightItems; // ivar: _internalAddedHighlightItems
@property (readonly, nonatomic) NSMutableOrderedSet *internalHighlightItems; // ivar: _internalHighlightItems
@property (readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems; // ivar: _internalRemovedHighlightItems
@property (readonly, nonatomic) BOOL isCandidateForReuse;
@property (readonly, nonatomic) BOOL isNewList;
@property (readonly, nonatomic) NSUInteger numberOfAssetsInExtended;
@property (readonly, nonatomic) NSObject<PLHighlightItem> *parentHighlightItem; // ivar: _parentHighlightItem
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *uuid;


+(id)timeSortDescriptors;
-(id)description;
-(id)initAsNewList;
-(id)initWithParentHighlightItem:(id)arg0 childHighlightItems:(id)arg1 ;
-(void)_updateHighlightItemsOrdering;
-(void)_updateStartEndDates;
-(void)addHighlightItem:(id)arg0 ;
-(void)mergeWithHighlightItemList:(id)arg0 ;
-(void)removeHighlightItem:(id)arg0 ;
-(void)reset;


@end


#endif