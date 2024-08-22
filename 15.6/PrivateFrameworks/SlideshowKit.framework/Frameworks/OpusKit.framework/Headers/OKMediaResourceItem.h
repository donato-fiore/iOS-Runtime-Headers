// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKMEDIARESOURCEITEM_H
#define OKMEDIARESOURCEITEM_H



#import "OKMediaItem.h"

@interface OKMediaResourceItem : OKMediaItem



+(id)scheme;
+(id)urlForMediaObject:(id)arg0 ;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(NSUInteger)arg0 ;
-(BOOL)wantsTemporaryDiskCache;
-(id)initWithFilename:(id)arg0 andExtension:(id)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg0 ;


@end


#endif