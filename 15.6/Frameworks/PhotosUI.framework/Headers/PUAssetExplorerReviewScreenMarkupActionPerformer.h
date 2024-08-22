// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETEXPLORERREVIEWSCREENMARKUPACTIONPERFORMER_H
#define PUASSETEXPLORERREVIEWSCREENMARKUPACTIONPERFORMER_H

@protocol PUPhotoMarkupViewControllerObserver, PUReviewAssetProvider;


#import "PUAssetExplorerReviewScreenActionPerformer.h"

@interface PUAssetExplorerReviewScreenMarkupActionPerformer : PUAssetExplorerReviewScreenActionPerformer

@property (weak, nonatomic) NSObject<PUPhotoMarkupViewControllerObserver> *markupObserver; // ivar: _markupObserver
@property (retain, nonatomic) NSObject<PUReviewAssetProvider> *reviewAssetProvider; // ivar: _reviewAssetProvider


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)_presentMarkupViewControllerForReviewAsset:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif