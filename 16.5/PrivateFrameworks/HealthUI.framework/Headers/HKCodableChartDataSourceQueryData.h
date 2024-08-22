// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLECHARTDATASOURCEQUERYDATA_H
#define HKCODABLECHARTDATASOURCEQUERYDATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "HKCodableDateComponents.h"

@interface HKCodableChartDataSourceQueryData : PBCodable <NSCopying>

 {
    APPLE_172 _has;
}


@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) NSInteger firstWeekday; // ivar: _firstWeekday
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasFirstWeekday;
@property (readonly, nonatomic) BOOL hasQueryDataObject;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSData *queryDataObject; // ivar: _queryDataObject
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval; // ivar: _statisticsInterval
@property (retain, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif