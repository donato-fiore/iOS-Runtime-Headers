// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVIGATIONSCHEDULEDTRANSITLINKSUMMARY_H
#define GEONAVIGATIONSCHEDULEDTRANSITLINKSUMMARY_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEONavigationTransitStopSummary.h"

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSUInteger _lineID;
    CGFloat _scheduledArrival;
    CGFloat _scheduledDeparture;
    GEONavigationTransitStopSummary *_stopFrom;
    GEONavigationTransitStopSummary *_stopTo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (nonatomic) BOOL hasLineID;
@property (nonatomic) BOOL hasScheduledArrival;
@property (nonatomic) BOOL hasScheduledDeparture;
@property (readonly, nonatomic) BOOL hasStopFrom;
@property (readonly, nonatomic) BOOL hasStopTo;
@property (nonatomic) NSUInteger lineID;
@property (nonatomic) CGFloat scheduledArrival;
@property (nonatomic) CGFloat scheduledDeparture;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopFrom;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopTo;


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
-(id)initWithTransitTripRouteStep:(id)arg0 originSummary:(id)arg1 destinationSummary:(id)arg2 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif