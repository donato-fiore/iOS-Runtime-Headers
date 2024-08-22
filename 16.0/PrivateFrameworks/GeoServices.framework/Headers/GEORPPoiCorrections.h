// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPPOICORRECTIONS_H
#define GEORPPOICORRECTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEORPAddressCorrections.h"
#import "GEORPAmenityCorrections.h"
#import "GEORPCategoryCorrections.h"
#import "GEORPPlaceContainmentCorrections.h"

@interface GEORPPoiCorrections : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCategoryCorrections *_category;
    GEORPPlaceContainmentCorrections *_containmentCorrections;
    NSString *_hoursText;
    NSString *_name;
    NSString *_originalName;
    NSString *_originalPhone;
    NSString *_originalUrl;
    NSString *_phone;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _flagBadCuratedCollectionDescription;
    BOOL _flagBrokenCuratedCollectionUrl;
    BOOL _flagHoursIncorrect;
    BOOL _flagNotAtThisAddress;
    ? _flags;
}


@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (retain, nonatomic) GEORPAmenityCorrections *amenity;
@property (retain, nonatomic) NSMutableArray *businessHours;
@property (retain, nonatomic) GEORPCategoryCorrections *category;
@property (retain, nonatomic) GEORPPlaceContainmentCorrections *containmentCorrections;
@property (nonatomic) BOOL flagBadCuratedCollectionDescription;
@property (nonatomic) BOOL flagBrokenCuratedCollectionUrl;
@property (nonatomic) BOOL flagHoursIncorrect;
@property (nonatomic) BOOL flagNotAtThisAddress;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasAmenity;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasContainmentCorrections;
@property (nonatomic) BOOL hasFlagBadCuratedCollectionDescription;
@property (nonatomic) BOOL hasFlagBrokenCuratedCollectionUrl;
@property (nonatomic) BOOL hasFlagHoursIncorrect;
@property (nonatomic) BOOL hasFlagNotAtThisAddress;
@property (readonly, nonatomic) BOOL hasHoursText;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasOriginalName;
@property (readonly, nonatomic) BOOL hasOriginalPhone;
@property (readonly, nonatomic) BOOL hasOriginalUrl;
@property (readonly, nonatomic) BOOL hasPhone;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *hoursText;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *originalName;
@property (retain, nonatomic) NSString *originalPhone;
@property (retain, nonatomic) NSString *originalUrl;
@property (retain, nonatomic) NSString *phone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *url;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)businessHoursAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addBusinessHours:(id)arg0 ;
-(void)clearBusinessHours;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif