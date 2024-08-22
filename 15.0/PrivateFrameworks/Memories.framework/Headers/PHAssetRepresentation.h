// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETREPRESENTATION_H
#define PHASSETREPRESENTATION_H

@class PHAsset, NSString, NSDate, PHAssetResource;

#import <Foundation/Foundation.h>


@interface PHAssetRepresentation : NSObject {
    BOOL _isAvailable;
}


@property (nonatomic, getter=isAdjustedVersion) BOOL adjustedVersion; // ivar: _adjustedVersion
@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSString *derivativeFilePath;
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) NSDate *downloadRequestDate; // ivar: _downloadRequestDate
@property (nonatomic) NSUInteger downloadState; // ivar: _downloadState
@property (nonatomic) NSUInteger lastKnownPersistenceState; // ivar: _lastKnownPersistenceState
@property (retain, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly) PHAssetResource *mostUsefulResource; // ivar: _mostUsefulResource


+(id)_cachedAssetRepresentationWithIdentifier:(id)arg0 adjustedVersion:(BOOL)arg1 ;
+(id)assetRepresentationWithAsset:(id)arg0 adjustedVersion:(BOOL)arg1 ;
+(id)assetRepresentationWithAssetsLibraryPersistentURL:(id)arg0 ;
+(id)assetRepresentationWithIdentifierURL:(id)arg0 ;
+(id)assetRepresentationWithPhotosIdentifierURL:(id)arg0 ;
+(void)_cacheAssetRepresentation:(id)arg0 ;
+(void)clearStaticCache;
+(void)createStaticCache;
+(void)initialize;
-(BOOL)isDerivativeFilePathPointingToJPEGorRAWorHEIFFile;
-(BOOL)isDownloading;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHEIF;
-(NSUInteger)estimatedFileSize;
-(NSUInteger)hash;
-(id)avAsset;
-(id)description;
-(id)handlePlayerItemRequestCompletionWithResult:(id)arg0 info:(id)arg1 videoRequestOptions:(id)arg2 ;
-(id)handleRequestCompletionWithResult:(id)arg0 info:(id)arg1 videoRequestOptions:(id)arg2 ;
-(id)handleVideoRequestCompletionWithResult:(id)arg0 info:(id)arg1 videoRequestOptions:(id)arg2 ;
-(id)identifierURL;
-(id)image;
-(id)imageData;
-(id)imageWithSize:(struct CGSize )arg0 ;
-(id)imageWithSize:(struct CGSize )arg0 imageManager:(id)arg1 ;
-(id)initWithAsset:(id)arg0 adjustedVersion:(BOOL)arg1 ;
-(id)initWithAsset:(id)arg0 localIdentifier:(id)arg1 adjustedVersion:(BOOL)arg2 modificationDate:(id)arg3 mediaType:(NSInteger)arg4 ;
-(id)initWithLocalIdentifier:(id)arg0 adjustedVersion:(BOOL)arg1 modificationDate:(id)arg2 mediaType:(NSInteger)arg3 ;
-(id)privateFileURL;
-(id)privateFileURLForResource:(id)arg0 ;
-(id)privateVideoFileURL;
-(id)thumbnailImage;
// -(int)requestExportSessionWithResultHandler:(id)arg0 progressHandler:(unk)arg1  ;
-(int)requestImageDataWithResultHandler:(id)arg0 ;
// -(int)requestImageDataWithResultHandler:(id)arg0 progressHandler:(unk)arg1 synchronous:(id)arg2  ;
// -(int)requestImageDataWithResultHandler:(id)arg0 synchronous:(unk)arg1  ;
-(int)requestImageWithResultHandler:(id)arg0 ;
// -(int)requestImageWithResultHandler:(id)arg0 progressHandler:(unk)arg1  ;
// -(int)requestImageWithResultHandler:(id)arg0 progressHandler:(unk)arg1 imageManager:(id)arg2  ;
// -(int)requestMediaWithResultHandler:(id)arg0 progressHandler:(unk)arg1  ;
// -(int)requestPlayerItemWithResultHandler:(id)arg0 progressHandler:(unk)arg1 networkAccessAllowed:(id)arg2  ;
// -(int)requestThumbnailWithResultHandler:(id)arg0 synchronous:(unk)arg1 networkAccessAllowed:(BOOL)arg2  ;
-(int)requestVideoWithResultHandler:(id)arg0 ;
// -(int)requestVideoWithResultHandler:(id)arg0 progressHandler:(unk)arg1  ;
// -(int)requestVideoWithResultHandler:(id)arg0 progressHandler:(unk)arg1 imageManager:(id)arg2  ;
-(struct CGImage *)cgimageWithSize:(struct CGSize )arg0 ;
-(struct CGImage *)cgimageWithSize:(struct CGSize )arg0 imageManager:(id)arg1 ;
-(struct CGSize )imageSize;
-(void)dealloc;
-(void)queryLastKnownPersistenceState;


@end


#endif