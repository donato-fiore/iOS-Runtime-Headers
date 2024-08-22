// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMPMEDIAITEM_H
#define OKMPMEDIAITEM_H

@class MPMediaItem;


#import "OKMediaItem.h"

@interface OKMPMediaItem : OKMediaItem

@property (retain) MPMediaItem *mediaItem; // ivar: _mediaItem


+(BOOL)isRemote;
+(id)scheme;
+(id)urlForMPAsset:(id)arg0 ;
+(id)urlForMediaObject:(id)arg0 ;
-(BOOL)wantsDiskCachedMetadata;
-(id)avAssetWithCompletionHandler:(id)arg0 ;
-(id)createMetadataWithCompletionHandler:(id)arg0 ;
-(id)createThumbnailImageForResolution:(NSUInteger)arg0 withMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(id)importMediaToDirectoryURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithMPMediaItem:(id)arg0 ;
-(id)mediaObject;
-(id)resourceURLWithCompletionHandler:(id)arg0 ;
-(void)_resolveAssetIfNeeded;
-(void)dealloc;
-(void)setMediaObject:(id)arg0 ;


@end


#endif