// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIAPHOTOKITITEM_H
#define OKMEDIAPHOTOKITITEM_H

@class PHAsset;


#import "OKMediaItem.h"

@interface OKMediaPhotoKitItem : OKMediaItem

@property (retain) PHAsset *asset; // ivar: _asset


+(BOOL)isRemote;
+(id)cloudIdentifierForAsset:(id)arg0 ;
+(id)scheme;
+(id)urlForMediaObject:(id)arg0 ;
+(id)urlForPHAsset:(id)arg0 ;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(NSUInteger)arg0 ;
-(BOOL)wantsTemporaryDiskCache;
-(id)_fetchAssetsWithCloudIdentifiers:(id)arg0 options:(id)arg1 ;
-(id)avAssetWithCompletionHandler:(id)arg0 ;
-(id)createMetadataWithCompletionHandler:(id)arg0 ;
-(id)createThumbnailImageForResolution:(NSUInteger)arg0 withMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(id)importMediaToDirectoryURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithPHAsset:(id)arg0 ;
-(id)mediaObject;
-(id)resourceURLWithCompletionHandler:(id)arg0 ;
-(struct CGRect )_faceAreaRect;
-(void)_resolveAssetIfNeeded;
-(void)dealloc;
-(void)setMediaObject:(id)arg0 ;


@end


#endif