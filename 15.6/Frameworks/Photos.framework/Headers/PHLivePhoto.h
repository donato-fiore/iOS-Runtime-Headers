// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHLIVEPHOTO_H
#define PHLIVEPHOTO_H

@class NSString, NSURL, NSNumber, AVAsset, AVVideoComposition;
@protocol NSItemProviderReading, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PHAsset.h"
#import "PHImageManager.h"
#import "PHSandboxExtensionWrapper.h"

@interface PHLivePhoto : NSObject <NSItemProviderReading, NSCopying, NSSecureCoding>

 {
    PHAsset *_asset;
    NSObject *_plImage;
}


@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier; // ivar: _assetLocalIdentifier
@property (readonly, copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (nonatomic) float audioVolume; // ivar: _audioVolume
@property (readonly, nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *imageFileLoader;
@property (weak, nonatomic) PHImageManager *imageManager; // ivar: _imageManager
@property (readonly, nonatomic) NSString *imageTypeIdentifier;
@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) PHSandboxExtensionWrapper *imageURLSandboxExtensionWrapper; // ivar: _imageURLSandboxExtensionWrapper
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) ? photoTime; // ivar: _photoTime
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (nonatomic) BOOL skipInstantiatingImageAndAVAsset; // ivar: _skipInstantiatingImageAndAVAsset
@property (readonly, nonatomic) NSNumber *srlCompensationValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize
@property (readonly) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset
@property (readonly, copy, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition
@property (readonly, copy, nonatomic) id *videoFileLoader;
@property (readonly, nonatomic) NSString *videoTypeIdentifier;
@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, nonatomic) PHSandboxExtensionWrapper *videoURLSandboxExtensionWrapper; // ivar: _videoURLSandboxExtensionWrapper


+(BOOL)_canCreateLivePhotoWithURLs:(id)arg0 outError:(*id)arg1 ;
+(BOOL)_canCreateLoopingLivePhotoWithURLs:(id)arg0 outError:(*id)arg1 ;
+(BOOL)_identifyResourceURLs:(id)arg0 outImageURL:(*id)arg1 outVideoURL:(*id)arg2 error:(*id)arg3 ;
+(BOOL)_validateFileURLs:(id)arg0 withValidationOptions:(NSUInteger)arg1 outError:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)livePhotoWithResourceFileURLs:(id)arg0 error:(*id)arg1 ;
+(id)livePhotoWithResourceFileURLs:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 skipInstantiatingImageAndAVAsset:(BOOL)arg3 error:(*id)arg4 ;
+(id)livePhotoWithResourceFileURLs:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 skipValidation:(BOOL)arg3 error:(*id)arg4 ;
+(id)livePhotoWithResourceFileURLs:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 skipValidation:(BOOL)arg3 isLooping:(BOOL)arg4 skipInstantiatingImageAndAVAsset:(BOOL)arg5 error:(*id)arg6 ;
+(id)loopingLivePhotoWithResourceFileURLs:(id)arg0 skipInstantiatingImageAndAVAsset:(BOOL)arg1 error:(*id)arg2 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(int)requestLivePhotoWithResourceFileURLs:(id)arg0 placeholderImage:(id)arg1 targetSize:(struct CGSize )arg2 contentMode:(NSInteger)arg3 resultHandler:(id)arg4 ;
+(struct ? )_photoTimeForLivePhotoWithImageURL:(id)arg0 videoURL:(id)arg1 ;
+(void)cancelLivePhotoRequestWithRequestID:(int)arg0 ;
-(BOOL)_synchronouslyLoadImageURL:(*id)arg0 videoURL:(*id)arg1 error:(*id)arg2 ;
-(BOOL)hasPhotoColorAdjustments;
-(id)_initWithImage:(struct CGImage *)arg0 uiOrientation:(NSInteger)arg1 videoAsset:(id)arg2 photoTime:(struct ? )arg3 asset:(id)arg4 assetUUID:(id)arg5 options:(NSUInteger)arg6 videoComposition:(id)arg7 ;
-(id)_initWithImageURL:(id)arg0 videoURL:(id)arg1 targetSize:(struct CGSize )arg2 contentMode:(NSInteger)arg3 ;
-(id)_initWithImageURL:(id)arg0 videoURL:(id)arg1 targetSize:(struct CGSize )arg2 contentMode:(NSInteger)arg3 skipInstantiatingImageAndAVAsset:(BOOL)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)image;
-(id)initWithBundleAtURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(struct CGImage *)arg0 uiOrientation:(NSInteger)arg1 videoAsset:(id)arg2 photoTime:(struct ? )arg3 asset:(id)arg4 ;
-(id)initWithImage:(struct CGImage *)arg0 uiOrientation:(NSInteger)arg1 videoAsset:(id)arg2 photoTime:(struct ? )arg3 asset:(id)arg4 options:(NSUInteger)arg5 ;
-(id)initWithImage:(struct CGImage *)arg0 uiOrientation:(NSInteger)arg1 videoAsset:(id)arg2 photoTime:(struct ? )arg3 asset:(id)arg4 options:(NSUInteger)arg5 videoComposition:(id)arg6 ;
-(id)initWithImage:(struct CGImage *)arg0 uiOrientation:(NSInteger)arg1 videoAsset:(id)arg2 photoTime:(struct ? )arg3 assetUUID:(id)arg4 options:(NSUInteger)arg5 videoComposition:(id)arg6 ;
-(id)videoComplement;
-(void)_ensureConstituentData;
-(void)_loadConstituentURLsWithNetworkAccessAllowed:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveToPhotoLibraryWithCompletionHandler:(id)arg0 ;


@end


#endif