// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
#import "CNVSchemaCNVExecutionCommitContext.h"
#import "CNVSchemaCNVExecutionOverridesEvaluated.h"
#import "CNVSchemaCNVExecutionPrepareContext.h"
#import "CNVSchemaCNVFindFlowContext.h"
#import "CNVSchemaCNVFlowPluginExecutionContext.h"
#import "CNVSchemaCNVFlowPluginInputContext.h"
#import "CNVSchemaCNVFlowPluginLoadContext.h"
#import "SISchemaInstrumentationMessage.h"
#import "CNVSchemaCNVIntentEagerExecutionContext.h"
#import "CNVSchemaCNVIntentFinalExecutionContext.h"
#import "CNVSchemaCNVIntentReformationContext.h"
#import "CNVSchemaCNVPostFlowPrepareContext.h"
#import "CNVSchemaCNVPreFlowPrepareContext.h"

@interface CNVSchemaCNVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) CNVSchemaCNVActionCandidatesCollated *actionCandidatesCollated; // ivar: _actionCandidatesCollated
@property (retain, nonatomic) CNVSchemaCNVActionCandidatesGenerated *actionCandidatesGenerated; // ivar: _actionCandidatesGenerated
@property (retain, nonatomic) CNVSchemaCNVActionCandidatesGeneratedTier1 *actionCandidatesGeneratedTier1; // ivar: _actionCandidatesGeneratedTier1
@property (retain, nonatomic) CNVSchemaCNVUsoGraphTier1 *cnvUsoGraphTier1; // ivar: _cnvUsoGraphTier1
@property (retain, nonatomic) CNVSchemaCNVDisambiguationContext *disambiguationContext; // ivar: _disambiguationContext
@property (retain, nonatomic) CNVSchemaCNVClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) CNVSchemaCNVExecutionCommitContext *executionCommitContext; // ivar: _executionCommitContext
@property (retain, nonatomic) CNVSchemaCNVExecutionOverridesEvaluated *executionOverridesEvaluated; // ivar: _executionOverridesEvaluated
@property (retain, nonatomic) CNVSchemaCNVExecutionPrepareContext *executionPrepareContext; // ivar: _executionPrepareContext
@property (retain, nonatomic) CNVSchemaCNVFindFlowContext *findFlowContext; // ivar: _findFlowContext
@property (retain, nonatomic) CNVSchemaCNVFlowPluginExecutionContext *flowPluginExecutionContext; // ivar: _flowPluginExecutionContext
@property (retain, nonatomic) CNVSchemaCNVFlowPluginInputContext *flowPluginInputContext; // ivar: _flowPluginInputContext
@property (retain, nonatomic) CNVSchemaCNVFlowPluginLoadContext *flowPluginLoadContext; // ivar: _flowPluginLoadContext
@property (nonatomic) BOOL hasActionCandidatesCollated; // ivar: _hasActionCandidatesCollated
@property (nonatomic) BOOL hasActionCandidatesGenerated; // ivar: _hasActionCandidatesGenerated
@property (nonatomic) BOOL hasActionCandidatesGeneratedTier1; // ivar: _hasActionCandidatesGeneratedTier1
@property (nonatomic) BOOL hasCnvUsoGraphTier1; // ivar: _hasCnvUsoGraphTier1
@property (nonatomic) BOOL hasDisambiguationContext; // ivar: _hasDisambiguationContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasExecutionCommitContext; // ivar: _hasExecutionCommitContext
@property (nonatomic) BOOL hasExecutionOverridesEvaluated; // ivar: _hasExecutionOverridesEvaluated
@property (nonatomic) BOOL hasExecutionPrepareContext; // ivar: _hasExecutionPrepareContext
@property (nonatomic) BOOL hasFindFlowContext; // ivar: _hasFindFlowContext
@property (nonatomic) BOOL hasFlowPluginExecutionContext; // ivar: _hasFlowPluginExecutionContext
@property (nonatomic) BOOL hasFlowPluginInputContext; // ivar: _hasFlowPluginInputContext
@property (nonatomic) BOOL hasFlowPluginLoadContext; // ivar: _hasFlowPluginLoadContext
@property (nonatomic) BOOL hasIntentEagerExecutionContext; // ivar: _hasIntentEagerExecutionContext
@property (nonatomic) BOOL hasIntentFinalExecutionContext; // ivar: _hasIntentFinalExecutionContext
@property (nonatomic) BOOL hasIntentReformationContext; // ivar: _hasIntentReformationContext
@property (nonatomic) BOOL hasPostFlowPrepareContext; // ivar: _hasPostFlowPrepareContext
@property (nonatomic) BOOL hasPreFlowPrepareContext; // ivar: _hasPreFlowPrepareContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionContext *intentEagerExecutionContext; // ivar: _intentEagerExecutionContext
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionContext *intentFinalExecutionContext; // ivar: _intentFinalExecutionContext
@property (retain, nonatomic) CNVSchemaCNVIntentReformationContext *intentReformationContext; // ivar: _intentReformationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CNVSchemaCNVPostFlowPrepareContext *postFlowPrepareContext; // ivar: _postFlowPrepareContext
@property (retain, nonatomic) CNVSchemaCNVPreFlowPrepareContext *preFlowPrepareContext; // ivar: _preFlowPrepareContext
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
-(void)deleteExecutionCommitContext;
-(void)deleteExecutionOverridesEvaluated;
-(void)deleteExecutionPrepareContext;
-(void)deleteFindFlowContext;
-(void)deleteFlowPluginExecutionContext;
-(void)deleteFlowPluginInputContext;
-(void)deleteFlowPluginLoadContext;
-(void)deleteIntentEagerExecutionContext;
-(void)deleteIntentFinalExecutionContext;
-(void)deleteIntentReformationContext;
-(void)deletePostFlowPrepareContext;
-(void)deletePreFlowPrepareContext;
-(void)writeTo:(id)arg0 ;


@end


#endif