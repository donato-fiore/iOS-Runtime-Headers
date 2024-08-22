// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXIMAGEREQUESTER_H
#define PXIMAGEREQUESTER_H

@class NSString, UIImage;
@protocol PXMutableImageRequester, PXDisplayAsset, PXUIImageProvider;


#import "PXObservable.h"
#import "PXImageRequest.h"

@interface PXImageRequester : PXObservable <PXMutableImageRequester>

 {
    ? _needsUpdateFlags;
}


@property (retain, nonatomic, setter=_setCurrentImageSourceAsset:) NSObject<PXDisplayAsset> *_currentImageSourceAsset; // ivar: __currentImageSourceAsset
@property (retain, nonatomic, setter=_setCurrentRequest:) PXImageRequest *_currentRequest; // ivar: __currentRequest
@property (nonatomic, setter=_setTargetSize:) CGSize _targetSize; // ivar: __targetSize
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect desiredContentsRect; // ivar: _desiredContentsRect
@property (nonatomic, setter=_setHasFullQuality:) BOOL hasFullQuality; // ivar: _hasFullQuality
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setImage:) UIImage *image; // ivar: _image
@property (nonatomic, setter=_setIsInCloud:) BOOL isInCloud; // ivar: _isInCloud
@property (nonatomic, setter=_setLoadingProgress:) CGFloat loadingProgress; // ivar: _loadingProgress
@property (readonly, nonatomic) CGSize maximumRequestSize; // ivar: _maximumRequestSize
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic, setter=_setOpportunisticImage:) UIImage *opportunisticImage; // ivar: _opportunisticImage
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize viewportSize; // ivar: _viewportSize


+(id)defaultOptions;
-(BOOL)_needsUpdate;
-(id)init;
-(id)initWithMediaProvider:(id)arg0 asset:(id)arg1 ;
-(id)mutableChangeObject;
-(void)_cancelRequests;
-(void)_handleProgressForImageRequest:(id)arg0 progress:(CGFloat)arg1 ;
-(void)_handleResultOfImageRequest:(id)arg0 image:(id)arg1 info:(id)arg2 ;
-(void)_invalidateImageRequest;
-(void)_invalidateIsInCloud;
-(void)_invalidateTargetSize;
-(void)_updateIfNeeded;
-(void)_updateImageRequestIfNeeded;
-(void)_updateIsInCloudIfNeeded;
-(void)_updateTargetSizeIfNeeded;
-(void)dealloc;
-(void)didPerformChanges;
-(void)handlePreloadedImage:(id)arg0 ;
-(void)handlePreloadedImageRequester:(id)arg0 ;
-(void)performChanges:(id)arg0 ;


@end


#endif