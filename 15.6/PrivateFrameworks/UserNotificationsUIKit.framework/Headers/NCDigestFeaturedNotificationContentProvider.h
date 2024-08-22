// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCDIGESTFEATUREDNOTIFICATIONCONTENTPROVIDER_H
#define NCDIGESTFEATUREDNOTIFICATIONCONTENTPROVIDER_H

@class UIImage;
@protocol NCNotificationListComponentDelegate;


#import "NCNotificationRequestCoalescingContentProvider.h"

@interface NCDigestFeaturedNotificationContentProvider : NCNotificationRequestCoalescingContentProvider {
    NSUInteger _groupCount;
    UIImage *_cachedFeaturedAttachmentImage;
}


@property (nonatomic) NSUInteger appNotificationCount; // ivar: _appNotificationCount
@property (nonatomic) CGFloat cachedImageSizeRatio; // ivar: _cachedImageSizeRatio
@property (copy, nonatomic) id *defaultActionBlock; // ivar: _defaultActionBlock
@property (readonly, nonatomic) BOOL hasAttachmentImage;
@property (weak, nonatomic) NSObject<NCNotificationListComponentDelegate> *listComponentDelegate; // ivar: _listComponentDelegate


+(id)featuredImageFetchQueue;
-(BOOL)_shouldShowContent;
-(id)initWithNotificationRequest:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 groupCount:(NSUInteger)arg1 ;
-(id)primaryText;
-(id)thumbnail;
-(void)fetchFeaturedAttachmentImageWithSizeRatio:(CGFloat)arg0 completion:(id)arg1 ;


@end


#endif