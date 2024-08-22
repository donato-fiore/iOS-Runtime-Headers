// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPRESOLUTION_H
#define GEORPRESOLUTION_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOMapRegion.h"

@interface GEORPResolution : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOMapRegion *_displayRegion;
    NSString *_localizedAlertText;
    NSMutableArray *_localizedChangeLists;
    NSString *_localizedDescription;
    CGFloat _resolutionDate;
    NSUInteger _transitLineMuid;
    NSMutableArray *_updatedPlaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _displayStyle;
    ? _flags;
}


@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (nonatomic) int displayStyle;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasDisplayStyle;
@property (readonly, nonatomic) BOOL hasLocalizedAlertText;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (nonatomic) BOOL hasResolutionDate;
@property (nonatomic) BOOL hasTransitLineMuid;
@property (retain, nonatomic) NSString *localizedAlertText;
@property (retain, nonatomic) NSMutableArray *localizedChangeLists;
@property (retain, nonatomic) NSString *localizedDescription;
@property (nonatomic) CGFloat resolutionDate;
@property (nonatomic) NSUInteger transitLineMuid;
@property (retain, nonatomic) NSMutableArray *updatedPlaces;


+(BOOL)isValid:(id)arg0 ;
+(Class)localizedChangeListType;
+(Class)updatedPlaceType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayStyleAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizedChangeListAtIndex:(NSUInteger)arg0 ;
-(id)updatedPlaceAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDisplayStyle:(id)arg0 ;
-(void)addLocalizedChangeList:(id)arg0 ;
-(void)addUpdatedPlace:(id)arg0 ;
-(void)clearLocalizedChangeLists;
-(void)clearUpdatedPlaces;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif