// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCDIGESTFEATUREDNOTIFICATIONCONTENTPROVIDER_H
#define NCDIGESTFEATUREDNOTIFICATIONCONTENTPROVIDER_H

@class UIImage;


#import "NCNotificationRequestCoalescingContentProvider.h"

@interface NCDigestFeaturedNotificationContentProvider : NCNotificationRequestCoalescingContentProvider {
    NSUInteger _groupCount;
    UIImage *_cachedFeaturedAttachmentImage;
}


@property (copy, nonatomic) id *defaultActionBlock; // ivar: _defaultActionBlock
@property (readonly, nonatomic) BOOL hasAttachmentImage;


+(id)featuredImageFetchQueue;
-(BOOL)_shouldShowContent;
-(id)initWithNotificationRequest:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 groupCount:(NSUInteger)arg1 ;
-(id)primaryText;
-(void)fetchFeaturedAttachmentImageWithCompletion:(id)arg0 ;


@end


#endif