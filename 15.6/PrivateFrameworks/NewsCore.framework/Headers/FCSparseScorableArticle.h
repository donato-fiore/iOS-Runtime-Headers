// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSPARSESCORABLEARTICLE_H
#define FCSPARSESCORABLEARTICLE_H

@class CKRecord, NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSArray, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, NSDate, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata;
@protocol FCFeedTransformationItem, FCChannelProviding;

#import <Foundation/Foundation.h>


@interface FCSparseScorableArticle : NSObject <FCFeedTransformationItem>

 {
    CKRecord *_articleRecord;
    NSString *_storefrontID;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *_conversionStats;
}


@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) NSInteger bodyTextLength;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) BOOL canBePurchased;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) NSUInteger contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) NSUInteger feedHalfLifeMilliseconds;
@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) CGFloat globalUserFeedback;
@property (readonly, nonatomic) NSUInteger halfLife;
@property (readonly, nonatomic) NSUInteger halfLifeOverride;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) NSInteger minimumNewsVersion;
@property (readonly, nonatomic) NSUInteger order;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSUInteger publishDateMilliseconds;
@property (readonly, nonatomic) NSInteger publisherArticleVersion;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, nonatomic) NSUInteger role;
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (readonly, copy, nonatomic) NSArray *topics;


-(void)enumerateTopicCohortsWithBlock:(id)arg0 ;
-(void)enumerateTopicConversionStatsWithBlock:(id)arg0 ;


@end


#endif