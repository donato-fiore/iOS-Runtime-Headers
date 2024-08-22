// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PULIVEPHOTOVARIATIONEDITOPERATIONPERFORMER_H
#define PULIVEPHOTOVARIATIONEDITOPERATIONPERFORMER_H

@class PXAssetEditOperationPerformer, NSString, PHAsset;


#import "PUPhotoKitPhotoEditMediaDestination.h"

@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer {
    id *_completionHandler;
    BOOL _didSave;
    PUPhotoKitPhotoEditMediaDestination *_mediaDestination;
    NSString *_sourceEditOperationType;
}


@property (readonly, nonatomic) PHAsset *asset;


+(id)_sharedResourceManager;
-(void)_completeWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleDidFinishSavingEditsForAsset:(id)arg0 error:(id)arg1 ;
-(void)_handleLoadResult:(id)arg0 analysisResult:(id)arg1 editOperationType:(id)arg2 ;
-(void)_performEditOperation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_resourceLoadedWithResult:(id)arg0 editOperationType:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif