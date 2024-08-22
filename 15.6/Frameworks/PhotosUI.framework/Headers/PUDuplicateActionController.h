// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUDUPLICATEACTIONCONTROLLER_H
#define PUDUPLICATEACTIONCONTROLLER_H

@class NSMutableArray, NSDictionary, NSProgress;

#import <Foundation/Foundation.h>

#import "PUActivityProgressController.h"

@interface PUDuplicateActionController : NSObject {
    NSInteger _itemCount;
    NSMutableArray *_resourceLocalAvailabilityRequests;
}


@property (readonly, copy, nonatomic) NSDictionary *_assetsByAssetCollection; // ivar: __assetsByAssetCollection
@property (readonly, nonatomic) BOOL _canDuplicate; // ivar: __canDuplicate
@property (readonly, nonatomic) BOOL _canExtractStill; // ivar: __canExtractStill
@property (nonatomic, setter=_setDidCheckDuplicateCapabilities:) BOOL _didCheckDuplicateCapabilities; // ivar: __didCheckDuplicateCapabilities
@property (retain, nonatomic, setter=_setDownloadingProgress:) NSProgress *_downloadingProgress; // ivar: __downloadingProgress
@property (retain, nonatomic, setter=_setDuplicatingProgress:) NSProgress *_duplicatingProgress; // ivar: __duplicatingProgress
@property (copy, nonatomic, setter=_setOnFinishDownloadCompletionHandler:) id *_onFinishDownloadCompletionHandler; // ivar: __onFinishDownloadCompletionHandler
@property (retain, nonatomic, setter=_setOverallProgress:) NSProgress *_overallProgress; // ivar: __overallProgress
@property (retain, nonatomic, setter=_setProgressController:) PUActivityProgressController *_progressController; // ivar: __progressController
@property (readonly, nonatomic) BOOL shouldUseAlertController;


+(BOOL)canPerformDuplicateActionOnAssets:(id)arg0 orAssetsByAssetCollection:(id)arg1 ;
+(void)_presentDuplicationWasInterruptedWithItemCount:(NSInteger)arg0 hasPhotos:(BOOL)arg1 hasVideos:(BOOL)arg2 ;
-(BOOL)_validateOriginalAssetResourcesForDuplicateAction:(NSInteger)arg0 ;
-(id)alertControllerForDuplicateActionWithPreview:(BOOL)arg0 newStillImageTime:(struct ? )arg1 userConfirmationHandler:(id)arg2 ;
-(id)init;
-(id)initWithAssetsByAssetCollection:(id)arg0 ;
-(void)_checkDuplicateCapabilities;
-(void)_checkHasPhotos:(*BOOL)arg0 hasVideos:(*BOOL)arg1 ;
-(void)_downloadResourcesForDuplicateAction:(NSInteger)arg0 newStillImageTime:(struct ? )arg1 completionHandler:(id)arg2 ;
-(void)_finishedDownloadWithSuccess:(BOOL)arg0 ;
-(void)_finishedDuplicationWithSuccess:(BOOL)arg0 ;
-(void)_handleOperationCompletionWithError:(id)arg0 ;
-(void)_handlePhotoLibraryDuplicationCompletionWithSuccess:(BOOL)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleProgressUserCancellation;
-(void)_performPhotoLibraryChangeForAction:(NSInteger)arg0 newStillImageTime:(struct ? )arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performDuplicateAction:(NSInteger)arg0 newStillImageTime:(struct ? )arg1 completionHandler:(id)arg2 ;


@end


#endif