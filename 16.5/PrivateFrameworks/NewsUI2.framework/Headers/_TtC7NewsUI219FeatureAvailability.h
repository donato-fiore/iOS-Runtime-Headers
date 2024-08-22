// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI219FEATUREAVAILABILITY_H
#define _TTC7NEWSUI219FEATUREAVAILABILITY_H

@class SwiftObject, _TtC16NewsSubscription26PaidBundleViaOfferSettings;
@protocol TSFeatureAvailabilityType;



@interface _TtC7NewsUI219FeatureAvailability : SwiftObject <TSFeatureAvailabilityType>

 {
    ? featureAvailabilityProvider;
}


@property (nonatomic, readonly) BOOL allowCIPBestOffer;
@property (nonatomic, readonly) BOOL allowInAppMessages;
@property (nonatomic, readonly) BOOL allowPaidBundleViaOffer;
@property (nonatomic, readonly) BOOL allowSIWAOnMac;
@property (nonatomic, readonly) BOOL allowSharingAlways;
@property (nonatomic, readonly) BOOL appleMagazineContent;
@property (nonatomic, readonly) BOOL articleLinkBehaviorImprovementsEnabled;
@property (nonatomic, readonly) BOOL betterTopicFeeds;
@property (nonatomic, readonly) BOOL improvedBlockingBehaviorEnabled;
@property (nonatomic, readonly) BOOL interstellarEnabled;
@property (nonatomic, readonly) BOOL narrativeAudio;
@property (nonatomic, readonly) _TtC16NewsSubscription26PaidBundleViaOfferSettings *paidBundleViaOfferAvailability;
@property (nonatomic, readonly) BOOL searchFeaturedStoriesEnabled;
@property (nonatomic, readonly) BOOL shortcutsEnabled;
@property (nonatomic, readonly) BOOL shouldGroupSportsHighlights;
@property (nonatomic, readonly) BOOL sportsBracketsEnabled;
@property (nonatomic, readonly) BOOL sportsEnabled;
@property (nonatomic, readonly) BOOL sportsEventPagesEnabled;
@property (nonatomic, readonly) BOOL sportsNativeAdsEnabled;
@property (nonatomic, readonly) BOOL useContinueReading;
@property (nonatomic, readonly) BOOL useFasterSearch;
@property (nonatomic, readonly) BOOL useFineGrainedNewsletterManagement;
@property (nonatomic, readonly) BOOL useNewChannelPicker;
@property (nonatomic, readonly) BOOL useNewReportConcern;
@property (nonatomic, readonly) BOOL useNewsArticleSearch;




@end


#endif