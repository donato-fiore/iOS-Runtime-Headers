// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETPICKERCOORDINATOR_H
#define PUASSETPICKERCOORDINATOR_H

@class NSString, NSMutableDictionary, PXLoadingStatusManager, PHAsset, UINavigationController, PXSelectionCoordinator;
@protocol PUAssetPickerContainerControllerActionHandler, PUAssetExplorerReviewScreenViewControllerDelegate, PUPhotosGridDownloadUpdateHandler, PXSelectionCoordinatorDelegate, UINavigationControllerDelegate, PUPhotoPickerResizeTaskDescriptorViewModelDelegate, PUUIImageViewControllerFileResizingDelegate, PUPhotoPickerServicesConsumer, PUAssetPickerCoordinatorActionHandler, PUPhotoPicker;

#import <Foundation/Foundation.h>

#import "PUPickerConfiguration.h"
#import "PUPhotosGridDownloadHelper.h"
#import "PUAssetPickerActivityProgressController.h"
#import "PUPhotoPickerResizeTaskDescriptorViewModel.h"
#import "PUAssetPickerContainerController.h"

@interface PUAssetPickerCoordinator : NSObject <PUAssetPickerContainerControllerActionHandler, PUAssetExplorerReviewScreenViewControllerDelegate, PUPhotosGridDownloadUpdateHandler, PXSelectionCoordinatorDelegate, UINavigationControllerDelegate, PUPhotoPickerResizeTaskDescriptorViewModelDelegate, PUUIImageViewControllerFileResizingDelegate, PUPhotoPickerServicesConsumer>



@property (readonly, nonatomic) PUPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, weak, nonatomic) NSObject<PUAssetPickerCoordinatorActionHandler> *coordinatorActionHandler; // ivar: _coordinatorActionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PUPhotosGridDownloadHelper *downloadHelper; // ivar: _downloadHelper
@property (readonly, nonatomic) NSMutableDictionary *downloadProgresses; // ivar: _downloadProgresses
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (retain, nonatomic) PHAsset *mostRecentTappedAsset; // ivar: _mostRecentTappedAsset
@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (weak, nonatomic) NSObject<PUPhotoPicker> *photoPicker; // ivar: _photoPicker
@property (readonly, nonatomic) PUAssetPickerActivityProgressController *progressController; // ivar: _progressController
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // ivar: _resizeTaskDescriptorViewModel
@property (readonly, nonatomic) PUAssetPickerContainerController *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator; // ivar: _selectionCoordinator
@property (readonly) Class superclass;


+(BOOL)_assetCanPlay:(id)arg0 ;
+(BOOL)_editingEnabled:(id)arg0 ;
+(BOOL)_shouldTreatAssetAsLivePhoto:(id)arg0 photoPicker:(id)arg1 configuration:(id)arg2 ;
+(BOOL)_skipSelectionConfirmation:(id)arg0 ;
+(BOOL)_viewImageBeforeSelectingEnabled:(id)arg0 ;
+(BOOL)pu_legacy_shouldDownloadVideoComplement:(id)arg0 configuration:(id)arg1 ;
+(id)_extraArgumentsForResizeTaskDescriptor:(id)arg0 ;
+(void)_logPhotosPickerPresentedForClient:(id)arg0 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg0 canPerformActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg0 shouldEnableActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)_createFetchResultUsingSelectedObjectIDs;
-(id)_fileSizeActionsForAssets:(id)arg0 ;
-(id)assetExplorerReviewScreenViewController:(id)arg0 fileSizeMenuForSelectedUUIDs:(id)arg1 ;
-(id)assetsForResizing;
-(id)beginShowingProgressForAsset:(id)arg0 inCollection:(id)arg1 ;
-(id)imageViewControllerFileSizeMenuActions:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 navigationControllerClass:(Class)arg1 coordinatorActionHandler:(id)arg2 loadingStatusManager:(id)arg3 ;
-(id)initWithPHConfiguration:(id)arg0 coordinatorActionHandler:(id)arg1 loadingStatusManager:(id)arg2 ;
-(id)initWithPUConfiguration:(id)arg0 coordinatorActionHandler:(id)arg1 loadingStatusManager:(id)arg2 ;
-(id)initWithPhotoPicker:(id)arg0 mediaTypes:(id)arg1 ;
-(void)_completeMultipleSelection:(id)arg0 ;
-(void)_completeSingleSelection:(id)arg0 showConfirmation:(BOOL)arg1 ;
-(void)_logPhotosAccessWithNonEmptyUserSelection;
-(void)activateSearchField;
-(void)assetExplorerReviewScreenViewController:(id)arg0 didPerformCompletionAction:(NSUInteger)arg1 withSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg0 ;
-(void)cancelProgressController;
-(void)containerController:(id)arg0 didTapAddButton:(id)arg1 ;
-(void)containerController:(id)arg0 didTapAsset:(id)arg1 ;
-(void)containerController:(id)arg0 didTapCancelButton:(id)arg1 ;
-(void)containerController:(id)arg0 didTapClearButton:(id)arg1 ;
-(void)containerController:(id)arg0 didTapSearchBar:(id)arg1 canBeginEditing:(BOOL)arg2 ;
-(void)containerController:(id)arg0 didTapSelectedItemsButton:(id)arg1 ;
-(void)containerControllerDidAppear:(id)arg0 ;
-(void)deactivateSearchField;
-(void)deselectAssetsWithIdentifiers:(id)arg0 ;
-(void)endShowingProgressWithIdentifier:(id)arg0 succeeded:(BOOL)arg1 canceled:(BOOL)arg2 error:(id)arg3 ;
-(void)imageViewControllerDidConfirmSelection:(id)arg0 ;
-(void)moveAssetWithIdentifier:(id)arg0 afterIdentifier:(id)arg1 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentAlertController:(id)arg0 ;
-(void)presentProgressControllerFromViewController:(id)arg0 progress:(id)arg1 ;
-(void)pu_legacy_cancelPicker;
-(void)pu_legacy_didDisplayPicker;
-(void)pu_legacy_selectMultipleAssets:(id)arg0 ;
-(void)pu_legacy_selectSingleAsset:(id)arg0 ;
-(void)pu_legacy_selectSingleAssetWithFileResizing:(id)arg0 ;
-(void)selectionCoordinator:(id)arg0 didUpdateSelectedObjectsWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 ;
-(void)selectionCoordinator:(id)arg0 willUpdateSelectedObjectsForSnapshot:(id)arg1 withRemovedIndexes:(id)arg2 insertedIndexes:(id)arg3 ;
-(void)updateProgressControllerMessage;
-(void)updateProgressWithIdentifier:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)updateUsesEmbeddedMessagesLayout:(BOOL)arg0 ;


@end


#endif