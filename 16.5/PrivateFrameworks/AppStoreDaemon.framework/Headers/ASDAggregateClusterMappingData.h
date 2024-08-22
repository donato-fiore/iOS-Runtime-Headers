// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDAGGREGATECLUSTERMAPPINGDATA_H
#define ASDAGGREGATECLUSTERMAPPINGDATA_H

@class PBCodable;
@protocol NSCopying;



@interface ASDAggregateClusterMappingData : PBCodable <NSCopying>

 {
    ? _clusterAppCounts;
    ? _clusterIDs;
    ? _clusterVersions;
    ? _weightedAppForgroundUsages;
    ? _weightedAppLaunches;
}


@property (readonly, nonatomic) *int clusterAppCounts;
@property (readonly, nonatomic) NSUInteger clusterAppCountsCount;
@property (readonly, nonatomic) *int clusterIDs;
@property (readonly, nonatomic) NSUInteger clusterIDsCount;
@property (readonly, nonatomic) *int clusterVersions;
@property (readonly, nonatomic) NSUInteger clusterVersionsCount;
@property (nonatomic) int encodingVersion; // ivar: _encodingVersion
@property (readonly, nonatomic) *int weightedAppForgroundUsages;
@property (readonly, nonatomic) NSUInteger weightedAppForgroundUsagesCount;
@property (readonly, nonatomic) *int weightedAppLaunches;
@property (readonly, nonatomic) NSUInteger weightedAppLaunchesCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)clusterAppCountAtIndex:(NSUInteger)arg0 ;
-(int)clusterIDAtIndex:(NSUInteger)arg0 ;
-(int)clusterVersionAtIndex:(NSUInteger)arg0 ;
-(int)weightedAppForgroundUsageAtIndex:(NSUInteger)arg0 ;
-(int)weightedAppLaunchesAtIndex:(NSUInteger)arg0 ;
-(void)addClusterAppCount:(int)arg0 ;
-(void)addClusterID:(int)arg0 ;
-(void)addClusterVersion:(int)arg0 ;
-(void)addWeightedAppForgroundUsage:(int)arg0 ;
-(void)addWeightedAppLaunches:(int)arg0 ;
-(void)clearClusterAppCounts;
-(void)clearClusterIDs;
-(void)clearClusterVersions;
-(void)clearWeightedAppForgroundUsages;
-(void)clearWeightedAppLaunches;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif