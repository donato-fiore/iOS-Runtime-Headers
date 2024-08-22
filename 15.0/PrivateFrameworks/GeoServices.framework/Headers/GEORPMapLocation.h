// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPMAPLOCATION_H
#define GEORPMAPLOCATION_H

@class PBCodable, PBDataReader, NSData, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOPDViewportInfo.h"

@interface GEORPMapLocation : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSData *_image;
    NSString *_mapScreenshotId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _zoomLevel;
    ? _flags;
}


@property (retain, nonatomic) GEOLatLng *coordinate;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasMapScreenshotId;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) BOOL hasZoomLevel;
@property (retain, nonatomic) NSData *image;
@property (retain, nonatomic) NSString *mapScreenshotId;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) float zoomLevel;


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
-(void)_setMapMode:(int)arg0 region:(id)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif