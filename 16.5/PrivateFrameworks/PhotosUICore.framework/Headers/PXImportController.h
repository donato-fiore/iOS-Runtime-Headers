// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXIMPORTCONTROLLER_H
#define PXIMPORTCONTROLLER_H

@class NSArray, NSTimer, NSString, PHAssetCollection, NSProgress, PHImportSource, NSMutableSet, PHPhotoLibrary, NSMutableDictionary;
@protocol PXImportAssetsDataSourceManagerDelegate, PXMutableImportController, PHImportServiceImporterDelegate, PHImportSourceObserver, PXChangeObserver, PXImportControllerTopLevelCompletionDelegate, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXImportAssetsDataSourceManager.h"
#import "PXImportDeleteAction.h"
#import "PXImportMediaProvider.h"
#import "PXImportSessionInfo.h"
#import "PXSelectionSnapshot.h"
#import "PXImportMediaLoadingCoordinator.h"
#import "PXPowerController.h"
#import "PXSectionedSelectionManager.h"

@interface PXImportController : PXObservable <PXImportAssetsDataSourceManagerDelegate, PXMutableImportController, PHImportServiceImporterDelegate, PHImportSourceObserver, PXChangeObserver>

 {
    NSArray *_lastSelectedModels;
}


@property (nonatomic) BOOL alreadyImportedItemsSelectable; // ivar: _alreadyImportedItemsSelectable
@property (retain, nonatomic) NSTimer *assetLoadingPowerAssertionTimer; // ivar: _assetLoadingPowerAssertionTimer
@property (readonly, nonatomic) PXImportAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXImportDeleteAction *deleteAction; // ivar: _deleteAction
@property (nonatomic) unsigned int deleteAssetsPowerAssertionIdentifier; // ivar: _deleteAssetsPowerAssertionIdentifier
@property (copy, nonatomic) id *deleteCompletionHandler; // ivar: _deleteCompletionHandler
@property (readonly, nonatomic, getter=isDeletingAssets) BOOL deletingAssets; // ivar: _deletingAssets
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasLoadedAssets; // ivar: _hasLoadedAssets
@property (nonatomic) BOOL hasLoadedInitialBatchOfAssets; // ivar: _hasLoadedInitialBatchOfAssets
@property (nonatomic) BOOL hasReceivedImportSourceAssetChanges; // ivar: _hasReceivedImportSourceAssetChanges
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned short imageFormat; // ivar: _imageFormat
@property (nonatomic) unsigned int importAssetsPowerAssertionIdentifier; // ivar: _importAssetsPowerAssertionIdentifier
@property (weak, nonatomic) NSObject<PXImportControllerTopLevelCompletionDelegate> *importCompletionDelegate; // ivar: _importCompletionDelegate
@property (copy, nonatomic) id *importCompletionHandler; // ivar: _importCompletionHandler
@property (retain, nonatomic) PHAssetCollection *importDestinationAlbum; // ivar: _importDestinationAlbum
@property (readonly, nonatomic) PXImportMediaProvider *importMediaProvider; // ivar: _importMediaProvider
@property (retain, nonatomic) NSProgress *importProgress; // ivar: _importProgress
@property (retain, nonatomic) PXImportSessionInfo *importSessionInfo; // ivar: _importSessionInfo
@property (readonly, nonatomic) PHImportSource *importSource; // ivar: _importSource
@property (readonly, nonatomic, getter=isImportingAssets) BOOL importingAssets; // ivar: _importingAssets
@property (retain, nonatomic) NSTimer *initialBatchOfAssetsTimer; // ivar: _initialBatchOfAssetsTimer
@property (nonatomic) BOOL isLoadingInitialBatchOfAssets; // ivar: _isLoadingInitialBatchOfAssets
@property (retain, nonatomic) PXSelectionSnapshot *lastSelectionSnapshot; // ivar: _lastSelectionSnapshot
@property (nonatomic) unsigned int loadAssetsPowerAssertionIdentifier; // ivar: _loadAssetsPowerAssertionIdentifier
@property (readonly, nonatomic, getter=isLoadingContent) BOOL loadingContent; // ivar: _loadingContent
@property (readonly, nonatomic, getter=isLoadingInitialBatchOfAssets) BOOL loadingInitialBatchOfAssets; // ivar: _loadingInitialBatchOfAssets
@property (readonly, nonatomic) PXImportMediaLoadingCoordinator *mediaLoadingCoordinator; // ivar: _mediaLoadingCoordinator
@property (readonly, nonatomic) NSMutableSet *otherDataSourceManagers; // ivar: _otherDataSourceManagers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *otherDataSourceManagersQueue; // ivar: _otherDataSourceManagersQueue
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PXPowerController *powerController; // ivar: _powerController
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, nonatomic) NSMutableDictionary *sharedViewModelsById; // ivar: _sharedViewModelsById
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedViewModelsUpdateQueue; // ivar: _sharedViewModelsUpdateQueue
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserRequiredToTrustHostOnSourceDevice) BOOL userRequiredToTrustHostOnSourceDevice; // ivar: _userRequiredToTrustHostOnSourceDevice


+(NSInteger)diskSpaceRequiredToImportItems:(id)arg0 ;
+(id)assetsForModels:(id)arg0 ;
+(id)importFilesAtURLs:(id)arg0 photoLibrary:(id)arg1 collection:(id)arg2 checkDuplicates:(BOOL)arg3 referenced:(BOOL)arg4 delegate:(id)arg5 completionHandler:(id)arg6 ;
+(id)importOperationQueue;
+(id)itemsConstrainedByAvailableDiskSpaceFromItems:(id)arg0 additionalBytesRequired:(*NSInteger)arg1 ;
+(void)favoriteAssetsFromImportResults:(id)arg0 photoLibrary:(id)arg1 ;
-(NSInteger)importAsset:(id)arg0 asDuplicateOfLibraryAsset:(id)arg1 applyToAll:(*BOOL)arg2 ;
-(id)createDataSourceManagerWithLogIdentifier:(id)arg0 ;
-(id)initWithImportSource:(id)arg0 photoLibrary:(id)arg1 imageFormat:(unsigned short)arg2 ;
-(id)mutableChangeObject;
-(id)selectedItems;
-(id)viewModelMapForImportAssetsDataSourceManager:(id)arg0 ;
-(void)capabilitiesDidChangeForImportSource:(id)arg0 ;
-(void)completedImportRecord:(id)arg0 ;
-(void)dealloc;
-(void)deleteItems:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)deselectItem:(id)arg0 ;
-(void)finishDeletingItems;
-(void)finishImportingWithResults:(id)arg0 ;
-(void)handleImportSourceModifiedAssets;
// -(void)importItems:(id)arg0 configuration:(id)arg1 completion:(unk)arg2  ;
-(void)importSource:(id)arg0 didAddAssets:(id)arg1 ;
-(void)importSource:(id)arg0 didDeleteAsset:(id)arg1 ;
-(void)importSource:(id)arg0 didRemoveAssets:(id)arg1 ;
-(void)importSource:(id)arg0 didUpdateAsset:(id)arg1 propertyMask:(unsigned short)arg2 ;
-(void)loadAssets;
-(void)nameDidChangeForImportSource:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performChanges:(id)arg0 ;
-(void)removeDataSourceManager:(id)arg0 ;
-(void)restartTimedAssetsLoadingPowerAssertion;
-(void)selectItem:(id)arg0 ;
-(void)sendActionProgress:(CGFloat)arg0 ;
-(void)setSelected:(BOOL)arg0 forItems:(id)arg1 ;
-(void)shutdown;
-(void)startInitialBatchOfAssetsTimerWithTimeout:(CGFloat)arg0 ;
-(void)startObservingImportProgress;
-(void)stopImport;
-(void)stopObservingImportProgress;
-(void)stopTimedAssetsLoadingPowerAssertion;
-(void)userHasTrustedHostForImportSource:(id)arg0 ;
-(void)userRequiredToTrustHostForImportSource:(id)arg0 ;


@end


#endif