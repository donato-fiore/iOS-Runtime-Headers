// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTBRICKPREVIEWIMAGECACHEV2_H
#define ICATTACHMENTBRICKPREVIEWIMAGECACHEV2_H

@class ICThumbnailDataCache;



@interface ICAttachmentBrickPreviewImageCacheV2 : ICThumbnailDataCache



+(id)cacheKeyForAttachmentObjectID:(id)arg0 brickSize:(NSUInteger)arg1 scale:(CGFloat)arg2 appearanceType:(NSUInteger)arg3 ;
-(id)init;
-(void)attachmentPreviewImagesDidUpdate:(id)arg0 ;
-(void)dealloc;


@end


#endif