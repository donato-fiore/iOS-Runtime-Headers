// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPQUERY_H
#define GEOMAPQUERY_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOMapRegion.h"
#import "GEOPlaceSearchRequest.h"
#import "GEOLocation.h"

@interface GEOMapQuery : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOSessionID _sessionID;
    GEOMapRegion *_mapRegion;
    GEOPlaceSearchRequest *_placeSearchRequest;
    NSString *_query;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _clientImgFmt;
    int _clientImgMaxHeight;
    int _clientImgMaxWidth;
    int _mapCenterX;
    int _mapCenterY;
    int _mapSpanX;
    int _mapSpanY;
    int _requestType;
    int _tilesizeX;
    int _tilesizeY;
    int _zoomlevel;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif