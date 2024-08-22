// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIMAGEREQUESTER_H
#define PUIMAGEREQUESTER_H

@class NSHashTable, NSData, NSURL, UIImage, NSArray;
@protocol PUDisplayAsset;

#import <Foundation/Foundation.h>

#import "PUImageRequesterChange.h"
#import "PUMediaProvider.h"

@interface PUImageRequester : NSObject

@property (nonatomic, setter=_setChangeCount:) NSInteger _changeCount; // ivar: __changeCount
@property (retain, nonatomic, setter=_setCurrentChange:) PUImageRequesterChange *_currentChange; // ivar: __currentChange
@property (nonatomic, setter=_setCurrentFullsizeImageDataRequestID:) int _currentFullsizeImageDataRequestID; // ivar: __currentFullsizeImageDataRequestID
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID; // ivar: __currentImageRequestID
@property (nonatomic, setter=_setCurrentIncompleteRequest:) BOOL _hasCurrentIncompleteRequest; // ivar: __hasCurrentIncompleteRequest
@property (nonatomic, setter=_setHasRequestedFullsizeImageData:) BOOL _hasRequestedFullsizeImageData; // ivar: __hasRequestedFullsizeImageData
@property (nonatomic, setter=_setLastRequestedImageSize:) CGSize _lastRequestedImageSize; // ivar: __lastRequestedImageSize
@property (nonatomic, setter=_setNeedsUpdate:) BOOL _needsUpdate; // ivar: __needsUpdate
@property (retain, nonatomic, setter=_setObserver:) NSHashTable *_observers; // ivar: __observers
@property (nonatomic, setter=_setShouldUpdateImageOnCurrentRequestCompletion:) BOOL _shouldUpdateImageOnCurrentRequestCompletion; // ivar: __shouldUpdateImageOnCurrentRequestCompletion
@property (readonly, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (retain, nonatomic, setter=_setFullsizeImageData:) NSData *fullsizeImageData; // ivar: _fullsizeImageData
@property (retain, nonatomic, setter=_setFullsizeImageURL:) NSURL *fullsizeImageURL; // ivar: _fullsizeImageURL
@property (retain, nonatomic, setter=_setGainMapImage:) *CGImage gainMapImage; // ivar: _gainMapImage
@property (nonatomic, setter=_setGainMapValue:) float gainMapValue; // ivar: _gainMapValue
@property (nonatomic) BOOL highPriorityRequest; // ivar: _highPriorityRequest
@property (retain, nonatomic, setter=_setImage:) UIImage *image; // ivar: _image
@property (nonatomic, setter=_setImageIsFullQuality:) BOOL imageIsFullQuality; // ivar: _imageIsFullQuality
@property (readonly, nonatomic) BOOL imageIsHigherQuality; // ivar: _imageIsHigherQuality
@property (nonatomic, setter=_setImageIsPlaceholder:) BOOL imageIsPlaceholder; // ivar: _imageIsPlaceholder
@property (nonatomic) BOOL includeGainMap; // ivar: _includeGainMap
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (retain, nonatomic) NSArray *requestFullSizeImageDataUTTypes; // ivar: _requestFullSizeImageDataUTTypes
@property (readonly, nonatomic) BOOL requiresFullQualityImage; // ivar: _requiresFullQualityImage
@property (nonatomic) BOOL shouldRequestPenultimateVersion; // ivar: _shouldRequestPenultimateVersion
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode


-(id)imageByAddingWallpaperCropRectDiagnosticsForAsset:(id)arg0 sourceImage:(id)arg1 ;
-(id)init;
-(id)initWithMediaProvider:(id)arg0 asset:(id)arg1 requiresFullQualityImage:(BOOL)arg2 ;
-(void)_assertInsideChangesBlock;
-(void)_didChange;
-(void)_handleResultOfFullsizeImageDataRequestWithID:(int)arg0 imageData:(id)arg1 imageURL:(id)arg2 dataUTI:(id)arg3 orientation:(NSInteger)arg4 info:(id)arg5 ;
-(void)_handleResultOfImageRequestWithID:(int)arg0 image:(id)arg1 info:(id)arg2 ;
-(void)_invalidateImageRequest;
-(void)_publishChange:(id)arg0 ;
-(void)_update;
-(void)_willChange;
-(void)cancelAllImageRequests;
-(void)dealloc;
-(void)handlePreloadedImage:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateIfNeeded;


@end


#endif