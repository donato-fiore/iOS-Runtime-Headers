// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXPSIRISCHEMAEXPSERVERCOUNTERFACTUALTRIGGEREDTIER1_H
#define EXPSIRISCHEMAEXPSERVERCOUNTERFACTUALTRIGGEREDTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "EXPSiriSchemaEXPSiriPegasusResponseSummary.h"

@interface EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *allocations; // ivar: _allocations
@property (retain, nonatomic) SISchemaUUID *codepathId; // ivar: _codepathId
@property (nonatomic) float compareRankingAtK; // ivar: _compareRankingAtK
@property (copy, nonatomic) NSArray *counterfactualAllocations; // ivar: _counterfactualAllocations
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *counterfactualSummary; // ivar: _counterfactualSummary
@property (nonatomic) int diffOutcome; // ivar: _diffOutcome
@property (nonatomic) BOOL hasCodepathId; // ivar: _hasCodepathId
@property (nonatomic) BOOL hasCompareRankingAtK;
@property (nonatomic) BOOL hasCounterfactualSummary; // ivar: _hasCounterfactualSummary
@property (nonatomic) BOOL hasDiffOutcome;
@property (nonatomic) BOOL hasIsCounterfactualDifferent;
@property (nonatomic) BOOL hasKValue;
@property (nonatomic) BOOL hasPegasusId; // ivar: _hasPegasusId
@property (nonatomic) BOOL hasTreatmentSummary; // ivar: _hasTreatmentSummary
@property (nonatomic) BOOL isCounterfactualDifferent; // ivar: _isCounterfactualDifferent
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSInteger kValue; // ivar: _kValue
@property (retain, nonatomic) SISchemaUUID *pegasusId; // ivar: _pegasusId
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *treatmentSummary; // ivar: _treatmentSummary


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)allocationCount;
-(NSUInteger)counterfactualAllocationCount;
-(NSUInteger)hash;
-(id)allocationAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)counterfactualAllocationAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAllocation:(id)arg0 ;
-(void)addCounterfactualAllocation:(id)arg0 ;
-(void)clearAllocation;
-(void)clearCounterfactualAllocation;
-(void)deleteAllocation;
-(void)deleteCodepathId;
-(void)deleteCompareRankingAtK;
-(void)deleteCounterfactualAllocation;
-(void)deleteCounterfactualSummary;
-(void)deleteDiffOutcome;
-(void)deleteIsCounterfactualDifferent;
-(void)deleteKValue;
-(void)deletePegasusId;
-(void)deleteTreatmentSummary;
-(void)writeTo:(id)arg0 ;


@end


#endif