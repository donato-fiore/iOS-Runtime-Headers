// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWUPDATE_H
#define UICOLLECTIONVIEWUPDATE_H

@class NSArray, NSMutableIndexSet, NSMutableArray, NSMutableDictionary, NSIndexPath, NSSet, NSString, NSUUID;
@protocol _UICollectionViewUpdateTranslating;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UICollectionViewData.h"

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
    NSIndexPath *_oldFocusedIndexPath;
    NSIndexPath *_newFocusedIndexPath;
    NSInteger _oldFocusedViewType;
    NSInteger _newFocusedViewType;
    NSSet *_itemAnchoredAuxiliaryElementKinds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(NSInteger)finalGlobalIndexForInitialGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)finalSectionCount;
-(NSInteger)finalSectionIndexForInitialSectionIndex:(NSInteger)arg0 ;
-(NSInteger)initialGlobalIndexForFinalGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)initialSectionCount;
-(NSInteger)initialSectionIndexForFinalSectionIndex:(NSInteger)arg0 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg0 ;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg0 forInitialIndexPath:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 updateItems:(id)arg1 oldModel:(id)arg2 newModel:(id)arg3 oldVisibleBounds:(struct CGRect )arg4 newVisibleBounds:(struct CGRect )arg5 ;
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