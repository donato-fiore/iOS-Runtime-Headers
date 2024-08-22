// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITENTEREXITINFO_H
#define GEOTRANSITENTEREXITINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOTransitEnterExitInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _accessPointIndex;
    unsigned int _stopIndex;
    unsigned int _transferTime;
    BOOL _displayStop;
    BOOL _uncertainArrival;
    ? _flags;
}


@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) BOOL displayStop;
@property (nonatomic) BOOL hasAccessPointIndex;
@property (nonatomic) BOOL hasDisplayStop;
@property (nonatomic) BOOL hasStopIndex;
@property (nonatomic) BOOL hasTransferTime;
@property (nonatomic) BOOL hasUncertainArrival;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic) BOOL uncertainArrival;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif