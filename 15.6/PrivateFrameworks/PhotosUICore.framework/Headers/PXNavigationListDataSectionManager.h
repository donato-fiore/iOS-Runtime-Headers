// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNAVIGATIONLISTDATASECTIONMANAGER_H
#define PXNAVIGATIONLISTDATASECTIONMANAGER_H

@class NSMutableDictionary, NSMapTable, PHCollectionList, NSString;
@protocol PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver;


#import "PXDataSectionManager.h"
#import "PXPhotoKitCollectionsDataSource.h"
#import "PXPhotoKitCollectionsDataSourceManager.h"

@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver>

 {
    NSMutableDictionary *_childDataSectionManagers;
    NSMutableDictionary *_childDataSectionIndexes;
    NSMapTable *_parentListItems;
}


@property (nonatomic) BOOL allowsEmptyDataSection; // ivar: _allowsEmptyDataSection
@property (readonly, nonatomic) PHCollectionList *collectionList; // ivar: _collectionList
@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *collectionsDataSource; // ivar: _collectionsDataSource
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager; // ivar: _collectionsDataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (readonly, nonatomic) BOOL skipAssetCountFetches; // ivar: _skipAssetCountFetches
@property (readonly) Class superclass;


+(id)makeCollectionsDataSourceManagerForConfiguration:(id)arg0 ;
-(BOOL)_isThumbnailAllowedForCollection:(id)arg0 ;
-(id)_changeDetailsForItemAtIndex:(NSInteger)arg0 childDataSection:(id)arg1 expanding:(BOOL)arg2 ;
-(id)auxiliaryObjectForKey:(id)arg0 dataSectionObject:(id)arg1 hintIndex:(NSInteger)arg2 ;
-(id)createDataSection;
-(id)initWithChildDataSectionManagers:(id)arg0 ;
-(id)initWithCollectionList:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
// -(void)_requestParentForListItem:(id)arg0 hintIndex:(NSInteger)arg1 resultHandler:(id)arg2 recursionHandler:(unk)arg3  ;
-(void)collapseListItem:(id)arg0 hintIndex:(NSInteger)arg1 ;
-(void)expandListItem:(id)arg0 hintIndex:(NSInteger)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pauseBackgroundFetching;
-(void)setChangeProcessingPaused:(BOOL)arg0 forReason:(id)arg1 ;
-(void)startBackgroundFetchingIfNeeded;


@end


#endif