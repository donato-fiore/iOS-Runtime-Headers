// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSTOREFRONTVIEW_H
#define GEOPDSTOREFRONTVIEW_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOPDGeographicCoordinate.h"
#import "GEOPDOrientedPosition.h"
#import "GEOPDPhotoPosition.h"

@interface GEOPDStorefrontView : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSUInteger _imdataId;
    GEOPDGeographicCoordinate *_lookAtGeo;
    GEOPDOrientedPosition *_lookAt;
    GEOPDPhotoPosition *_photoPosition;
    GEOPDGeographicCoordinate *_viewpointGeo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (nonatomic) BOOL hasImdataId;
@property (readonly, nonatomic) BOOL hasLookAt;
@property (readonly, nonatomic) BOOL hasLookAtGeo;
@property (readonly, nonatomic) BOOL hasPhotoPosition;
@property (readonly, nonatomic) BOOL hasViewpointGeo;
@property (nonatomic) NSUInteger imdataId;
@property (retain, nonatomic) GEOPDOrientedPosition *lookAt;
@property (retain, nonatomic) GEOPDGeographicCoordinate *lookAtGeo;
@property (retain, nonatomic) GEOPDPhotoPosition *photoPosition;
@property (retain, nonatomic) GEOPDGeographicCoordinate *viewpointGeo;


+(BOOL)isValid:(id)arg0 ;
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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif