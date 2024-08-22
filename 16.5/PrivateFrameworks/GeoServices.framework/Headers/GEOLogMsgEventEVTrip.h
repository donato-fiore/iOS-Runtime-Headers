// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTEVTRIP_H
#define GEOLOGMSGEVENTEVTRIP_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOLogMsgEventEVTrip : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_chargeLocationDetails;
    NSString *_metro;
    NSMutableArray *_stopAddedDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _outOfCharge;
    BOOL _outOfRangeAlertDisplayed;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *chargeLocationDetails;
@property (readonly, nonatomic) BOOL hasMetro;
@property (nonatomic) BOOL hasOutOfCharge;
@property (nonatomic) BOOL hasOutOfRangeAlertDisplayed;
@property (retain, nonatomic) NSString *metro;
@property (nonatomic) BOOL outOfCharge;
@property (nonatomic) BOOL outOfRangeAlertDisplayed;
@property (retain, nonatomic) NSMutableArray *stopAddedDetails;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)chargeLocationDetailsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)stopAddedDetailsAtIndex:(NSUInteger)arg0 ;
-(void)addChargeLocationDetails:(id)arg0 ;
-(void)addStopAddedDetails:(id)arg0 ;
-(void)clearChargeLocationDetails;
-(void)clearStopAddedDetails;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif