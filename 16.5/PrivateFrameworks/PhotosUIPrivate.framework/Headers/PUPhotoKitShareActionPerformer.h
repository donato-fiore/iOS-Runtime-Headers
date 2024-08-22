// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOKITSHAREACTIONPERFORMER_H
#define PUPHOTOKITSHAREACTIONPERFORMER_H

@class UIViewController;


#import "PUPhotoKitActionPerformer.h"
#import "PUActivitySharingController.h"

@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) PUActivitySharingController *activitySharingController; // ivar: _activitySharingController
@property (retain, nonatomic) UIViewController *preheatedSharingViewController; // ivar: _preheatedSharingViewController


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg0 inDataSource:(id)arg1 ;
-(id)_createSharingViewControllerFromCurrentSelection;
-(void)performUserInteractionTask;
-(void)preheatUserInteractionTask;


@end


#endif