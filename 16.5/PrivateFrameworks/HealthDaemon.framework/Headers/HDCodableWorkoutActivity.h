// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEWORKOUTACTIVITY_H
#define HDCODABLEWORKOUTACTIVITY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "HDCodableWorkoutConfiguration.h"
#import "HDCodableMetadataDictionary.h"

@interface HDCodableWorkoutActivity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HDCodableWorkoutConfiguration *configuration; // ivar: _configuration
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndDate;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadata; // ivar: _metadata
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) NSMutableArray *statistics; // ivar: _statistics
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(id)codableForWorkoutActivity:(id)arg0 ;
+(id)codableStatisticsForActivity:(id)arg0 ;
+(id)codablesForWorkoutActivities:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statisticsAtIndex:(NSUInteger)arg0 ;
-(void)addStatistics:(id)arg0 ;
-(void)clearStatistics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif