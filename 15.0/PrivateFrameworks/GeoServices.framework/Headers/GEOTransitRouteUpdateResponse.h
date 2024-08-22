// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITROUTEUPDATERESPONSE_H
#define GEOTRANSITROUTEUPDATERESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPDDatasetABStatus.h"
#import "GEOTransitRouteUpdateConfiguration.h"

@interface GEOTransitRouteUpdateResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTimepoint _timepointUsed;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSData *_responseId;
    GEOTransitRouteUpdateConfiguration *_routeUpdateConfiguration;
    NSMutableArray *_routeUpdates;
    NSString *_transitDataVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _status;
    ? _flags;
}


@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasResponseId;
@property (readonly, nonatomic) BOOL hasRouteUpdateConfiguration;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimepointUsed;
@property (readonly, nonatomic) BOOL hasTransitDataVersion;
@property (retain, nonatomic) NSData *responseId;
@property (retain, nonatomic) GEOTransitRouteUpdateConfiguration *routeUpdateConfiguration;
@property (retain, nonatomic) NSMutableArray *routeUpdates;
@property (nonatomic) int status;
@property (nonatomic) GEOTimepoint timepointUsed;
@property (retain, nonatomic) NSString *transitDataVersion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)routeUpdateType;
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
-(id)routeUpdateAtIndex:(NSUInteger)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addRouteUpdate:(id)arg0 ;
-(void)clearRouteUpdates;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif