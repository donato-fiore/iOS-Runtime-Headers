// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATEMAPVIEW_H
#define GEOLOGMSGSTATEMAPVIEW_H

@class PBCodable;
@protocol NSCopying;


#import "GEOMapRegion.h"

@interface GEOLogMsgStateMapView : PBCodable <NSCopying>

 {
    GEOMapRegion *_mapRegion;
    CGFloat _pitch;
    CGFloat _styleZoomLevel;
    CGFloat _zoomLevel;
    int _mapType;
    int _viewMode;
    BOOL _isAdvancedMap;
    BOOL _isGlobeProjection;
    ? _flags;
}


@property (nonatomic) BOOL hasIsAdvancedMap;
@property (nonatomic) BOOL hasIsGlobeProjection;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) BOOL hasStyleZoomLevel;
@property (nonatomic) BOOL hasViewMode;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) BOOL isAdvancedMap;
@property (nonatomic) BOOL isGlobeProjection;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType;
@property (nonatomic) CGFloat pitch;
@property (nonatomic) CGFloat styleZoomLevel;
@property (nonatomic) int viewMode;
@property (nonatomic) CGFloat zoomLevel;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapTypeAsString:(int)arg0 ;
-(id)viewModeAsString:(int)arg0 ;
-(int)StringAsMapType:(id)arg0 ;
-(int)StringAsViewMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif