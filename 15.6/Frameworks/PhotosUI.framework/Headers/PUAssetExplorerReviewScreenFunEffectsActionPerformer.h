// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETEXPLORERREVIEWSCREENFUNEFFECTSACTIONPERFORMER_H
#define PUASSETEXPLORERREVIEWSCREENFUNEFFECTSACTIONPERFORMER_H

@protocol PUFunEffectsViewControllerObserver, PUReviewAssetProvider;


#import "PUAssetExplorerReviewScreenActionPerformer.h"
#import "PUReviewScreenBarsModel.h"

@interface PUAssetExplorerReviewScreenFunEffectsActionPerformer : PUAssetExplorerReviewScreenActionPerformer

@property (weak, nonatomic) NSObject<PUFunEffectsViewControllerObserver> *funEffectsObserver; // ivar: _funEffectsObserver
@property (retain, nonatomic) NSObject<PUReviewAssetProvider> *reviewAssetProvider; // ivar: _reviewAssetProvider
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel; // ivar: _reviewBarsModel


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)_presentFunEffectsViewControllerForAsset:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif