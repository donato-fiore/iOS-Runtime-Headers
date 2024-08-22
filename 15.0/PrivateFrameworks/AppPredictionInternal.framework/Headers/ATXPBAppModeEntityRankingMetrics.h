// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBAPPMODEENTITYRANKINGMETRICS_H
#define ATXPBAPPMODEENTITYRANKINGMETRICS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBAppModeEntityRankingMetrics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activityState; // ivar: _activityState
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasActivityState;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) BOOL hasNumDaysSinceStartOfMetricsLogging;
@property (nonatomic) BOOL hasRank;
@property (retain, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) NSString *numDaysSinceStartOfMetricsLogging; // ivar: _numDaysSinceStartOfMetricsLogging
@property (nonatomic) unsigned int rank; // ivar: _rank


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif