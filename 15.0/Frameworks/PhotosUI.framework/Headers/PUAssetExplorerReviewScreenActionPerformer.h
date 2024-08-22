// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUASSETEXPLORERREVIEWSCREENACTIONPERFORMER_H
#define PUASSETEXPLORERREVIEWSCREENACTIONPERFORMER_H



#import "PUAssetActionPerformer.h"
#import "PUActivityProgressController.h"

@interface PUAssetExplorerReviewScreenActionPerformer : PUAssetActionPerformer

@property (retain, nonatomic, setter=_setRequestProgressController:) PUActivityProgressController *_requestProgressController; // ivar: __requestProgressController
@property (copy, nonatomic) id *performUserInteractionTaskBlock; // ivar: _performUserInteractionTaskBlock


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(id)_setupProgressControllerForProgress:(id)arg0 ;
-(void)_handleProgressControllerCanceled:(id)arg0 ;
-(void)_handleReviewAssetRequestCompletedWithSuccess:(BOOL)arg0 canceled:(BOOL)arg1 error:(id)arg2 reviewAsset:(id)arg3 completionHandler:(id)arg4 ;
-(void)_showFailedReviewAssetRequestAlert;
-(void)executePerformUserInteractionTaskBlock;
-(void)performUserInteractionTask;
-(void)requestReviewAssetForDisplayAsset:(id)arg0 reviewAssetProvider:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif