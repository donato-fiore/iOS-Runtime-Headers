// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETEXPLORERREVIEWSCREENEDITACTIONPERFORMER_H
#define PUASSETEXPLORERREVIEWSCREENEDITACTIONPERFORMER_H

@protocol PUPhotoEditViewControllerSessionDelegate, PUReviewAssetProvider;


#import "PUAssetExplorerReviewScreenActionPerformer.h"

@interface PUAssetExplorerReviewScreenEditActionPerformer : PUAssetExplorerReviewScreenActionPerformer

@property (weak, nonatomic) NSObject<PUPhotoEditViewControllerSessionDelegate> *photoDelegate; // ivar: _photoDelegate
@property (retain, nonatomic) NSObject<PUReviewAssetProvider> *reviewAssetProvider; // ivar: _reviewAssetProvider


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)_presentEditViewControllerForReviewAsset:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif