// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBRANKABLESOCIALHIGHLIGHT_H
#define BMPBRANKABLESOCIALHIGHLIGHT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "BMPBSocialHighlightContact.h"

@interface BMPBRankableSocialHighlight : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *applicationIdentifiers; // ivar: _applicationIdentifiers
@property (retain, nonatomic) NSString *attributionIdentifier; // ivar: _attributionIdentifier
@property (retain, nonatomic) NSString *batchIdentifier; // ivar: _batchIdentifier
@property (retain, nonatomic) NSMutableArray *calculatedFeatures; // ivar: _calculatedFeatures
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSString *clientVariant; // ivar: _clientVariant
@property (nonatomic) CGFloat contentCreationSecondsSinceReferenceDate; // ivar: _contentCreationSecondsSinceReferenceDate
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (retain, nonatomic) NSString *groupPhotoPathDigest; // ivar: _groupPhotoPathDigest
@property (readonly, nonatomic) BOOL hasAttributionIdentifier;
@property (readonly, nonatomic) BOOL hasBatchIdentifier;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (readonly, nonatomic) BOOL hasClientVariant;
@property (nonatomic) BOOL hasContentCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasDomainIdentifier;
@property (readonly, nonatomic) BOOL hasGroupPhotoPathDigest;
@property (readonly, nonatomic) BOOL hasHighlightIdentifier;
@property (nonatomic) BOOL hasHighlightType;
@property (nonatomic) BOOL hasIsConversationAutoDonating;
@property (nonatomic) BOOL hasIsPrimary;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceId;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) BOOL hasRankingSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasResolvedUrl;
@property (readonly, nonatomic) BOOL hasResourceUrl;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSender;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (nonatomic) BOOL hasSyndicationSecondsSinceReferenceDate;
@property (retain, nonatomic) NSString *highlightIdentifier; // ivar: _highlightIdentifier
@property (nonatomic) int highlightType; // ivar: _highlightType
@property (nonatomic) BOOL isConversationAutoDonating; // ivar: _isConversationAutoDonating
@property (nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (retain, nonatomic) NSString *originatingDeviceId; // ivar: _originatingDeviceId
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (nonatomic) CGFloat rankingSecondsSinceReferenceDate; // ivar: _rankingSecondsSinceReferenceDate
@property (retain, nonatomic) NSString *resolvedUrl; // ivar: _resolvedUrl
@property (retain, nonatomic) NSString *resourceUrl; // ivar: _resourceUrl
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) BMPBSocialHighlightContact *sender; // ivar: _sender
@property (retain, nonatomic) NSString *sourceBundleId; // ivar: _sourceBundleId
@property (nonatomic) CGFloat syndicationSecondsSinceReferenceDate; // ivar: _syndicationSecondsSinceReferenceDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicationIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)calculatedFeaturesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)highlightTypeAsString:(int)arg0 ;
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