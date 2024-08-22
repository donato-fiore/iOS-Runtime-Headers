// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEPLANNINGINFO_H
#define GEOROUTEPLANNINGINFO_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOAdvisoriesInfo.h"
#import "GEOFormattedString.h"
#import "GEOPBTransitArtwork.h"
#import "GEORouteInformation.h"

@interface GEORoutePlanningInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAdvisoriesInfo *_advisoriesInfo;
    GEOFormattedString *_infrastructureDescription;
    GEOPBTransitArtwork *_labelArtwork;
    GEOFormattedString *_labelDetailText;
    GEORouteInformation *_routePlanningDescription;
    GEOFormattedString *_trafficDescriptionText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOAdvisoriesInfo *advisoriesInfo;
@property (readonly, nonatomic) BOOL hasAdvisoriesInfo;
@property (readonly, nonatomic) BOOL hasInfrastructureDescription;
@property (readonly, nonatomic) BOOL hasLabelArtwork;
@property (readonly, nonatomic) BOOL hasLabelDetailText;
@property (readonly, nonatomic) BOOL hasRoutePlanningDescription;
@property (readonly, nonatomic) BOOL hasTrafficDescriptionText;
@property (retain, nonatomic) GEOFormattedString *infrastructureDescription;
@property (retain, nonatomic) GEOPBTransitArtwork *labelArtwork;
@property (retain, nonatomic) GEOFormattedString *labelDetailText;
@property (retain, nonatomic) GEORouteInformation *routePlanningDescription;
@property (retain, nonatomic) GEOFormattedString *trafficDescriptionText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif