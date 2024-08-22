// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSHOURSPERIODMESSAGE_H
#define BCSHOURSPERIODMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface BCSHoursPeriodMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *hours; // ivar: _hours


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)hoursAtIndex:(NSUInteger)arg0 ;
-(void)addHours:(id)arg0 ;
-(void)clearHours;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif