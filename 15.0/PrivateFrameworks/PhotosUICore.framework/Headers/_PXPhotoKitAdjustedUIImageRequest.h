// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXPHOTOKITADJUSTEDUIIMAGEREQUEST_H
#define _PXPHOTOKITADJUSTEDUIIMAGEREQUEST_H

@class PXPhotoKitAdjustedUIMediaRequest, PLPhotoEditRenderer, NSString, PHImageRequestOptions;



@interface _PXPhotoKitAdjustedUIImageRequest : PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
    BOOL _hasReturnedAdjustedResult;
    int _currentVersionRequestID;
    NSString *_uniqueContentIdentifier;
}


@property (readonly, nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, nonatomic) PHImageRequestOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


+(id)memoryCache;
-(BOOL)_deliverCachedImageIfPossible;
-(BOOL)_deliverCachedUnscaledImageIfPossible;
-(id)_cachedImageURL;
-(id)_existingCachedImageURL;
-(id)_unscaledCachedImageURL;
-(id)initWithRenderQueue:(id)arg0 asset:(id)arg1 contentMode:(NSInteger)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(id)arg5 ;
-(id)memoryCacheKey;
-(id)memoryCachedImage;
-(void)_handleCurrentVersionImageResult:(id)arg0 info:(id)arg1 ;
-(void)_handleImageWasCached;
-(void)_handleRenderedImage:(id)arg0 error:(id)arg1 ;
-(void)_handleRenderingFinishedWithData:(id)arg0 destinationURL:(id)arg1 targetSize:(struct CGSize )arg2 ;
-(void)_renderIfNeeded;
-(void)cacheImageInMemory:(id)arg0 ;
-(void)cancel;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)start;


@end


#endif