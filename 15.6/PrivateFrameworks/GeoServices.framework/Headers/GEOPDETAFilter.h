// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDETAFILTER_H
#define GEOPDETAFILTER_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOAutomobileOptions.h"
#import "GEOClientCapabilities.h"
#import "GEOCyclingOptions.h"
#import "GEOTransitOptions.h"
#import "GEOWalkingOptions.h"

@interface GEOPDETAFilter : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _transportTypes;
    GEOAutomobileOptions *_automobileOptions;
    GEOClientCapabilities *_clientCapabilities;
    GEOCyclingOptions *_cyclingOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _includeEtaRouteIncidents;
    BOOL _includeHistoricTravelTime;
    BOOL _includeRouteTrafficDetail;
    ? _flags;
}




+(id)_etaFilterWithTransportTypes:(*int)arg0 transportTypesCount:(NSUInteger)arg1 automobileOptions:(id)arg2 transitOptions:(id)arg3 walkingOptions:(id)arg4 cyclingOptions:(id)arg5 ;
+(id)etaFilterForRouteAttributes:(id)arg0 ;
+(id)etaFilterForTraits:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif