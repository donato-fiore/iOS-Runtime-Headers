// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGHIGHLIGHTITEMLIST_H
#define PGHIGHLIGHTITEMLIST_H

@class NSSet, NSString, NSDate, NSArray, NSMutableSet, NSMutableOrderedSet, PHAsset, NSDateComponents;
@protocol PGHighlightItem;

#import <Foundation/Foundation.h>


@interface PGHighlightItemList : NSObject <PGHighlightItem>



@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (readonly, nonatomic) unsigned short category; // ivar: _category
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
@property (retain, nonatomic) PHAsset *keyAssetPrivate; // ivar: _keyAssetPrivate
@property (retain, nonatomic) PHAsset *keyAssetShared; // ivar: _keyAssetShared
@property (readonly, nonatomic) unsigned short kind; // ivar: _kind
@property (readonly, nonatomic) NSDateComponents *localDateComponents;
@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship; // ivar: _mixedSharingCompositionKeyAssetRelationship
@property (retain, nonatomic) id *modelObject; // ivar: _modelObject
@property (readonly, nonatomic) NSUInteger numberOfAssetsInExtendedMixed;
@property (readonly, nonatomic) NSUInteger numberOfAssetsInExtendedPrivate;
@property (readonly, nonatomic) NSUInteger numberOfAssetsInExtendedShared;
@property (readonly, nonatomic) NSObject<PGHighlightItem> *parentHighlightItem; // ivar: _parentHighlightItem
@property (nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (readonly, nonatomic) unsigned short sharingComposition; // ivar: _sharingComposition
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, copy, nonatomic) NSArray *sortedHighlightItemModelObjects;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSString *uuid;
@property (nonatomic) unsigned short visibilityStateMixed; // ivar: _visibilityStateMixed
@property (nonatomic) unsigned short visibilityStatePrivate; // ivar: _visibilityStatePrivate
@property (nonatomic) unsigned short visibilityStateShared; // ivar: _visibilityStateShared


+(id)timeSortDescriptors;
+(void)updateParentHighlightItemLists:(id)arg0 withChildHighlightItems:(id)arg1 ;
-(NSUInteger)numberOfAssetsInExtendedForSharingFilter:(unsigned short)arg0 ;
-(id)childHighlightItemsForHighlightFilter:(unsigned short)arg0 ;
-(id)initAsNewList;
-(id)initWithParentHighlightItem:(id)arg0 childHighlightItems:(id)arg1 ;
-(id)keyAssetForHighlightFilter:(unsigned short)arg0 ;
-(unsigned short)visibilityStateForHighlightFilter:(unsigned short)arg0 ;
-(void)_updateHighlightItemsOrdering;
-(void)addHighlightItem:(id)arg0 ;
-(void)removeHighlightItem:(id)arg0 ;
-(void)setVisibilityState:(unsigned short)arg0 forHighlightFilter:(unsigned short)arg1 ;


@end


#endif