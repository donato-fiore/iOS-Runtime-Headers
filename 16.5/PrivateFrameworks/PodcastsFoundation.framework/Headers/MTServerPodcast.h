// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSERVERPODCAST_H
#define MTSERVERPODCAST_H

@class TtC18PodcastsFoundation17ServerPodcastBase, NSString, NSArray;
@protocol MTFeedPodcast, _TtP18PodcastsFoundation11MediaObject_, MTFeedChannel;



@interface MTServerPodcast : TtC18PodcastsFoundation17ServerPodcastBase <MTFeedPodcast, _TtP18PodcastsFoundation11MediaObject_>

 {
    ? episodes;
}


@property (nonatomic, readonly) NSString *artworkPrimaryColor;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSObject<MTFeedChannel> *channelItem;
@property (nonatomic, readonly) NSString *displayType;
@property (nonatomic, readonly) NSString *feedDescription;
@property (nonatomic, readonly) NSString *globalImageURL;
@property (nonatomic, readonly) BOOL hasEpisodes;
@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) BOOL isNotSubscribable;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly) NSString *podcastStoreId;
@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, readonly) NSString *resolvedFeedURL;
@property (nonatomic, readonly) NSString *shareURL;
@property (nonatomic, readonly) NSString *showSpecificUpsellCopy;
@property (nonatomic, readonly) NSString *showType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uberBackgroundImageURL;
@property (nonatomic, readonly) NSString *uberBackgroundJoeColor;
@property (nonatomic, readonly) NSString *updatedFeedURL;
@property (nonatomic, readonly) NSString *webpageURL;


-(id)toFeed;


@end


#endif