// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDPLACESUMMARYLAYOUTUNIT_H
#define GEOPDPLACESUMMARYLAYOUTUNIT_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOPDPlaceSummaryLayoutUnitAddress.h"
#import "GEOPDPlaceSummaryLayoutUnit.h"
#import "GEOPDPlaceSummaryLayoutUnitCategory.h"
#import "GEOPDPlaceSummaryLayoutUnitContainment.h"
#import "GEOPDPlaceSummaryLayoutUnitCuratedGuides.h"
#import "GEOPDPlaceSummaryLayoutUnitDistance.h"
#import "GEOPDPlaceSummaryLayoutUnitEVChargersNumber.h"
#import "GEOPDPlaceSummaryLayoutUnitFactoid.h"
#import "GEOPDPlaceSummaryLayoutUnitHighlightExtra.h"
#import "GEOPDPlaceSummaryLayoutUnitHighlightMain.h"
#import "GEOPDPlaceSummaryLayoutUnitHours.h"
#import "GEOPDPlaceSummaryLayoutUnitName.h"
#import "GEOPDPlaceSummaryLayoutUnitNumPlacesInGuide.h"
#import "GEOPDPlaceSummaryLayoutUnitPrice.h"
#import "GEOPDPlaceSummaryLayoutUnitPublisherDescription.h"
#import "GEOPDPlaceSummaryLayoutUnitPublisherNameForGuide.h"
#import "GEOPDPlaceSummaryLayoutUnitRatings.h"
#import "GEOPDPlaceSummaryLayoutUnitRecent.h"
#import "GEOPDPlaceSummaryLayoutUnitSecondaryName.h"
#import "GEOPDPlaceSummaryLayoutUnitServerOverride.h"
#import "GEOPDPlaceSummaryLayoutUnitString.h"
#import "GEOPDPlaceSummaryLayoutUnitTransitShields.h"
#import "GEOPDPlaceSummaryLayoutUnitUGCUserSubmittedRecommendations.h"
#import "GEOPDPlaceSummaryLayoutUnitUserGeneratedGuides.h"

@interface GEOPDPlaceSummaryLayoutUnit : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDPlaceSummaryLayoutUnitAddress *_address;
    GEOPDPlaceSummaryLayoutUnit *_alternativeUnit;
    GEOPDPlaceSummaryLayoutUnitCategory *_category;
    GEOPDPlaceSummaryLayoutUnitContainment *_containment;
    GEOPDPlaceSummaryLayoutUnitCuratedGuides *_curatedGuides;
    GEOPDPlaceSummaryLayoutUnitDistance *_distance;
    GEOPDPlaceSummaryLayoutUnitEVChargersNumber *_evChargersNumber;
    GEOPDPlaceSummaryLayoutUnitFactoid *_factoid;
    GEOPDPlaceSummaryLayoutUnitHighlightExtra *_highlightExtra;
    GEOPDPlaceSummaryLayoutUnitHighlightMain *_highlightMain;
    GEOPDPlaceSummaryLayoutUnitHours *_hours;
    GEOPDPlaceSummaryLayoutUnitName *_name;
    GEOPDPlaceSummaryLayoutUnitNumPlacesInGuide *_numPlacesInGuide;
    GEOPDPlaceSummaryLayoutUnitPrice *_price;
    GEOPDPlaceSummaryLayoutUnitPublisherDescription *_publisherDescription;
    GEOPDPlaceSummaryLayoutUnitPublisherNameForGuide *_publisherNameForGuide;
    GEOPDPlaceSummaryLayoutUnitRatings *_ratings;
    GEOPDPlaceSummaryLayoutUnitRecent *_recent;
    GEOPDPlaceSummaryLayoutUnitSecondaryName *_secondaryName;
    GEOPDPlaceSummaryLayoutUnitServerOverride *_serverOverride;
    GEOPDPlaceSummaryLayoutUnitString *_string;
    GEOPDPlaceSummaryLayoutUnitTransitShields *_transitShields;
    GEOPDPlaceSummaryLayoutUnitUGCUserSubmittedRecommendations *_ugcUserSubmittedRecommendations;
    GEOPDPlaceSummaryLayoutUnitUserGeneratedGuides *_userGeneratedGuides;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _layoutPriority;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitAddress *address;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnit *alternativeUnit;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitCategory *category;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitContainment *containment;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitCuratedGuides *curatedGuides;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitDistance *distance;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitEVChargersNumber *evChargersNumber;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitFactoid *factoid;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasAlternativeUnit;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasContainment;
@property (readonly, nonatomic) BOOL hasCuratedGuides;
@property (readonly, nonatomic) BOOL hasDistance;
@property (readonly, nonatomic) BOOL hasEvChargersNumber;
@property (readonly, nonatomic) BOOL hasFactoid;
@property (readonly, nonatomic) BOOL hasHighlightExtra;
@property (readonly, nonatomic) BOOL hasHighlightMain;
@property (readonly, nonatomic) BOOL hasHours;
@property (nonatomic) BOOL hasLayoutPriority;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNumPlacesInGuide;
@property (readonly, nonatomic) BOOL hasPrice;
@property (readonly, nonatomic) BOOL hasPublisherDescription;
@property (readonly, nonatomic) BOOL hasPublisherNameForGuide;
@property (readonly, nonatomic) BOOL hasRatings;
@property (readonly, nonatomic) BOOL hasRecent;
@property (readonly, nonatomic) BOOL hasSecondaryName;
@property (readonly, nonatomic) BOOL hasServerOverride;
@property (readonly, nonatomic) BOOL hasString;
@property (readonly, nonatomic) BOOL hasTransitShields;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUgcUserSubmittedRecommendations;
@property (readonly, nonatomic) BOOL hasUserGeneratedGuides;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitHighlightExtra *highlightExtra;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitHighlightMain *highlightMain;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitHours *hours;
@property (nonatomic) int layoutPriority;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitName *name;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitNumPlacesInGuide *numPlacesInGuide;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitPrice *price;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitPublisherDescription *publisherDescription;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitPublisherNameForGuide *publisherNameForGuide;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitRatings *ratings;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitRecent *recent;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitSecondaryName *secondaryName;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitServerOverride *serverOverride;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitString *string;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitTransitShields *transitShields;
@property (nonatomic) int type;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitUGCUserSubmittedRecommendations *ugcUserSubmittedRecommendations;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutUnitUserGeneratedGuides *userGeneratedGuides;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif