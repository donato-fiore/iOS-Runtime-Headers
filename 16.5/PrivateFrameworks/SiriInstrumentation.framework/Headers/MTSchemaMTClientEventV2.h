// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSCHEMAMTCLIENTEVENTV2_H
#define MTSCHEMAMTCLIENTEVENTV2_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "MTSchemaMTASRStateUpdated.h"
#import "MTSchemaMTBatchRequestContext.h"
#import "MTSchemaMTClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "MTSchemaMTInvocationContext.h"
#import "MTSchemaMTInvocationStartedTier1.h"
#import "MTSchemaMTLocalePairResolved.h"

@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) MTSchemaMTASRStateUpdated *asrStateUpdated; // ivar: _asrStateUpdated
@property (retain, nonatomic) MTSchemaMTBatchRequestContext *batchRequestContext; // ivar: _batchRequestContext
@property (retain, nonatomic) MTSchemaMTClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAsrStateUpdated; // ivar: _hasAsrStateUpdated
@property (nonatomic) BOOL hasBatchRequestContext; // ivar: _hasBatchRequestContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasInvocationContext; // ivar: _hasInvocationContext
@property (nonatomic) BOOL hasInvocationStartedTier1; // ivar: _hasInvocationStartedTier1
@property (nonatomic) BOOL hasLocalePairResolved; // ivar: _hasLocalePairResolved
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MTSchemaMTInvocationContext *invocationContext; // ivar: _invocationContext
@property (retain, nonatomic) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1; // ivar: _invocationStartedTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MTSchemaMTLocalePairResolved *localePairResolved; // ivar: _localePairResolved
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
-(int)clockIsolationLevel;
-(int)getAnyEventType;
-(void)deleteAsrStateUpdated;
-(void)deleteBatchRequestContext;
-(void)deleteEventMetadata;
-(void)deleteInvocationContext;
-(void)deleteInvocationStartedTier1;
-(void)deleteLocalePairResolved;
-(void)writeTo:(id)arg0 ;


@end


#endif