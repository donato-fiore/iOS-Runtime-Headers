// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPRANKABLESOCIALHIGHLIGHT_H
#define PPRANKABLESOCIALHIGHLIGHT_H

@class PBCodable, NSMutableArray, NSString, NSSet, NSData;
@protocol MLFeatureProvider, BMStoreData, NSCopying;


#import "PPSocialHighlightContact.h"

@interface PPRankableSocialHighlight : PBCodable <MLFeatureProvider, BMStoreData, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *applicationIdentifiers; // ivar: _applicationIdentifiers
@property (retain, nonatomic) NSString *attributionIdentifier; // ivar: _attributionIdentifier
@property (retain, nonatomic) NSString *batchIdentifier; // ivar: _batchIdentifier
@property (retain, nonatomic) NSMutableArray *calculatedFeatures; // ivar: _calculatedFeatures
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSString *collaborationIdentifier; // ivar: _collaborationIdentifier
@property (nonatomic) CGFloat contentCreationSecondsSinceReferenceDate; // ivar: _contentCreationSecondsSinceReferenceDate
@property (retain, nonatomic) NSString *contentDisplayName; // ivar: _contentDisplayName
@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) NSString *fileProviderId; // ivar: _fileProviderId
@property (nonatomic) CGFloat firstPassScore; // ivar: _firstPassScore
@property (retain, nonatomic) NSString *groupPhotoPathDigest; // ivar: _groupPhotoPathDigest
@property (retain, nonatomic) NSData *handleToIdentityMap; // ivar: _handleToIdentityMap
@property (readonly, nonatomic) BOOL hasAttributionIdentifier;
@property (readonly, nonatomic) BOOL hasBatchIdentifier;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (readonly, nonatomic) BOOL hasCollaborationIdentifier;
@property (nonatomic) BOOL hasContentCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasContentDisplayName;
@property (readonly, nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasDomainIdentifier;
@property (readonly, nonatomic) BOOL hasFileProviderId;
@property (nonatomic) BOOL hasFirstPassScore;
@property (readonly, nonatomic) BOOL hasGroupPhotoPathDigest;
@property (readonly, nonatomic) BOOL hasHandleToIdentityMap;
@property (readonly, nonatomic) BOOL hasHighlightIdentifier;
@property (nonatomic) BOOL hasHighlightType;
@property (nonatomic) BOOL hasIsCollaboration;
@property (nonatomic) BOOL hasIsConversationAutoDonating;
@property (nonatomic) BOOL hasIsPrimary;
@property (nonatomic) BOOL hasIsTopKResult;
@property (readonly, nonatomic) BOOL hasLocalIdentity;
@property (readonly, nonatomic) BOOL hasLocalIdentityProof;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceId;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) BOOL hasRankingSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasResolvedUrl;
@property (readonly, nonatomic) BOOL hasResourceUrl;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSender;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (nonatomic) BOOL hasSyndicationSecondsSinceReferenceDate;
@property (nonatomic) BOOL hasTopKScore;
@property (readonly, nonatomic) BOOL hasVariant;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *highlightIdentifier; // ivar: _highlightIdentifier
@property (nonatomic) int highlightType; // ivar: _highlightType
@property (nonatomic) BOOL isCollaboration; // ivar: _isCollaboration
@property (nonatomic) BOOL isConversationAutoDonating; // ivar: _isConversationAutoDonating
@property (nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (nonatomic) BOOL isTopKResult; // ivar: _isTopKResult
@property (retain, nonatomic) NSData *localIdentity; // ivar: _localIdentity
@property (retain, nonatomic) NSData *localIdentityProof; // ivar: _localIdentityProof
@property (retain, nonatomic) NSString *originatingDeviceId; // ivar: _originatingDeviceId
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (nonatomic) CGFloat rankingSecondsSinceReferenceDate; // ivar: _rankingSecondsSinceReferenceDate
@property (retain, nonatomic) NSString *resolvedUrl; // ivar: _resolvedUrl
@property (retain, nonatomic) NSString *resourceUrl; // ivar: _resourceUrl
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) PPSocialHighlightContact *sender; // ivar: _sender
@property (retain, nonatomic) NSString *sourceBundleId; // ivar: _sourceBundleId
@property (readonly) Class superclass;
@property (nonatomic) CGFloat syndicationSecondsSinceReferenceDate; // ivar: _syndicationSecondsSinceReferenceDate
@property (nonatomic) CGFloat topKScore; // ivar: _topKScore
@property (retain, nonatomic) NSString *variant; // ivar: _variant


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)applicationIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)calculatedFeatureValueForKey:(id)arg0 ;
-(id)calculatedFeaturesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)featureValueForName:(id)arg0 ;
-(id)features;
-(id)highlightTypeAsString:(int)arg0 ;
-(id)json;
-(id)serialize;
-(int)StringAsHighlightType:(id)arg0 ;
-(void)addApplicationIdentifiers:(id)arg0 ;
-(void)addCalculatedFeatures:(id)arg0 ;
-(void)clearApplicationIdentifiers;
-(void)clearCalculatedFeatures;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif