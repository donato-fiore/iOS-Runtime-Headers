// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVSCHEMACNVCLIENTEVENT_H
#define CNVSCHEMACNVCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "CNVSchemaCNVUsoGraphTier1.h"
#import "CNVSchemaCNVClientEventMetadata.h"
#import "CNVSchemaCNVIntentEagerExecutionContext.h"
#import "CNVSchemaCNVIntentFinalExecutionContext.h"
#import "CNVSchemaCNVIntentReformationContext.h"

@interface CNVSchemaCNVClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) CNVSchemaCNVUsoGraphTier1 *cnvUsoGraphTier1; // ivar: _cnvUsoGraphTier1
@property (retain, nonatomic) CNVSchemaCNVClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCnvUsoGraphTier1; // ivar: _hasCnvUsoGraphTier1
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasIntentEagerExecutionContext; // ivar: _hasIntentEagerExecutionContext
@property (nonatomic) BOOL hasIntentFinalExecutionContext; // ivar: _hasIntentFinalExecutionContext
@property (nonatomic) BOOL hasIntentReformationContext; // ivar: _hasIntentReformationContext
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionContext *intentEagerExecutionContext; // ivar: _intentEagerExecutionContext
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionContext *intentFinalExecutionContext; // ivar: _intentFinalExecutionContext
@property (retain, nonatomic) CNVSchemaCNVIntentReformationContext *intentReformationContext; // ivar: _intentReformationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteCnvUsoGraphTier1;
-(void)deleteEventMetadata;
-(void)deleteIntentEagerExecutionContext;
-(void)deleteIntentFinalExecutionContext;
-(void)deleteIntentReformationContext;
-(void)writeTo:(id)arg0 ;


@end


#endif