// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTCURATEDCOLLECTIONUSAGE_H
#define GEOLOGMSGEVENTCURATEDCOLLECTIONUSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "GEOTouristInfo.h"

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying>

 {
    CGFloat _collectionFirstViewedDate;
    CGFloat _collectionLastViewedDate;
    NSUInteger _collectionMuid;
    GEOTouristInfo *_touristInfo;
    unsigned int _viewsToday;
    ? _flags;
}


@property (nonatomic) CGFloat collectionFirstViewedDate;
@property (nonatomic) CGFloat collectionLastViewedDate;
@property (nonatomic) NSUInteger collectionMuid;
@property (nonatomic) BOOL hasCollectionFirstViewedDate;
@property (nonatomic) BOOL hasCollectionLastViewedDate;
@property (nonatomic) BOOL hasCollectionMuid;
@property (readonly, nonatomic) BOOL hasTouristInfo;
@property (nonatomic) BOOL hasViewsToday;
@property (retain, nonatomic) GEOTouristInfo *touristInfo;
@property (nonatomic) unsigned int viewsToday;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif