// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI223STUBFEATUREAVAILABILITY_H
#define _TTC7NEWSUI223STUBFEATUREAVAILABILITY_H

@class SwiftObject, _TtC16NewsSubscription26PaidBundleViaOfferSettings;
@protocol TSFeatureAvailabilityType;



@interface _TtC7NewsUI223StubFeatureAvailability : SwiftObject <TSFeatureAvailabilityType>

 {
    ? cardFeed;
    ? appleNewsContent;
    ? appleNewsPrivateData;
    ? allowFollowingOfEndOfArticlePublisher;
    ? allowLikeDislike;
    ? shouldDisplaySaveInTopBar;
    ? superfeedsEnabled;
    ? weatherKit;
    ? sports;
    ? superfeeds;
    ? navigationImprovementsEnabled;
    ? articleViewerImprovementsEnabled;
}


@property (nonatomic) BOOL allowCIPBestOffer; // ivar: allowCIPBestOffer
@property (nonatomic) BOOL allowInAppMessages; // ivar: allowInAppMessages
@property (nonatomic) BOOL allowPaidBundleViaOffer; // ivar: allowPaidBundleViaOffer
@property (nonatomic) BOOL allowSIWAOnMac; // ivar: allowSIWAOnMac
@property (nonatomic) BOOL allowSharingAlways; // ivar: allowSharingAlways
@property (nonatomic) BOOL appleMagazineContent; // ivar: appleMagazineContent
@property (nonatomic) BOOL articleLinkBehaviorImprovementsEnabled; // ivar: articleLinkBehaviorImprovementsEnabled
@property (nonatomic) BOOL betterTopicFeeds; // ivar: betterTopicFeeds
@property (nonatomic, readonly) BOOL improvedBlockingBehaviorEnabled;
@property (nonatomic) BOOL interstellarEnabled; // ivar: interstellarEnabled
@property (nonatomic) BOOL narrativeAudio; // ivar: narrativeAudio
@property (nonatomic, retain) _TtC16NewsSubscription26PaidBundleViaOfferSettings *paidBundleViaOfferAvailability; // ivar: paidBundleViaOfferAvailability
@property (nonatomic) BOOL searchFeaturedStoriesEnabled; // ivar: searchFeaturedStoriesEnabled
@property (nonatomic) BOOL shortcutsEnabled; // ivar: shortcutsEnabled
@property (nonatomic) BOOL shouldGroupSportsHighlights; // ivar: shouldGroupSportsHighlights
@property (nonatomic) BOOL sportsBracketsEnabled; // ivar: sportsBracketsEnabled
@property (nonatomic) BOOL sportsEnabled; // ivar: sportsEnabled
@property (nonatomic) BOOL sportsEventPagesEnabled; // ivar: sportsEventPagesEnabled
@property (nonatomic) BOOL sportsNativeAdsEnabled; // ivar: sportsNativeAdsEnabled
@property (nonatomic) BOOL useContinueReading; // ivar: useContinueReading
@property (nonatomic) BOOL useFasterSearch; // ivar: useFasterSearch
@property (nonatomic) BOOL useFineGrainedNewsletterManagement; // ivar: useFineGrainedNewsletterManagement
@property (nonatomic) BOOL useNewChannelPicker; // ivar: useNewChannelPicker
@property (nonatomic) BOOL useNewReportConcern; // ivar: useNewReportConcern
@property (nonatomic) BOOL useNewsArticleSearch; // ivar: useNewsArticleSearch




@end


#endif