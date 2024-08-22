// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PULIVEPHOTOVARIATIONEDITOPERATIONPERFORMER_H
#define PULIVEPHOTOVARIATIONEDITOPERATIONPERFORMER_H

@class PXAssetEditOperationPerformer, PHAsset, NSString;
@protocol PUPhotoEditResourceLoaderDelegate;


#import "PUPhotoEditResourceLoader.h"
#import "PUPhotoEditResourceLoadResult.h"
#import "PUPhotoKitPhotoEditMediaDestination.h"

@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PUPhotoEditResourceLoaderDelegate>

 {
    id *_completionHandler;
    BOOL _didSave;
    PUPhotoEditResourceLoader *_resourceLoader;
    PUPhotoEditResourceLoadResult *_loadResult;
    PUPhotoKitPhotoEditMediaDestination *_mediaDestination;
}


@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_calculateAnalysisResult;
-(void)_completeWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleAnalysisCalculatorResponse:(id)arg0 ;
-(void)_handleAnalysisResult:(id)arg0 ;
-(void)_handleDidFinishSavingEditsForAsset:(id)arg0 error:(id)arg1 ;
-(void)performEditOperationWithCompletionHandler:(id)arg0 ;
-(void)photoEditResourceLoadRequest:(id)arg0 didCompleteWithResult:(id)arg1 ;
-(void)photoEditResourceLoadRequest:(id)arg0 mediaLoadDidFailWithError:(id)arg1 ;


@end


#endif