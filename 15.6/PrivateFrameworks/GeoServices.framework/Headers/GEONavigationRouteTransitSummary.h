// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONAVIGATIONROUTETRANSITSUMMARY_H
#define GEONAVIGATIONROUTETRANSITSUMMARY_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_possibleStops;
    NSMutableArray *_scheduledLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *possibleStops;
@property (retain, nonatomic) NSMutableArray *scheduledLinks;


+(BOOL)isValid:(id)arg0 ;
+(Class)possibleStopType;
+(Class)scheduledLinkType;
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
-(id)initWithRoute:(id)arg0 ;
-(id)jsonRepresentation;
-(id)possibleStopAtIndex:(NSUInteger)arg0 ;
-(id)scheduledLinkAtIndex:(NSUInteger)arg0 ;
-(void)addPossibleStop:(id)arg0 ;
-(void)addScheduledLink:(id)arg0 ;
-(void)clearPossibleStops;
-(void)clearScheduledLinks;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif