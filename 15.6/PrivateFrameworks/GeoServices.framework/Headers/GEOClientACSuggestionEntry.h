// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCLIENTACSUGGESTIONENTRY_H
#define GEOCLIENTACSUGGESTIONENTRY_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOHyperlinkMetaData.h"
#import "GEOSubactionMetaData.h"

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    CGFloat _contactRelevanceScore;
    CGFloat _distanceToSuggestionFromViewportCenter;
    CGFloat _fractionOfMatch;
    GEOHyperlinkMetaData *_hyperlinkMetadata;
    CGFloat _mapsSuggestionsContactRevelanceScore;
    CGFloat _mapsSuggestionsIsTouristScore;
    CGFloat _mapsSuggestionsPoiRevelanceScore;
    GEOSubactionMetaData *_subactionMetaData;
    NSString *_suggestionSectionType;
    CGFloat _timeSinceLastInteractedSeconds;
    CGFloat _timeSinceMapViewportChangedSeconds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _age;
    int _autocompleteResultCellType;
    int _distanceToSuggestion;
    int _peopleSuggesterRank;
    int _poiOpenState;
    int _serverEntryType;
    int _serverItemIndexInSection;
    int _serverSectionIndex;
    int _suggestionType;
    int _tapBehavior;
    BOOL _discreteFeatureValuesAvailable;
    BOOL _isContainedInViewport;
    BOOL _isFavorite;
    BOOL _isProminentResult;
    BOOL _matchedUsingAddress;
    BOOL _matchedUsingEventName;
    BOOL _matchedUsingLabel;
    BOOL _matchedUsingName;
    BOOL _matchedUsingOrganization;
    BOOL _shownToUser;
    ? _flags;
}


@property (nonatomic) int age;
@property (nonatomic) int autocompleteResultCellType;
@property (nonatomic) CGFloat contactRelevanceScore;
@property (nonatomic) BOOL discreteFeatureValuesAvailable;
@property (nonatomic) int distanceToSuggestion;
@property (nonatomic) CGFloat distanceToSuggestionFromViewportCenter;
@property (nonatomic) CGFloat fractionOfMatch;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasAutocompleteResultCellType;
@property (nonatomic) BOOL hasContactRelevanceScore;
@property (nonatomic) BOOL hasDiscreteFeatureValuesAvailable;
@property (nonatomic) BOOL hasDistanceToSuggestion;
@property (nonatomic) BOOL hasDistanceToSuggestionFromViewportCenter;
@property (nonatomic) BOOL hasFractionOfMatch;
@property (readonly, nonatomic) BOOL hasHyperlinkMetadata;
@property (nonatomic) BOOL hasIsContainedInViewport;
@property (nonatomic) BOOL hasIsFavorite;
@property (nonatomic) BOOL hasIsProminentResult;
@property (nonatomic) BOOL hasMapsSuggestionsContactRevelanceScore;
@property (nonatomic) BOOL hasMapsSuggestionsIsTouristScore;
@property (nonatomic) BOOL hasMapsSuggestionsPoiRevelanceScore;
@property (nonatomic) BOOL hasMatchedUsingAddress;
@property (nonatomic) BOOL hasMatchedUsingEventName;
@property (nonatomic) BOOL hasMatchedUsingLabel;
@property (nonatomic) BOOL hasMatchedUsingName;
@property (nonatomic) BOOL hasMatchedUsingOrganization;
@property (nonatomic) BOOL hasPeopleSuggesterRank;
@property (nonatomic) BOOL hasPoiOpenState;
@property (nonatomic) BOOL hasServerEntryType;
@property (nonatomic) BOOL hasServerItemIndexInSection;
@property (nonatomic) BOOL hasServerSectionIndex;
@property (nonatomic) BOOL hasShownToUser;
@property (readonly, nonatomic) BOOL hasSubactionMetaData;
@property (readonly, nonatomic) BOOL hasSuggestionSectionType;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) BOOL hasTapBehavior;
@property (nonatomic) BOOL hasTimeSinceLastInteractedSeconds;
@property (nonatomic) BOOL hasTimeSinceMapViewportChangedSeconds;
@property (retain, nonatomic) GEOHyperlinkMetaData *hyperlinkMetadata;
@property (nonatomic) BOOL isContainedInViewport;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL isProminentResult;
@property (nonatomic) CGFloat mapsSuggestionsContactRevelanceScore;
@property (nonatomic) CGFloat mapsSuggestionsIsTouristScore;
@property (nonatomic) CGFloat mapsSuggestionsPoiRevelanceScore;
@property (nonatomic) BOOL matchedUsingAddress;
@property (nonatomic) BOOL matchedUsingEventName;
@property (nonatomic) BOOL matchedUsingLabel;
@property (nonatomic) BOOL matchedUsingName;
@property (nonatomic) BOOL matchedUsingOrganization;
@property (nonatomic) int peopleSuggesterRank;
@property (nonatomic) int poiOpenState;
@property (nonatomic) int serverEntryType;
@property (nonatomic) int serverItemIndexInSection;
@property (nonatomic) int serverSectionIndex;
@property (nonatomic) BOOL shownToUser;
@property (retain, nonatomic) GEOSubactionMetaData *subactionMetaData;
@property (retain, nonatomic) NSString *suggestionSectionType;
@property (nonatomic) int suggestionType;
@property (nonatomic) int tapBehavior;
@property (nonatomic) CGFloat timeSinceLastInteractedSeconds;
@property (nonatomic) CGFloat timeSinceMapViewportChangedSeconds;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)autocompleteResultCellTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)poiOpenStateAsString:(int)arg0 ;
-(id)serverEntryTypeAsString:(int)arg0 ;
-(id)suggestionTypeAsString:(int)arg0 ;
-(id)tapBehaviorAsString:(int)arg0 ;
-(int)StringAsAutocompleteResultCellType:(id)arg0 ;
-(int)StringAsPoiOpenState:(id)arg0 ;
-(int)StringAsServerEntryType:(id)arg0 ;
-(int)StringAsSuggestionType:(id)arg0 ;
-(int)StringAsTapBehavior:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif