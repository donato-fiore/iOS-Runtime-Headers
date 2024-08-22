// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSELECTIONMANAGER_H
#define PUPHOTOSELECTIONMANAGER_H

@class NSHashTable, NSMapTable, NSMutableSet, NSOrderedSet, NSArray, NSSet, NSDictionary, PXSelectionSnapshot;
@protocol NSCopying, PHAssetCollectionDataSource;

#import <Foundation/Foundation.h>


@interface PUPhotoSelectionManager : NSObject <NSCopying>

 {
    NSHashTable *_changeObservers;
    NSMapTable *_selectionEntriesByAssetCollection;
    NSMutableSet *_uniqueAssetSelection;
    NSInteger _selectionChangeCount;
}


@property (weak, nonatomic) NSObject<PHAssetCollectionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) BOOL isAnyAssetSelected;
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) NSOrderedSet *orderedSelectedAssets;
@property (readonly, nonatomic) NSArray *selectedAssetCollections;
@property (readonly, nonatomic) NSSet *selectedAssets;
@property (readonly, nonatomic) NSDictionary *selectedAssetsByAssetCollection;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;


-(BOOL)_shouldUniqueAssets;
-(BOOL)areAllAssetsSelectedInAssetCollection:(id)arg0 ;
-(BOOL)areAllAssetsSelectedInAssetCollections:(id)arg0 ;
-(BOOL)isAnyAssetSelectedInAssetCollection:(id)arg0 ;
-(BOOL)isAnyAssetSelectedInAssetCollections:(id)arg0 ;
-(BOOL)isAssetAtIndexSelected:(NSUInteger)arg0 inAssetCollection:(id)arg1 ;
-(id)_selectionEntryForAssetCollection:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOptions:(NSInteger)arg0 ;
-(id)localizedSelectionString;
-(id)selectedAssetIndexesWithAssetCollectionOrdering:(id)arg0 ;
-(id)selectedAssetsWithAssetCollectionOrdering:(id)arg0 ;
-(struct PXAssetMediaTypeCount )requestAssetsMediaTypeCount;
-(void)_beginSelectionChange;
-(void)_endSelectionChange;
-(void)deselectAllAssets;
-(void)deselectAllAssetsInAssetCollections:(id)arg0 ;
-(void)deselectAssetAtIndex:(NSUInteger)arg0 inAssetCollection:(id)arg1 ;
-(void)deselectAssetsAtIndexes:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)arg0 block:(id)arg1 ;
-(void)handlePhotoLibraryChange:(id)arg0 ;
-(void)invalidateAllAssetIndexes;
-(void)registerChangeObserver:(id)arg0 ;
-(void)selectAllAssetsInAssetCollections:(id)arg0 ;
-(void)selectAssetAtIndex:(NSUInteger)arg0 inAssetCollection:(id)arg1 ;
-(void)selectAssetsAtIndexes:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif