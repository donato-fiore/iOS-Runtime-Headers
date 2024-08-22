// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONREQUESTRICHCONTENTPROVIDER_H
#define NCNOTIFICATIONREQUESTRICHCONTENTPROVIDER_H

@class UIImage;


#import "NCNotificationRequestCoalescingContentProvider.h"

@interface NCNotificationRequestRichContentProvider : NCNotificationRequestCoalescingContentProvider {
    UIImage *_cachedAttachmentImage;
}


@property (nonatomic, getter=isCachedAttachmentedImageFeatured) BOOL cachedAttachmentImageFeatured; // ivar: _cachedAttachmentImageFeatured
@property (readonly, nonatomic) BOOL hasAttachmentImage;
@property (readonly, nonatomic) BOOL hasLoadedRichAttachmentImage;
@property (nonatomic, getter=isIconVisible) BOOL iconVisible; // ivar: _iconVisible


+(id)featuredImageFetchQueue;
-(BOOL)_shouldShowContent;
-(id)thumbnail;
-(void)fetchRichAttachmentImageIsFeatured:(BOOL)arg0 withCompletion:(id)arg1 ;


@end


#endif