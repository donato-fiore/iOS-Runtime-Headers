// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGHIGHLIGHTITEMLIST_H
#define PGHIGHLIGHTITEMLIST_H

@class NSSet, NSString, NSDate, NSArray, NSMutableSet, NSMutableOrderedSet, PHAsset, NSDateComponents;
@protocol PGHighlightItem;

#import <Foundation/Foundation.h>


@interface PGHighlightItemList : NSObject <PGHighlightItem>



@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (copy, nonatomic) NSString *dateDescription; // ivar: _dateDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) unsigned short enrichmentState; // ivar: _enrichmentState
@property (retain, nonatomic) NSArray *extendedCuratedAssets; // ivar: _extendedCuratedAssets
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *internalAddedHighlightItems; // ivar: _internalAddedHighlightItems
@property (retain, nonatomic) NSMutableOrderedSet *internalHighlightItems; // ivar: _internalHighlightItems
@property (readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems; // ivar: _internalRemovedHighlightItems
@property (readonly, nonatomic) BOOL isCandidateForReuse;
@property (readonly, nonatomic) BOOL isNewList;
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) unsigned short kind; // ivar: _kind
@property (readonly, nonatomic) NSDateComponents *localDateComponents;
@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (retain, nonatomic) id *modelObject; // ivar: _modelObject
@property (readonly, nonatomic) NSUInteger numberOfAssetsInExtended;
@property (readonly, nonatomic) NSObject<PGHighlightItem> *parentHighlightItem; // ivar: _parentHighlightItem
@property (nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (copy, nonatomic) NSString *smartDescription; // ivar: _smartDescription
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, copy, nonatomic) NSArray *sortedHighlightItemModelObjects;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSString *uuid;
@property (nonatomic) unsigned short visibilityState; // ivar: _visibilityState


+(id)timeSortDescriptors;
+(void)updateParentHighlightItemLists:(id)arg0 withChildHighlightItems:(id)arg1 ;
-(id)initAsNewList;
-(id)initWithParentHighlightItem:(id)arg0 childHighlightItems:(id)arg1 ;
-(void)_updateHighlightItemsOrdering;
-(void)addHighlightItem:(id)arg0 ;
-(void)removeHighlightItem:(id)arg0 ;


@end


#endif