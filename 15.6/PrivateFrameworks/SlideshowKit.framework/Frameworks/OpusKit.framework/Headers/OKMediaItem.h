// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKMEDIAITEM_H
#define OKMEDIAITEM_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "OKPresentation.h"

@interface OKMediaItem : NSObject {
    NSUInteger _uniqueURLHash;
}


@property (nonatomic) OKPresentation *presentation; // ivar: _presentation
@property (readonly, copy, nonatomic) NSURL *uniqueURL; // ivar: _uniqueURL
@property (readonly, copy, nonatomic) NSString *uniqueURLNormalisedString; // ivar: _uniqueURLNormalisedString


+(BOOL)isRemote;
+(id)scheme;
+(id)urlForMediaObject:(id)arg0 ;
-(BOOL)hasDiskCachedMetadata:(*id)arg0 ;
-(BOOL)hasDiskCachedThumbnailImage:(*id)arg0 forResolution:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(NSUInteger)arg0 ;
-(BOOL)wantsMemoryCachedMetadata;
-(BOOL)wantsMemoryCachedThumbnailForResolution:(NSUInteger)arg0 ;
-(BOOL)wantsTemporaryDiskCache;
-(NSUInteger)hash;
-(id)_resourcesDiskCacheManager;
-(id)avAsset;
-(id)avAssetWithCompletionHandler:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createMetadataWithCompletionHandler:(id)arg0 ;
-(id)createThumbnailImageForResolution:(NSUInteger)arg0 withMetadata:(id)arg1 completionHandler:(id)arg2 ;
// -(id)detectRegionsOfInterestWithCompletionHandler:(id)arg0 force:(unk)arg1 cache:(BOOL)arg2 colorSpace:(BOOL)arg3  ;
-(id)diskCachedMetadata;
-(id)diskCachedThumbnailImageForResolution:(NSUInteger)arg0 ;
-(id)importMediaToDirectoryURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithUniqueURL:(id)arg0 ;
-(id)mediaObject;
-(id)memoryCachedMetadata;
-(id)memoryCachedThumbnailImageForResolution:(NSUInteger)arg0 ;
-(id)metadata;
// -(id)metadataWithCompletionHandler:(id)arg0 force:(unk)arg1 cache:(BOOL)arg2  ;
// -(id)metadataWithProgress:(id)arg0 error:(unk)arg1  ;
// -(id)operationWithBlock:(id)arg0 completionHandlerWithObject:(unk)arg1  ;
-(id)prepareCaches:(BOOL)arg0 colorSpace:(id)arg1 withCompletionHandler:(id)arg2 ;
-(id)regionsOfInterestWithColorSpace:(id)arg0 ;
-(id)resourceURL;
-(id)resourceURLWithCompletionHandler:(id)arg0 ;
-(id)thumbnailImageForResolution:(NSUInteger)arg0 aspectRatio:(CGFloat)arg1 scale:(CGFloat)arg2 quality:(CGFloat)arg3 colorSpace:(id)arg4 ;
// -(id)thumbnailImageForResolution:(NSUInteger)arg0 aspectRatio:(CGFloat)arg1 scale:(CGFloat)arg2 quality:(CGFloat)arg3 colorSpace:(id)arg4 completionHandler:(id)arg5 force:(unk)arg6 cache:(BOOL)arg7  ;
-(id)uniquePath;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateDiskCachedMetadata;
-(void)invalidateDiskCachedThumbnailImages;
-(void)invalidateMemoryCachedMetadata;
-(void)invalidateMemoryCachedThumbnailImages;
-(void)setDiskCachedMetadata:(id)arg0 ;
-(void)setDiskCachedThumbnailImage:(id)arg0 forResolution:(NSUInteger)arg1 ;
-(void)setMediaObject:(id)arg0 ;
-(void)setMemoryCachedMetadata:(id)arg0 ;
-(void)setMemoryCachedThumbnailImage:(id)arg0 forResolution:(NSUInteger)arg1 ;


@end


#endif