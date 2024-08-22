// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOBUSINESS_H
#define GEOBUSINESS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOBusiness : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSUInteger _uID;
    NSString *_uRL;
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSMutableArray *_photos;
    NSMutableArray *_placeDataAmendments;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isClosed;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *attributeKeyValues;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *categorys;
@property (retain, nonatomic) GEOLatLng *center;
@property (readonly, nonatomic) BOOL hasCenter;
@property (nonatomic) BOOL hasIsClosed;
@property (readonly, nonatomic) BOOL hasMapsURL;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (readonly, nonatomic) BOOL hasTelephone;
@property (nonatomic) BOOL hasUID;
@property (readonly, nonatomic) BOOL hasURL;
@property (nonatomic) BOOL isClosed;
@property (retain, nonatomic) NSMutableArray *localizedCategories;
@property (retain, nonatomic) NSString *mapsURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *openHours;
@property (retain, nonatomic) NSString *phoneticName;
@property (retain, nonatomic) NSMutableArray *photos;
@property (retain, nonatomic) NSMutableArray *placeDataAmendments;
@property (retain, nonatomic) NSMutableArray *ratings;
@property (retain, nonatomic) NSMutableArray *sources;
@property (retain, nonatomic) NSMutableArray *starRatings;
@property (retain, nonatomic) NSString *telephone;
@property (nonatomic) NSUInteger uID;
@property (retain, nonatomic) NSString *uRL;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)attributeKeyValueType;
+(Class)attributionType;
+(Class)categoryType;
+(Class)photoType;
+(Class)placeDataAmendmentType;
+(Class)ratingType;
+(Class)sourceType;
+(Class)starRatingType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeKeyValueAtIndex:(NSUInteger)arg0 ;
-(id)attributionAtIndex:(NSUInteger)arg0 ;
-(id)categoryAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithBusinessURL:(id)arg0 phoneNumber:(id)arg1 muid:(NSUInteger)arg2 attributionID:(id)arg3 sampleSizeForUserRatingScore:(unsigned int)arg4 normalizedUserRatingScore:(float)arg5 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithPlaceDataEntity:(id)arg0 rating:(id)arg1 hours:(id)arg2 reviews:(id)arg3 photos:(id)arg4 entityAttribution:(id)arg5 ;
-(id)jsonRepresentation;
-(id)localizedCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)openHoursAtIndex:(NSUInteger)arg0 ;
-(id)photoAtIndex:(NSUInteger)arg0 ;
-(id)placeDataAmendmentAtIndex:(NSUInteger)arg0 ;
-(id)ratingAtIndex:(NSUInteger)arg0 ;
-(id)sourceAtIndex:(NSUInteger)arg0 ;
-(id)starRatingAtIndex:(NSUInteger)arg0 ;
-(void)addAttributeKeyValue:(id)arg0 ;
-(void)addAttribution:(id)arg0 ;
-(void)addCategory:(id)arg0 ;
-(void)addLocalizedCategories:(id)arg0 ;
-(void)addOpenHours:(id)arg0 ;
-(void)addPhoto:(id)arg0 ;
-(void)addPlaceDataAmendment:(id)arg0 ;
-(void)addRating:(id)arg0 ;
-(void)addSource:(id)arg0 ;
-(void)addStarRating:(id)arg0 ;
-(void)clearAttributeKeyValues;
-(void)clearAttributions;
-(void)clearCategorys;
-(void)clearLocalizedCategories;
-(void)clearOpenHours;
-(void)clearPhotos;
-(void)clearPlaceDataAmendments;
-(void)clearRatings;
-(void)clearSources;
-(void)clearStarRatings;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif