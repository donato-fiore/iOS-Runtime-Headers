// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCNEWSSUPPLEMENTALCONTEXT_H
#define APPCNEWSSUPPLEMENTALCONTEXT_H

@class NSString, NSDictionary, NSNumber, NSArray;
@protocol APPCPromotableNewsSupplementalContext;

#import <Foundation/Foundation.h>


@interface APPCNewsSupplementalContext : NSObject <APPCPromotableNewsSupplementalContext>

 {
    ? advertisementType;
    ? creativeType;
    ? currentArticleArticleId;
    ? nextArticleArticleId;
    ? currentArticlePublicationMetadata;
    ? nextArticlePublicationMetadata;
    ? currentArticleRating;
    ? nextArticleRating;
    ? currentArticleSourceChannel;
    ? nextArticleSourceChannel;
    ? currentArticleSourceChannelRating;
    ? nextArticleSourceChannelRating;
    ? currentArticleSourceSections;
    ? nextArticleSourceSections;
    ? feedMetadataCategories;
    ? feedMetadataChannelId;
    ? feedMetadataTagId;
    ? feedMetadataKeywords;
    ? feedMetadataLanguages;
    ? feedMetadataRating;
    ? feedMetadataSectionId;
    ? groupContextCategories;
    ? groupContextAboveCategories;
    ? groupContextBelowCategories;
    ? groupContextId;
    ? groupContextAboveId;
    ? groupContextBelowId;
    ? groupContextKeywords;
    ? groupContextAboveKeywords;
    ? groupContextBelowKeywords;
    ? groupContextLanguages;
    ? groupContextAboveLanguages;
    ? groupContextBelowLanguages;
    ? groupContextAboveChannelId;
    ? groupContextAboveTagId;
    ? groupContextBelowChannelId;
    ? groupContextBelowTagId;
    ? groupContextType;
    ? groupContextAboveType;
    ? groupContextBelowType;
    ? contentEnvironment;
    ? placement;
    ? referralCampaignId;
    ? referralLocation;
    ? subscriptionType;
    ? currentIssueId;
    ? anfComponentMetadataInternal;
    ? currentIssueIsDraftInternal;
    ? currentIssueIsCurrentInternal;
    ? requestedAdTypeInternal;
}


@property (nonatomic, copy) NSString *advertisementType;
@property (nonatomic, copy) NSDictionary *anfComponentMetadata;
@property (nonatomic, copy) NSString *contentEnvironment;
@property (nonatomic, copy) NSString *creativeType;
@property (nonatomic, copy) NSString *currentArticleArticleId;
@property (nonatomic, retain) NSNumber *currentArticleIsSponsored; // ivar: currentArticleIsSponsored
@property (nonatomic, copy) NSDictionary *currentArticlePublicationMetadata;
@property (nonatomic, copy) NSString *currentArticleRating;
@property (nonatomic, copy) NSString *currentArticleSourceChannel;
@property (nonatomic, copy) NSString *currentArticleSourceChannelRating;
@property (nonatomic, retain) NSNumber *currentArticleSourceContentProviderId; // ivar: currentArticleSourceContentProviderId
@property (nonatomic, copy) NSArray *currentArticleSourceSections;
@property (nonatomic, copy) NSString *currentIssueId;
@property (nonatomic) NSInteger currentIssueIsCurrent;
@property (nonatomic) NSInteger currentIssueIsDraft;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *feedMetadataCategories;
@property (nonatomic, copy) NSString *feedMetadataChannelId;
@property (nonatomic, retain) NSNumber *feedMetadataContentProviderID; // ivar: feedMetadataContentProviderID
@property (nonatomic, copy) NSArray *feedMetadataKeywords;
@property (nonatomic, copy) NSArray *feedMetadataLanguages;
@property (nonatomic, copy) NSString *feedMetadataRating;
@property (nonatomic, copy) NSString *feedMetadataSectionId;
@property (nonatomic, copy) NSString *feedMetadataTagId;
@property (nonatomic, copy) NSArray *groupContextAboveCategories;
@property (nonatomic, copy) NSString *groupContextAboveChannelId;
@property (nonatomic, retain) NSNumber *groupContextAboveContentProviderId; // ivar: groupContextAboveContentProviderId
@property (nonatomic, copy) NSString *groupContextAboveId;
@property (nonatomic, copy) NSArray *groupContextAboveKeywords;
@property (nonatomic, copy) NSArray *groupContextAboveLanguages;
@property (nonatomic, copy) NSString *groupContextAboveTagId;
@property (nonatomic, copy) NSString *groupContextAboveType;
@property (nonatomic, copy) NSArray *groupContextBelowCategories;
@property (nonatomic, copy) NSString *groupContextBelowChannelId;
@property (nonatomic, retain) NSNumber *groupContextBelowContentProviderId; // ivar: groupContextBelowContentProviderId
@property (nonatomic, copy) NSString *groupContextBelowId;
@property (nonatomic, copy) NSArray *groupContextBelowKeywords;
@property (nonatomic, copy) NSArray *groupContextBelowLanguages;
@property (nonatomic, copy) NSString *groupContextBelowTagId;
@property (nonatomic, copy) NSString *groupContextBelowType;
@property (nonatomic, copy) NSArray *groupContextCategories;
@property (nonatomic, retain) NSNumber *groupContextContentProviderId; // ivar: groupContextContentProviderId
@property (nonatomic, copy) NSString *groupContextId;
@property (nonatomic, copy) NSArray *groupContextKeywords;
@property (nonatomic, copy) NSArray *groupContextLanguages;
@property (nonatomic, copy) NSString *groupContextType;
@property (nonatomic, retain) NSNumber *isDraft; // ivar: isDraft
@property (nonatomic, copy) NSString *nextArticleArticleId;
@property (nonatomic, retain) NSNumber *nextArticleIsSponsored; // ivar: nextArticleIsSponsored
@property (nonatomic, copy) NSDictionary *nextArticlePublicationMetadata;
@property (nonatomic, copy) NSString *nextArticleRating;
@property (nonatomic, copy) NSString *nextArticleSourceChannel;
@property (nonatomic, copy) NSString *nextArticleSourceChannelRating;
@property (nonatomic, retain) NSNumber *nextArticleSourceContentProviderId; // ivar: nextArticleSourceContentProviderId
@property (nonatomic, copy) NSArray *nextArticleSourceSections;
@property (nonatomic, retain) NSNumber *numOfArticlesSeenSinceLastInterstitial; // ivar: numOfArticlesSeenSinceLastInterstitial
@property (nonatomic, retain) NSNumber *onboardStatus;
@property (nonatomic, copy) NSString *placement;
@property (nonatomic, retain) NSNumber *playerAspectRatio; // ivar: playerAspectRatio
@property (nonatomic, copy) NSString *referralLocation;
@property (nonatomic, retain) NSNumber *referralPublisherInventory; // ivar: referralPublisherInventory
@property (nonatomic) NSInteger requestedAdType;
@property (nonatomic, copy) NSString *subscriptionType;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;


@end


#endif