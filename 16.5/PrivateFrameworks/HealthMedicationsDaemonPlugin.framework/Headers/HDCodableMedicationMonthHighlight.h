// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEMEDICATIONMONTHHIGHLIGHT_H
#define HDCODABLEMEDICATIONMONTHHIGHLIGHT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableMedicationMonthHighlight : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *days; // ivar: _days


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)daysAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addDays:(id)arg0 ;
-(void)clearDays;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif