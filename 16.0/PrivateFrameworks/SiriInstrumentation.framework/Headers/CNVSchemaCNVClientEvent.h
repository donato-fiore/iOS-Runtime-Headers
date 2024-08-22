// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVSCHEMACNVCLIENTEVENT_H
#define CNVSCHEMACNVCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "CNVSchemaCNVActionCandidatesCollated.h"
#import "CNVSchemaCNVActionCandidatesGenerated.h"
#import "CNVSchemaCNVActionCandidatesGeneratedTier1.h"
#import "CNVSchemaCNVUsoGraphTier1.h"
#import "CNVSchemaCNVDisambiguationContext.h"
#import "CNVSchemaCNVClientEventMetadata.h"
#import "CNVSchemaCNVExecutionOverridesEvaluated.h"
#import "SISchemaInstrumentationMessage.h"
#import "CNVSchemaCNVIntentEagerExecutionContext.h"
#import "CNVSchemaCNVIntentFinalExecutionContext.h"
#import "CNVSchemaCNVIntentReformationContext.h"

@interface CNVSchemaCNVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) CNVSchemaCNVActionCandidatesCollated *actionCandidatesCollated; // ivar: _actionCandidatesCollated
@property (retain, nonatomic) CNVSchemaCNVActionCandidatesGenerated *actionCandidatesGenerated; // ivar: _actionCandidatesGenerated
@property (retain, nonatomic) CNVSchemaCNVActionCandidatesGeneratedTier1 *actionCandidatesGeneratedTier1; // ivar: _actionCandidatesGeneratedTier1
@property (retain, nonatomic) CNVSchemaCNVUsoGraphTier1 *cnvUsoGraphTier1; // ivar: _cnvUsoGraphTier1
@property (retain, nonatomic) CNVSchemaCNVDisambiguationContext *disambiguationContext; // ivar: _disambiguationContext
@property (retain, nonatomic) CNVSchemaCNVClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) CNVSchemaCNVExecutionOverridesEvaluated *executionOverridesEvaluated; // ivar: _executionOverridesEvaluated
@property (nonatomic) BOOL hasActionCandidatesCollated; // ivar: _hasActionCandidatesCollated
@property (nonatomic) BOOL hasActionCandidatesGenerated; // ivar: _hasActionCandidatesGenerated
@property (nonatomic) BOOL hasActionCandidatesGeneratedTier1; // ivar: _hasActionCandidatesGeneratedTier1
@property (nonatomic) BOOL hasCnvUsoGraphTier1; // ivar: _hasCnvUsoGraphTier1
@property (nonatomic) BOOL hasDisambiguationContext; // ivar: _hasDisambiguationContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasExecutionOverridesEvaluated; // ivar: _hasExecutionOverridesEvaluated
@property (nonatomic) BOOL hasIntentEagerExecutionContext; // ivar: _hasIntentEagerExecutionContext
@property (nonatomic) BOOL hasIntentFinalExecutionContext; // ivar: _hasIntentFinalExecutionContext
@property (nonatomic) BOOL hasIntentReformationContext; // ivar: _hasIntentReformationContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionContext *intentEagerExecutionContext; // ivar: _intentEagerExecutionContext
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionContext *intentFinalExecutionContext; // ivar: _intentFinalExecutionContext
@property (retain, nonatomic) CNVSchemaCNVIntentReformationContext *intentReformationContext; // ivar: _intentReformationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteActionCandidatesCollated;
-(void)deleteActionCandidatesGenerated;
-(void)deleteActionCandidatesGeneratedTier1;
-(void)deleteCnvUsoGraphTier1;
-(void)deleteDisambiguationContext;
-(void)deleteEventMetadata;
-(void)deleteExecutionOverridesEvaluated;
-(void)deleteIntentEagerExecutionContext;
-(void)deleteIntentFinalExecutionContext;
-(void)deleteIntentReformationContext;
-(void)writeTo:(id)arg0 ;


@end


#endif