// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETEXPLORERREVIEWSCREENVIEWCONTROLLER_H
#define PUASSETEXPLORERREVIEWSCREENVIEWCONTROLLER_H

@class UIViewController, UIAlertController, NSMutableDictionary, NSString, NSSet, NSIndexPath, NSNumber;
@protocol PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider, PXChangeObserver, PUAssetExplorerReviewScreenViewControllerDelegate;


#import "PUAssetExplorerReviewScreenActionManager.h"
#import "PUBrowsingSession.h"
#import "PUAssetsDataSourceManager.h"
#import "PUMediaProvider.h"
#import "PUActivityProgressController.h"
#import "PUAssetExplorerReviewScreenAssetsDataSourceManager.h"
#import "PUJoiningMediaProvider.h"
#import "PUReviewScreenSpec.h"
#import "PUPhotoPickerResizeTaskDescriptorViewModel.h"
#import "PUReviewScreenBarsModel.h"

@interface PUAssetExplorerReviewScreenViewController : UIViewController <PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider, PXChangeObserver>

 {
    ? _delegateFlags;
}


@property (readonly, nonatomic) PUAssetExplorerReviewScreenActionManager *_actionManager; // ivar: __actionManager
@property (readonly, nonatomic) PUBrowsingSession *_browsingSession; // ivar: __browsingSession
@property (readonly, nonatomic) PUAssetsDataSourceManager *_clientDataSourceManager; // ivar: __clientDataSourceManager
@property (readonly, nonatomic) PUMediaProvider *_clientMediaProvider; // ivar: __clientMediaProvider
@property (retain, nonatomic, setter=_setFailedReviewAssetRequestAlertController:) UIAlertController *_failedReviewAssetRequestAlertController; // ivar: __failedReviewAssetRequestAlertController
@property (readonly, nonatomic) BOOL _lowMemoryMode; // ivar: __lowMemoryMode
@property (readonly, nonatomic) NSUInteger _options; // ivar: __options
@property (retain, nonatomic, setter=_setRequestProgressController:) PUActivityProgressController *_requestProgressController; // ivar: __requestProgressController
@property (readonly, nonatomic) NSObject<PUReviewAssetProvider> *_reviewAssetProvider; // ivar: __reviewAssetProvider
@property (readonly, nonatomic) NSMutableDictionary *_reviewAssetRequestsByUUID; // ivar: __reviewAssetRequestsByUUID
@property (readonly, nonatomic) PUAssetExplorerReviewScreenAssetsDataSourceManager *_reviewDataSourceManager; // ivar: __reviewDataSourceManager
@property (readonly, nonatomic) PUJoiningMediaProvider *_reviewMediaProvider; // ivar: __reviewMediaProvider
@property (readonly, nonatomic) PUReviewScreenSpec *_spec; // ivar: __spec
@property (readonly, nonatomic) NSMutableDictionary *_substituteAssetsByUUID; // ivar: __substituteAssetsByUUID
@property (readonly, nonatomic) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUAssetExplorerReviewScreenViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *initialDisabledLivePhotoAssetUUIDs; // ivar: _initialDisabledLivePhotoAssetUUIDs
@property (readonly, copy, nonatomic) NSIndexPath *initialIndexPath; // ivar: _initialIndexPath
@property (readonly, copy, nonatomic) NSSet *initialSelectedAssetUUIDs; // ivar: _initialSelectedAssetUUIDs
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // ivar: _resizeTaskDescriptorViewModel
@property (readonly, nonatomic) PUReviewScreenBarsModel *reviewBarsModel; // ivar: _reviewBarsModel
@property (readonly, nonatomic) NSNumber *selectionCountLimit; // ivar: _selectionCountLimit
@property (readonly, nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (readonly) Class superclass;


-(BOOL)assetExplorerReviewScreenActionManager:(id)arg0 canPerformActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)assetExplorerReviewScreenActionManager:(id)arg0 shouldEnableActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)_createBrowsingSessionIfNecessary;
-(id)_createProgressControllerForRemainingRequests:(id)arg0 ;
-(id)_createReviewAssetRequestForAsset:(id)arg0 ;
-(id)_fileSizeMenuForSelectedUUIDs:(id)arg0 ;
-(id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
-(id)_remainingReviewAssetRequests;
-(id)_reviewAssetRequestForAssetUUID:(id)arg0 ;
-(id)_substituteAssetForUUID:(id)arg0 ;
-(id)_titleForSelectedAssetUUIDs:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 reviewAssetProvider:(id)arg2 initialIndexPath:(id)arg3 initialSelectedAssetUUIDs:(id)arg4 initialDisabledLivePhotoAssetUUIDs:(id)arg5 selectionCountLimit:(id)arg6 sourceType:(NSUInteger)arg7 lowMemoryMode:(BOOL)arg8 options:(NSUInteger)arg9 ;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 reviewAssetProvider:(id)arg2 initialIndexPath:(id)arg3 initialSelectedAssetUUIDs:(id)arg4 initialDisabledLivePhotoAssetUUIDs:(id)arg5 selectionCountLimit:(id)arg6 sourceType:(NSUInteger)arg7 lowMemoryMode:(BOOL)arg8 reviewBarsModel:(id)arg9 resizeTaskDescriptorViewModel:(id)arg10 options:(NSUInteger)arg11 ;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 reviewAssetProvider:(id)arg2 initialIndexPath:(id)arg3 initialSelectedAssetUUIDs:(id)arg4 initialDisabledLivePhotoAssetUUIDs:(id)arg5 sourceType:(NSUInteger)arg6 ;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 reviewAssetProvider:(id)arg2 initialIndexPath:(id)arg3 initialSelectedAssetUUIDs:(id)arg4 initialDisabledLivePhotoAssetUUIDs:(id)arg5 sourceType:(NSUInteger)arg6 reviewBarsModel:(id)arg7 options:(NSUInteger)arg8 ;
-(id)reviewAssetProviderRequestForDisplayAsset:(id)arg0 ;
-(id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)arg0 ;
-(void)_cancelReviewAssetRequestForAssetUUID:(id)arg0 ;
-(void)_cancelReviewAssetRequests;
-(void)_deleteAllLinkedFiles;
-(void)_handleCompletionAction:(NSUInteger)arg0 ;
-(void)_handleFailedReviewAssetRequestAlertControllerDismissal;
-(void)_handleProgressControllerCanceled:(id)arg0 ;
-(void)_handleReviewAssetRequest:(id)arg0 completedWithSuccess:(BOOL)arg1 canceled:(BOOL)arg2 error:(id)arg3 reviewAsset:(id)arg4 ;
-(void)_handleSelectionChanged;
-(void)_performCancelAction;
-(void)_performCompletionAction:(NSUInteger)arg0 ;
-(void)_performCompletionActionSteps:(NSUInteger)arg0 ;
-(void)_performRetakeAction;
// -(void)_presentConfidentialityAlertWithConfirmAction:(id)arg0 abortAction:(unk)arg1  ;
-(void)_requestReviewAssetForAsset:(id)arg0 ;
-(void)_setSubstituteAsset:(id)arg0 ;
-(void)_showFailedReviewAssetRequestAlert;
-(void)_tearDownProgressController;
-(void)_updateForCompletedReviewAssetRequest:(id)arg0 ;
-(void)_updateWithSubstituteAsset:(id)arg0 shouldSelect:(BOOL)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg0 didPressFunEffectsForAsset:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg0 didPressSelectForAsset:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg0 didToggleLivePhoto:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg0 ;
-(void)assetExplorerReviewScreenActionManagerDidPressDeselectAll:(id)arg0 ;
-(void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg0 ;
-(void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg0 ;
-(void)assetExplorerReviewScreenActionManagerDidPressSelectAll:(id)arg0 ;
-(void)assetExplorerReviewScreenActionManagerDidPressSend:(id)arg0 ;
-(void)funEffectsViewController:(id)arg0 didSaveAsset:(id)arg1 withCompletion:(NSUInteger)arg2 ;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoEditController:(id)arg0 didFinishEditingSessionForAsset:(id)arg1 completed:(BOOL)arg2 ;
-(void)photoMarkupController:(id)arg0 didFinishWithSavedAsset:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif