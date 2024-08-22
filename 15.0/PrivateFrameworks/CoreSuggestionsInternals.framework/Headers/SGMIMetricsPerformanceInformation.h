// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSPERFORMANCEINFORMATION_H
#define SGMIMETRICSPERFORMANCEINFORMATION_H

@class PBCodable;
@protocol NSCopying;


#import "SGMIMetricsSubmodelAgeVector.h"
#import "SGMIMetricsTrialMetadata.h"

@interface SGMIMetricsPerformanceInformation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger cTSTimeBiomeAggregation; // ivar: _cTSTimeBiomeAggregation
@property (nonatomic) NSUInteger cTSTimeSubmodelUpdate; // ivar: _cTSTimeSubmodelUpdate
@property (nonatomic) BOOL hasCTSTimeBiomeAggregation;
@property (nonatomic) BOOL hasCTSTimeSubmodelUpdate;
@property (nonatomic) BOOL hasIsSubmodelRebuilt;
@property (readonly, nonatomic) BOOL hasOldestUpdatedSubmodelAge;
@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (nonatomic) BOOL isSubmodelRebuilt; // ivar: _isSubmodelRebuilt
@property (retain, nonatomic) SGMIMetricsSubmodelAgeVector *oldestUpdatedSubmodelAge; // ivar: _oldestUpdatedSubmodelAge
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata; // ivar: _trialMetadata


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