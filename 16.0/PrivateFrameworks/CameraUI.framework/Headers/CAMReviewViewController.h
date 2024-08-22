// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMREVIEWVIEWCONTROLLER_H
#define CAMREVIEWVIEWCONTROLLER_H

@class UIViewController, NSArray, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, PUAssetExplorerReviewScreenViewController, PUReviewDataSource, NSString;
@protocol PUAssetExplorerReviewScreenViewControllerDelegate, CAMCameraReviewViewController, CAMCameraReviewDelegate;



@interface CAMReviewViewController : UIViewController <PUAssetExplorerReviewScreenViewControllerDelegate, CAMCameraReviewViewController>



@property (readonly, nonatomic) NSArray *_initialAssets; // ivar: __initialAssets
@property (readonly, nonatomic) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager; // ivar: __internalReviewDataSourceManager
@property (readonly, nonatomic) PUReviewAssetsMediaProvider *_internalReviewMediaProvider; // ivar: __internalReviewMediaProvider
@property (readonly, nonatomic) PUAssetExplorerReviewScreenViewController *_internalReviewViewController; // ivar: __internalReviewViewController
@property (readonly, nonatomic) PUReviewDataSource *_reviewDataSource; // ivar: __reviewDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CAMCameraReviewDelegate> *reviewDelegate; // ivar: _reviewDelegate
@property (readonly) Class superclass;


-(BOOL)assetExplorerReviewScreenViewController:(id)arg0 canPerformActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg0 shouldEnableActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)initWithAssets:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)assetExplorerReviewScreenViewController:(id)arg0 didPerformCompletionAction:(NSUInteger)arg1 withSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg0 ;
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg0 ;
-(void)loadView;


@end


#endif