// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSPBPERIODICLOG_H
#define ATXNOTIFICATIONSPBPERIODICLOG_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXNotificationsPBPeriodicLog : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *dataUnits; // ivar: _dataUnits
@property (nonatomic) BOOL hasPeriodEnd;
@property (nonatomic) BOOL hasPeriodStart;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) NSUInteger periodEnd; // ivar: _periodEnd
@property (nonatomic) NSUInteger periodStart; // ivar: _periodStart
@property (retain, nonatomic) NSString *userId; // ivar: _userId


+(Class)dataUnitType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataUnitAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addDataUnit:(id)arg0 ;
-(void)clearDataUnits;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif