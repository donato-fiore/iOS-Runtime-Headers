// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMEDIAOBJECTIMAGEPROVIDER_H
#define CKMEDIAOBJECTIMAGEPROVIDER_H

@class PXUIMediaProvider, NSMutableDictionary, NSString, UIImage;
@protocol PXUIImageProvider;



@interface CKMediaObjectImageProvider : PXUIMediaProvider <PXUIImageProvider>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_requestDetailsByRequestID;
    NSMutableDictionary *_lock_mediaObjectsPendingTransferFinalizationByRequestID;
    NSMutableDictionary *_lock_activeRequestIDsByTransferGUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfOutstandingHandlers;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *testImage; // ivar: _testImage


-(BOOL)_lock_cancelImageRequest:(NSInteger)arg0 ;
-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)_imagePreviewForMediaObject:(id)arg0 isSynchronous:(BOOL)arg1 requestID:(NSInteger)arg2 ;
-(id)_lock_imagePreviewForMediaObject:(id)arg0 isSynchronous:(BOOL)arg1 requestID:(NSInteger)arg2 ;
-(id)init;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)_handleFileTransferDidChangeNotification:(id)arg0 ;
-(void)_handlePreviewDidChangeNotification:(id)arg0 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;


@end


#endif