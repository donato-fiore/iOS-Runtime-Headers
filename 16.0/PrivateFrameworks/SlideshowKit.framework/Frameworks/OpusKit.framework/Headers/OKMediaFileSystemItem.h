// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKMEDIAFILESYSTEMITEM_H
#define OKMEDIAFILESYSTEMITEM_H



#import "OKMediaItem.h"

@interface OKMediaFileSystemItem : OKMediaItem



+(id)scheme;
+(id)urlForMediaObject:(id)arg0 ;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(NSUInteger)arg0 ;
-(BOOL)wantsTemporaryDiskCache;
-(id)_primaryURL;
-(id)_secondaryURL;
-(id)avAssetWithCompletionHandler:(id)arg0 ;
-(id)createMetadataWithCompletionHandler:(id)arg0 ;
-(id)createThumbnailImageForResolution:(NSUInteger)arg0 withMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(id)importMediaToDirectoryURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)mediaObject;
-(id)parseDate:(id)arg0 ;
-(id)resourceURLWithCompletionHandler:(id)arg0 ;
-(void)setMediaObject:(id)arg0 ;


@end


#endif