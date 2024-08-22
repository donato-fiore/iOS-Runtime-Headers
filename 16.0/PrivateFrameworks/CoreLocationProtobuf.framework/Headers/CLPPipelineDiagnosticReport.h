// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPPIPELINEDIAGNOSTICREPORT_H
#define CLPPIPELINEDIAGNOSTICREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface CLPPipelineDiagnosticReport : PBCodable <NSCopying>

 {
    ? _prbOnFloorEstimates;
    ? _has;
}


@property (nonatomic) BOOL hasPfYieldStatusBeforeCalculatePose;
@property (nonatomic) BOOL hasPrbCoarseIndoorSaysIndoor;
@property (nonatomic) BOOL hasPrbGpsSaysIndoor;
@property (nonatomic) BOOL hasPrbInjectionGainRetryLimitOk;
@property (nonatomic) BOOL hasPrbInjectionOccupancyRetryLimitOk;
@property (nonatomic) BOOL hasPrbInlierEstimate;
@property (nonatomic) BOOL hasPrbLocalizerIoWrapperSaysWifiOk;
@property (nonatomic) BOOL hasPrbOnFloorsEstimate;
@property (nonatomic) BOOL hasPrbParticleFilterSaysYield;
@property (nonatomic) BOOL hasPrbPipelinedSaysYield;
@property (nonatomic) BOOL hasPrbWifiSaysIndoor;
@property (nonatomic) BOOL hasYieldStatusBeforeCalculatePose;
@property (nonatomic) BOOL hasYieldType;
@property (nonatomic) int pfYieldStatusBeforeCalculatePose; // ivar: _pfYieldStatusBeforeCalculatePose
@property (nonatomic) CGFloat prbCoarseIndoorSaysIndoor; // ivar: _prbCoarseIndoorSaysIndoor
@property (nonatomic) CGFloat prbGpsSaysIndoor; // ivar: _prbGpsSaysIndoor
@property (nonatomic) CGFloat prbInjectionGainRetryLimitOk; // ivar: _prbInjectionGainRetryLimitOk
@property (nonatomic) CGFloat prbInjectionOccupancyRetryLimitOk; // ivar: _prbInjectionOccupancyRetryLimitOk
@property (nonatomic) CGFloat prbInlierEstimate; // ivar: _prbInlierEstimate
@property (nonatomic) CGFloat prbLocalizerIoWrapperSaysWifiOk; // ivar: _prbLocalizerIoWrapperSaysWifiOk
@property (readonly, nonatomic) *CGFloat prbOnFloorEstimates;
@property (readonly, nonatomic) NSUInteger prbOnFloorEstimatesCount;
@property (nonatomic) CGFloat prbOnFloorsEstimate; // ivar: _prbOnFloorsEstimate
@property (nonatomic) CGFloat prbParticleFilterSaysYield; // ivar: _prbParticleFilterSaysYield
@property (nonatomic) CGFloat prbPipelinedSaysYield; // ivar: _prbPipelinedSaysYield
@property (nonatomic) CGFloat prbWifiSaysIndoor; // ivar: _prbWifiSaysIndoor
@property (nonatomic) int yieldStatusBeforeCalculatePose; // ivar: _yieldStatusBeforeCalculatePose
@property (nonatomic) int yieldType; // ivar: _yieldType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)prbOnFloorEstimateAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pfYieldStatusBeforeCalculatePoseAsString:(int)arg0 ;
-(id)yieldStatusBeforeCalculatePoseAsString:(int)arg0 ;
-(id)yieldTypeAsString:(int)arg0 ;
-(int)StringAsPfYieldStatusBeforeCalculatePose:(id)arg0 ;
-(int)StringAsYieldStatusBeforeCalculatePose:(id)arg0 ;
-(int)StringAsYieldType:(id)arg0 ;
-(void)addPrbOnFloorEstimate:(CGFloat)arg0 ;
-(void)clearPrbOnFloorEstimates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif