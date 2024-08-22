// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIMETRICSUPDATEPROCESSINFORMATION_H
#define SGMIMETRICSUPDATEPROCESSINFORMATION_H

@class PBCodable;
@protocol NSCopying;


#import "SGMIMetricsTrialMetadata.h"
#import "SGMIMetricsSubmodelsStats.h"

@interface SGMIMetricsUpdateProcessInformation : PBCodable <NSCopying>

 {
    ? _ctsJobConstraints;
    ? _has;
}


@property (retain, nonatomic) SGMIMetricsTrialMetadata *backgroundTrialMetadata; // ivar: _backgroundTrialMetadata
@property (nonatomic) NSUInteger biomeAggregationPerformanceInMilliSeconds; // ivar: _biomeAggregationPerformanceInMilliSeconds
@property (readonly, nonatomic) *int ctsJobConstraints;
@property (readonly, nonatomic) NSUInteger ctsJobConstraintsCount;
@property (nonatomic) NSUInteger cumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds; // ivar: _cumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds
@property (nonatomic) unsigned int daysAvailableDuringIncrementalUpdate; // ivar: _daysAvailableDuringIncrementalUpdate
@property (nonatomic) unsigned int daysProcessedDuringIncrementalUpdate; // ivar: _daysProcessedDuringIncrementalUpdate
@property (nonatomic) unsigned int deletedEmailsCount; // ivar: _deletedEmailsCount
@property (nonatomic) unsigned int deletedTokensCountToComplyToCappingPolicy; // ivar: _deletedTokensCountToComplyToCappingPolicy
@property (readonly, nonatomic) BOOL hasBackgroundTrialMetadata;
@property (nonatomic) BOOL hasBiomeAggregationPerformanceInMilliSeconds;
@property (nonatomic) BOOL hasCumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds;
@property (nonatomic) BOOL hasDaysAvailableDuringIncrementalUpdate;
@property (nonatomic) BOOL hasDaysProcessedDuringIncrementalUpdate;
@property (nonatomic) BOOL hasDeletedEmailsCount;
@property (nonatomic) BOOL hasDeletedTokensCountToComplyToCappingPolicy;
@property (nonatomic) BOOL hasHoursSinceLastIncrementalUpdate;
@property (nonatomic) BOOL hasHoursSinceReference;
@property (nonatomic) BOOL hasIsSubmodelRebuilt;
@property (nonatomic) BOOL hasMailsProcessedDuringIncrementalUpdate;
@property (nonatomic) BOOL hasRollbackedEmailsCountToComplyToPostDeletionPolicy;
@property (nonatomic) BOOL hasRollbackedSlicesCountToComplyToPostDeletionPolicy;
@property (nonatomic) BOOL hasSubmodelsPruningForCappingPolicyPerformanceInMilliSeconds;
@property (readonly, nonatomic) BOOL hasSubmodelsStats;
@property (nonatomic) BOOL hasSubmodelsUpdatePerformanceInMilliSeconds;
@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (nonatomic) unsigned int hoursSinceLastIncrementalUpdate; // ivar: _hoursSinceLastIncrementalUpdate
@property (nonatomic) unsigned int hoursSinceReference; // ivar: _hoursSinceReference
@property (nonatomic) BOOL isSubmodelRebuilt; // ivar: _isSubmodelRebuilt
@property (nonatomic) unsigned int mailsProcessedDuringIncrementalUpdate; // ivar: _mailsProcessedDuringIncrementalUpdate
@property (nonatomic) unsigned int rollbackedEmailsCountToComplyToPostDeletionPolicy; // ivar: _rollbackedEmailsCountToComplyToPostDeletionPolicy
@property (nonatomic) unsigned int rollbackedSlicesCountToComplyToPostDeletionPolicy; // ivar: _rollbackedSlicesCountToComplyToPostDeletionPolicy
@property (nonatomic) NSUInteger submodelsPruningForCappingPolicyPerformanceInMilliSeconds; // ivar: _submodelsPruningForCappingPolicyPerformanceInMilliSeconds
@property (retain, nonatomic) SGMIMetricsSubmodelsStats *submodelsStats; // ivar: _submodelsStats
@property (nonatomic) NSUInteger submodelsUpdatePerformanceInMilliSeconds; // ivar: _submodelsUpdatePerformanceInMilliSeconds
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata; // ivar: _trialMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)ctsJobConstraintsAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCtsJobConstraints:(id)arg0 ;
-(int)ctsJobConstraintsAtIndex:(NSUInteger)arg0 ;
-(void)addCtsJobConstraints:(int)arg0 ;
-(void)clearCtsJobConstraints;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif