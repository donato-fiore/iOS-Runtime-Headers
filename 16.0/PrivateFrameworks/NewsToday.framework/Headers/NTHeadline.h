// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTHEADLINE_H
#define NTHEADLINE_H

@class NSURL, NTPBHeadlineAdElement, NSDate, NTPBHeadlineAnalyticsElement, NSString, NTPBHeadlineBackingElement, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration, NTPBFeedItem, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSArray, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, FCFeedPersonalizedItemScoreProfile, SFSearchResult;
@protocol NTFeedTransformationItem, FCFeedTransformationItem, NTHeadlineProviding, FCChannelProviding;

#import <Foundation/Foundation.h>

#import "NTHeadlinePersonalizationMetadata.h"

@interface NTHeadline : NSObject <NTFeedTransformationItem, FCFeedTransformationItem, NTHeadlineProviding>



@property (copy, nonatomic) NSURL *NewsURL; // ivar: _NewsURL
@property (copy, nonatomic) NTPBHeadlineAdElement *adElement; // ivar: _adElement
@property (copy, nonatomic) NSDate *ageDisplayDate; // ivar: _ageDisplayDate
@property (copy, nonatomic) NTPBHeadlineAnalyticsElement *analyticsElement; // ivar: _analyticsElement
@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NTPBHeadlineBackingElement *backingElement; // ivar: _backingElement
@property (readonly, nonatomic) NSInteger bodyTextLength;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property (readonly, nonatomic) BOOL canBePurchased;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (copy, nonatomic) NSString *compactSourceName; // ivar: _compactSourceName
@property (copy, nonatomic) NSURL *compactSourceNameImageRemoteURL; // ivar: _compactSourceNameImageRemoteURL
@property (readonly, nonatomic) NSUInteger contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) NSUInteger feedHalfLifeMilliseconds;
@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, nonatomic) NSObject<FCFeedTransformationItem> *feedTransformationItem;
@property (copy, nonatomic) NSURL *flintDocumentURL; // ivar: _flintDocumentURL
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) CGFloat globalUserFeedback;
@property (readonly, nonatomic) NSUInteger halfLife;
@property (readonly, nonatomic) NSUInteger halfLifeOverride;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites; // ivar: _hiddenFromAutoFavorites
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isBundlePaid; // ivar: _isBundlePaid
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, nonatomic) BOOL isFeatureCandidate;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) NSUInteger itemType;
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSInteger minimumNewsVersion;
@property (readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property (nonatomic) BOOL needsPlaceholderThumbnail; // ivar: _needsPlaceholderThumbnail
@property (nonatomic) BOOL needsSeenStateTracking; // ivar: _needsSeenStateTracking
@property (readonly, nonatomic) NSUInteger order;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (copy, nonatomic) NTHeadlinePersonalizationMetadata *personalizationMetadata; // ivar: _personalizationMetadata
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;
@property (readonly, nonatomic) NSUInteger preferredDynamicSlotAllocation;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSUInteger publishDateMilliseconds;
@property (readonly, nonatomic) NSInteger publisherArticleVersion;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, nonatomic) BOOL reduceVisibility;
@property (readonly, nonatomic) NSUInteger role;
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult;
@property (copy, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult
@property (copy, nonatomic) NSString *shortExcerpt; // ivar: _shortExcerpt
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (copy, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (copy, nonatomic) NSURL *sourceNameImageRemoteURL; // ivar: _sourceNameImageRemoteURL
@property (nonatomic) CGFloat sourceNameImageScale; // ivar: _sourceNameImageScale
@property (copy, nonatomic) NSString *sourceTagID; // ivar: _sourceTagID
@property (copy, nonatomic) NSString *storyType; // ivar: _storyType
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSavingForLater; // ivar: _supportsSavingForLater
@property (nonatomic) CGRect thumbnailFocalFrame; // ivar: _thumbnailFocalFrame
@property (copy, nonatomic) NSString *thumbnailIdentifier; // ivar: _thumbnailIdentifier
@property (copy, nonatomic) NSURL *thumbnailRemoteURL; // ivar: _thumbnailRemoteURL
@property (nonatomic) NSUInteger thumbnailSizePreset; // ivar: _thumbnailSizePreset
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *titleCompact; // ivar: _titleCompact
@property (readonly, nonatomic) NSUInteger todayItemType;
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (copy, nonatomic) NSArray *topicIDs; // ivar: _topicIDs
@property (readonly, copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) BOOL usesDynamicSlotAllocation;
@property (copy, nonatomic) NSString *videoCallToActionTitle; // ivar: _videoCallToActionTitle
@property (copy, nonatomic) NSURL *videoCallToActionURL; // ivar: _videoCallToActionURL
@property (readonly, nonatomic) BOOL webConverted;
@property (copy, nonatomic) NSURL *webURL; // ivar: _webURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateTopicCohortsWithBlock:(id)arg0 ;
-(void)enumerateTopicConversionStatsWithBlock:(id)arg0 ;


@end


#endif