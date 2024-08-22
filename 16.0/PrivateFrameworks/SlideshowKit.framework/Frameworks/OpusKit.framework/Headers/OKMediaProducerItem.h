// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKMEDIAPRODUCERITEM_H
#define OKMEDIAPRODUCERITEM_H



#import "OKMediaItem.h"
#import "OKProducerPlugin.h"

@interface OKMediaProducerItem : OKMediaItem {
    OKProducerPlugin *_plugin;
}




+(id)scheme;
+(id)urlForMediaObject:(id)arg0 ;
+(id)urlForProducerPluginIdentifier:(id)arg0 andResourcePath:(id)arg1 ;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(NSUInteger)arg0 ;
-(BOOL)wantsTemporaryDiskCache;
-(id)_fileURL;
-(id)createMetadataWithCompletionHandler:(id)arg0 ;
-(id)createThumbnailImageForResolution:(NSUInteger)arg0 withMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(id)importMediaToDirectoryURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithProducerPluginIdentifier:(id)arg0 andResourcePath:(id)arg1 ;
-(id)mediaObject;
-(id)parseDate:(id)arg0 ;
-(id)resourceURLWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)setMediaObject:(id)arg0 ;


@end


#endif