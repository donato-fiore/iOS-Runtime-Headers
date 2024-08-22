// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIAIMPORTEDITEM_H
#define OKMEDIAIMPORTEDITEM_H



#import "OKMediaItem.h"

@interface OKMediaImportedItem : OKMediaItem



+(id)scheme;
+(id)urlForMediaObject:(id)arg0 ;
-(BOOL)hasDiskCachedMetadata:(*id)arg0 ;
-(BOOL)hasDiskCachedThumbnailImage:(*id)arg0 forResolution:(NSUInteger)arg1 ;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(NSUInteger)arg0 ;
-(BOOL)wantsMemoryCachedMetadata;
-(BOOL)wantsTemporaryDiskCache;
-(id)createMetadataWithCompletionHandler:(id)arg0 ;
-(id)createThumbnailImageForResolution:(NSUInteger)arg0 withMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(id)diskCachedMetadata;
-(id)diskCachedThumbnailImageForResolution:(NSUInteger)arg0 ;
-(id)importMediaToDirectoryURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithImportedResourceURL:(id)arg0 ;
-(id)mediaObject;
-(id)resourceURLWithCompletionHandler:(id)arg0 ;
-(void)invalidateDiskCachedThumbnailImages;
-(void)setDiskCachedThumbnailImage:(id)arg0 forResolution:(NSUInteger)arg1 ;
-(void)setMediaObject:(id)arg0 ;


@end


#endif