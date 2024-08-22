// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSHOURSMESSAGE_H
#define BCSHOURSMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface BCSHoursMessage : PBCodable <NSCopying>

 {
    ? _days;
}


@property (readonly, nonatomic) *int days;
@property (readonly, nonatomic) NSUInteger daysCount;
@property (retain, nonatomic) NSMutableArray *timeRanges; // ivar: _timeRanges


+(Class)timeRangeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)daysAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)timeRangeAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDays:(id)arg0 ;
-(int)dayAtIndex:(NSUInteger)arg0 ;
-(void)addDay:(int)arg0 ;
-(void)addTimeRange:(id)arg0 ;
-(void)clearDays;
-(void)clearTimeRanges;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif