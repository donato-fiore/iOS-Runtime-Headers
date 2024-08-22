// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDENTITY_H
#define GEOPDENTITY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOLocalizedString.h"
#import "GEOStyleAttributes.h"

@interface GEOPDEntity : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _placeLookupCategorys;
    NSMutableArray *_altFaxs;
    NSMutableArray *_altTelephones;
    NSMutableArray *_altUrls;
    NSMutableArray *_alternateSearchableNames;
    NSUInteger _areaHighlightId;
    NSUInteger _brandMuid;
    NSUInteger _buildingId;
    NSString *_fax;
    NSUInteger _globalBrandMuid;
    NSMutableArray *_localizedCategorys;
    NSString *_mapsCategoryId;
    NSMutableArray *_names;
    GEOLocalizedString *_secondaryName;
    GEOLocalizedString *_secondarySpokenName;
    NSMutableArray *_spokenNames;
    GEOStyleAttributes *_styleAttributes;
    NSString *_telephone;
    NSString *_url;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _capacity;
    int _displayStyle;
    int _placeDisplayType;
    int _searchSection;
    int _type;
    BOOL _altTelephoneAdsOptOut;
    BOOL _enableRapLightweightFeedback;
    BOOL _isDisputed;
    BOOL _isPermanentlyClosed;
    BOOL _isStandaloneBrand;
    BOOL _telephoneAdsOptOut;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *altFaxs;
@property (nonatomic) BOOL altTelephoneAdsOptOut;
@property (retain, nonatomic) NSMutableArray *altTelephones;
@property (retain, nonatomic) NSMutableArray *altUrls;
@property (retain, nonatomic) NSMutableArray *alternateSearchableNames;
@property (nonatomic) NSUInteger areaHighlightId;
@property (nonatomic) NSUInteger brandMuid;
@property (nonatomic) NSUInteger buildingId;
@property (nonatomic) int capacity;
@property (nonatomic) int displayStyle;
@property (nonatomic) BOOL enableRapLightweightFeedback;
@property (retain, nonatomic) NSString *fax;
@property (nonatomic) NSUInteger globalBrandMuid;
@property (nonatomic) BOOL hasAltTelephoneAdsOptOut;
@property (nonatomic) BOOL hasAreaHighlightId;
@property (nonatomic) BOOL hasBrandMuid;
@property (nonatomic) BOOL hasBuildingId;
@property (nonatomic) BOOL hasCapacity;
@property (nonatomic) BOOL hasDisplayStyle;
@property (nonatomic) BOOL hasEnableRapLightweightFeedback;
@property (readonly, nonatomic) BOOL hasFax;
@property (nonatomic) BOOL hasGlobalBrandMuid;
@property (nonatomic) BOOL hasIsDisputed;
@property (nonatomic) BOOL hasIsPermanentlyClosed;
@property (nonatomic) BOOL hasIsStandaloneBrand;
@property (readonly, nonatomic) BOOL hasMapsCategoryId;
@property (nonatomic) BOOL hasPlaceDisplayType;
@property (nonatomic) BOOL hasSearchSection;
@property (readonly, nonatomic) BOOL hasSecondaryName;
@property (readonly, nonatomic) BOOL hasSecondarySpokenName;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (readonly, nonatomic) BOOL hasTelephone;
@property (nonatomic) BOOL hasTelephoneAdsOptOut;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUrl;
@property (readonly, nonatomic) BOOL hasWalletCategoryId;
@property (nonatomic) BOOL isDisputed;
@property (nonatomic) BOOL isPermanentlyClosed;
@property (nonatomic) BOOL isStandaloneBrand;
@property (retain, nonatomic) NSMutableArray *localizedCategorys;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (retain, nonatomic) NSMutableArray *names;
@property (nonatomic) int placeDisplayType;
@property (readonly, nonatomic) *int placeLookupCategorys;
@property (readonly, nonatomic) NSUInteger placeLookupCategorysCount;
@property (nonatomic) int searchSection;
@property (retain, nonatomic) GEOLocalizedString *secondaryName;
@property (retain, nonatomic) GEOLocalizedString *secondarySpokenName;
@property (retain, nonatomic) NSMutableArray *spokenNames;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSString *telephone;
@property (nonatomic) BOOL telephoneAdsOptOut;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *walletCategoryId;


+(BOOL)isValid:(id)arg0 ;
+(Class)altFaxType;
+(Class)altTelephoneType;
+(Class)altUrlType;
+(Class)alternateSearchableNameType;
+(Class)localizedCategoryType;
+(Class)nameType;
+(Class)spokenNameType;
+(id)entityForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)altFaxAtIndex:(NSUInteger)arg0 ;
-(id)altTelephoneAtIndex:(NSUInteger)arg0 ;
-(id)altUrlAtIndex:(NSUInteger)arg0 ;
-(id)alternateSearchableNameAtIndex:(NSUInteger)arg0 ;
-(id)bestLocalizedName;
-(id)bestLocalizedString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayStyleAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizedCategoryAtIndex:(NSUInteger)arg0 ;
-(id)nameAtIndex:(NSUInteger)arg0 ;
-(id)placeDisplayTypeAsString:(int)arg0 ;
-(id)placeLookupCategorysAsString:(int)arg0 ;
-(id)searchSectionAsString:(int)arg0 ;
-(id)spokenNameAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsDisplayStyle:(id)arg0 ;
-(int)StringAsPlaceDisplayType:(id)arg0 ;
-(int)StringAsPlaceLookupCategorys:(id)arg0 ;
-(int)StringAsSearchSection:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)placeLookupCategoryAtIndex:(NSUInteger)arg0 ;
-(void)addAltFax:(id)arg0 ;
-(void)addAltTelephone:(id)arg0 ;
-(void)addAltUrl:(id)arg0 ;
-(void)addAlternateSearchableName:(id)arg0 ;
-(void)addLocalizedCategory:(id)arg0 ;
-(void)addName:(id)arg0 ;
-(void)addPlaceLookupCategory:(int)arg0 ;
-(void)addSpokenName:(id)arg0 ;
-(void)clearAltFaxs;
-(void)clearAltTelephones;
-(void)clearAltUrls;
-(void)clearAlternateSearchableNames;
-(void)clearLocalizedCategorys;
-(void)clearNames;
-(void)clearPlaceLookupCategorys;
-(void)clearSpokenNames;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif