// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATEMAPVIEWLOCATION_H
#define GEOLOGMSGSTATEMAPVIEWLOCATION_H

@class PBCodable;
@protocol NSCopying;


#import "GEOTouristInfo.h"

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying>

 {
    GEOTouristInfo *_touristInfo;
    int _locationBucket;
    BOOL _isCurrentLocationInViewport;
    ? _flags;
}


@property (nonatomic) BOOL hasIsCurrentLocationInViewport;
@property (nonatomic) BOOL hasLocationBucket;
@property (readonly, nonatomic) BOOL hasTouristInfo;
@property (nonatomic) BOOL isCurrentLocationInViewport;
@property (nonatomic) int locationBucket;
@property (retain, nonatomic) GEOTouristInfo *touristInfo;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)locationBucketAsString:(int)arg0 ;
-(int)StringAsLocationBucket:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif