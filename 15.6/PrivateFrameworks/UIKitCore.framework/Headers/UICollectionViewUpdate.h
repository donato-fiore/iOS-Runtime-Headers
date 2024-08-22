// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLLECTIONVIEWUPDATE_H
#define UICOLLECTIONVIEWUPDATE_H

@class NSArray, NSMutableIndexSet, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol _UICollectionViewUpdateTranslating;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UICollectionViewData.h"
#import "_UICollectionViewFocusedItemState.h"

@interface UICollectionViewUpdate : NSObject <_UICollectionViewUpdateTranslating>

 {
    UICollectionView *_collectionView;
    NSArray *_updateItems;
    UICollectionViewData *_oldModel;
    UICollectionViewData *_newModel;
    CGRect _oldVisibleBounds;
    CGRect _newVisibleBounds;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    *NSInteger _oldSectionMap;
    *NSInteger _newSectionMap;
    *NSInteger _oldGlobalItemMap;
    *NSInteger _newGlobalItemMap;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    _UICollectionViewFocusedItemState *_oldFocusedItemState;
    _UICollectionViewFocusedItemState *_newFocusedItemState;
    NSSet *_itemAnchoredAuxiliaryElementKinds;
    NSSet *_moveItemSourceIndexPaths;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)hasDeletedAuxiliaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)hasInsertedAuxiliaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)hasMovedItemAtOldIndexPath:(id)arg0 ;
-(NSInteger)finalGlobalIndexForInitialGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)finalSectionCount;
-(NSInteger)finalSectionIndexForInitialSectionIndex:(NSInteger)arg0 ;
-(NSInteger)initialGlobalIndexForFinalGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)initialSectionCount;
-(NSInteger)initialSectionIndexForFinalSectionIndex:(NSInteger)arg0 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg0 ;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg0 forInitialIndexPath:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 updateItems:(id)arg1 moveItemSourceIndexPaths:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(struct CGRect )arg5 newVisibleBounds:(struct CGRect )arg6 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg0 ;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg0 forFinalIndexPath:(id)arg1 ;
-(id)newIndexPathForSupplementaryElementOfKind:(id)arg0 oldIndexPath:(id)arg1 ;
-(id)oldIndexPathForSupplementaryElementOfKind:(id)arg0 newIndexPath:(id)arg1 ;
-(id)validatedNewIndexPathForSupplementaryElementOfKind:(id)arg0 oldIndexPath:(id)arg1 ;
-(id)validatedOldIndexPathForSupplementaryElementOfKind:(id)arg0 newIndexPath:(id)arg1 ;
-(struct _NSRange )finalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;
-(struct _NSRange )initalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;
-(void)_computeAuxiliaryUpdates;
-(void)_computeItemUpdates;
-(void)_computeSectionUpdates;
-(void)dealloc;


@end


#endif