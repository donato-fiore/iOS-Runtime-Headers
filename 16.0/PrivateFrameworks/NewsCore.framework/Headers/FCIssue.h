// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCISSUE_H
#define FCISSUE_H

@class NSArray, NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NTPBIssueRecord, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, NSDate, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata;
@protocol FCFeedPersonalizingItem, FCIssueAccessCheckable, NSCopying, FCContentArchivable, FCChannelProviding;

#import <Foundation/Foundation.h>

#import "FCContentArchive.h"
#import "FCColor.h"
#import "FCAssetHandle.h"
#import "FCInterestToken.h"
#import "FCFeedPersonalizedItemScoreProfile.h"

@interface FCIssue : NSObject <FCFeedPersonalizingItem, FCIssueAccessCheckable, NSCopying, FCContentArchivable>



@property (readonly, copy, nonatomic) NSArray *allArticleIDs; // ivar: _allArticleIDs
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (readonly, nonatomic) NSInteger bodyTextLength;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, copy, nonatomic) NSString *coverArticleID; // ivar: _coverArticleID
@property (readonly, copy, nonatomic) NSString *coverDate; // ivar: _coverDate
@property (readonly, copy, nonatomic) FCColor *coverImageAccentColor; // ivar: _coverImageAccentColor
@property (readonly, nonatomic) CGFloat coverImageAspectRatio; // ivar: _coverImageAspectRatio
@property (readonly, nonatomic) FCAssetHandle *coverImageAssetHandle; // ivar: _coverImageAssetHandle
@property (readonly, copy, nonatomic) FCColor *coverImageBackgroundColor; // ivar: _coverImageBackgroundColor
@property (readonly, copy, nonatomic) FCColor *coverImagePrimaryColor; // ivar: _coverImagePrimaryColor
@property (readonly, copy, nonatomic) FCColor *coverImageTextColor; // ivar: _coverImageTextColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
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
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) FCInterestToken *interestToken; // ivar: _interestToken
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isCurrent; // ivar: _isCurrent
@property (readonly, nonatomic) BOOL isDraft; // ivar: _isDraft
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, nonatomic) BOOL isFeatureCandidate;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, nonatomic) BOOL isLocalDraft;
@property (readonly, copy, nonatomic) NSString *issueDescription; // ivar: _issueDescription
@property (readonly, nonatomic) NTPBIssueRecord *issueRecord; // ivar: _issueRecord
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) CGFloat layeredCoverAspectRatio; // ivar: _layeredCoverAspectRatio
@property (readonly, copy, nonatomic) NSString *layeredCoverJSON; // ivar: _layeredCoverJSON
@property (readonly, copy, nonatomic) FCColor *layeredCoverPrimaryColor; // ivar: _layeredCoverPrimaryColor
@property (readonly, nonatomic) FCAssetHandle *metadataJSONAssetHandle; // ivar: _metadataJSONAssetHandle
@property (readonly, nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (readonly, copy, nonatomic) NSString *notificationDescription; // ivar: _notificationDescription
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic, getter=isPaid) BOOL paid; // ivar: _paid
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;
@property (readonly, copy, nonatomic) NSDate *publicationDate; // ivar: _publicationDate
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, nonatomic) BOOL reduceVisibility;
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile; // ivar: _scoreProfile
@property (readonly, copy, nonatomic) NSDate *sortDate; // ivar: _sortDate
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel; // ivar: _sourceChannel
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (readonly, copy, nonatomic) NSArray *topicTagIDs; // ivar: _topicTagIDs
@property (readonly, copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL webConverted;


+(BOOL)_fakeIssuesTimestamp;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 sourceChannel:(id)arg1 assetManager:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 title:(id)arg2 publicationDate:(id)arg3 coverDate:(id)arg4 metadataJSONAssetHandle:(id)arg5 coverImageAssetHandle:(id)arg6 coverImageAspectRatio:(CGFloat)arg7 coverImagePrimaryColor:(id)arg8 coverImageBackgroundColor:(id)arg9 coverImageTextColor:(id)arg10 coverImageAccentColor:(id)arg11 layeredCoverJSON:(id)arg12 layeredCoverAspectRatio:(CGFloat)arg13 layeredCoverPrimaryColor:(id)arg14 isCurrent:(BOOL)arg15 isDraft:(BOOL)arg16 isPaid:(BOOL)arg17 minimumNewsVersion:(NSInteger)arg18 allArticleIDs:(id)arg19 coverArticleID:(id)arg20 allowedStorefrontIDs:(id)arg21 blockedStorefrontIDs:(id)arg22 topicTagIDs:(id)arg23 sourceChannel:(id)arg24 notificationDescription:(id)arg25 issueDescription:(id)arg26 sortDate:(id)arg27 ;
-(id)initWithIssue:(id)arg0 overrides:(id)arg1 ;
-(id)initWithIssueRecord:(id)arg0 assetManager:(id)arg1 interestToken:(id)arg2 sourceChannel:(id)arg3 ;
-(void)enumerateTopicCohortsWithBlock:(id)arg0 ;
-(void)enumerateTopicConversionStatsWithBlock:(id)arg0 ;


@end


#endif