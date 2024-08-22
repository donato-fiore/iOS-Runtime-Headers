// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOPICKEREXTENSIONCONTEXT_H
#define PUPHOTOPICKEREXTENSIONCONTEXT_H

@class NSOperationQueue, NSString;
@protocol PUPhotoPickerRemoteService, PUPhotoPickerHostService, OS_dispatch_queue;


#import "PUPhotoPickerAbstractExtensionContext.h"

@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerRemoteService, PUPhotoPickerHostService>

 {
    NSObject<OS_dispatch_queue> *_multipleMediaIsolationQueue;
    NSOperationQueue *_multipleMediaConversionConcurrentQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *multipleMediaConversionConcurrentQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *multipleMediaIsolationQueue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *temporaryDirectoryInHost; // ivar: _temporaryDirectoryInHost


+(void)configureImageManagerLimit;
-(id)_createSandboxTokenForPath:(id)arg0 ;
-(id)_createSandboxTokenForURL:(id)arg0 ;
-(id)_host;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)arg0 appendTo:(id)arg1 completion:(id)arg2 ;
-(void)_handleLivePhotoImageUrlFetch:(id)arg0 appendTo:(id)arg1 completion:(id)arg2 ;
-(void)_handleLivePhotoVideoUrlFetch:(id)arg0 appendTo:(id)arg1 completion:(id)arg2 ;
-(void)_handleMutlipleMediaCompletion:(id)arg0 ;
-(void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)arg0 completion:(id)arg1 ;
-(void)_saveImageURLForLivePhoto:(id)arg0 fileURL:(id)arg1 appendTo:(id)arg2 completion:(id)arg3 ;
-(void)_saveVideoURLForLivePhoto:(id)arg0 fileURL:(id)arg1 appendTo:(id)arg2 completion:(id)arg3 ;
-(void)cancelPhotoPicker;
-(void)didDisplayPhotoPickerPreview;
-(void)didDisplayPhotoPickerSourceType:(id)arg0 ;
-(void)didSelectMediaWithInfoDictionary:(id)arg0 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg0 ;
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg0 ;
-(void)initiatePhotoPickerSelection;
-(void)invalidatePhotoPickerHostServices;
-(void)invalidatePhotoPickerRemoteServices;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)performTraitCollectionUpdateUsingData:(id)arg0 completion:(id)arg1 ;
-(void)requestedViewControllerOptionsWithCompletionHandler:(id)arg0 ;


@end


#endif