// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPINSTSCHEMACLPCLIENTEVENT_H
#define CLPINSTSCHEMACLPCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "CLPInstSchemaCLPCDMReplaySampleContext.h"
#import "CLPInstSchemaCLPCDMReplayTaskContext.h"
#import "CLPInstSchemaCLPCurareAppIntentSampleClassificationContext.h"
#import "CLPInstSchemaCLPCurareAppIntentTaskClassificationContext.h"
#import "CLPInstSchemaCLPClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "CLPInstSchemaCLPNLv4SampleEvaluationContext.h"
#import "CLPInstSchemaCLPNLv4TaskEvaluationContext.h"

@interface CLPInstSchemaCLPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleContext *cdmReplaySampleContext; // ivar: _cdmReplaySampleContext
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplayTaskContext *cdmReplayTaskContext; // ivar: _cdmReplayTaskContext
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationContext *curareAppIntentSampleClassificationContext; // ivar: _curareAppIntentSampleClassificationContext
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationContext *curareAppIntentTaskClassificationContext; // ivar: _curareAppIntentTaskClassificationContext
@property (retain, nonatomic) CLPInstSchemaCLPClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCdmReplaySampleContext; // ivar: _hasCdmReplaySampleContext
@property (nonatomic) BOOL hasCdmReplayTaskContext; // ivar: _hasCdmReplayTaskContext
@property (nonatomic) BOOL hasCurareAppIntentSampleClassificationContext; // ivar: _hasCurareAppIntentSampleClassificationContext
@property (nonatomic) BOOL hasCurareAppIntentTaskClassificationContext; // ivar: _hasCurareAppIntentTaskClassificationContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasNlv4SampleEvaluationContext; // ivar: _hasNlv4SampleEvaluationContext
@property (nonatomic) BOOL hasNlv4TaskEvaluationContext; // ivar: _hasNlv4TaskEvaluationContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationContext *nlv4SampleEvaluationContext; // ivar: _nlv4SampleEvaluationContext
@property (retain, nonatomic) CLPInstSchemaCLPNLv4TaskEvaluationContext *nlv4TaskEvaluationContext; // ivar: _nlv4TaskEvaluationContext
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
-(void)deleteCdmReplaySampleContext;
-(void)deleteCdmReplayTaskContext;
-(void)deleteCurareAppIntentSampleClassificationContext;
-(void)deleteCurareAppIntentTaskClassificationContext;
-(void)deleteEventMetadata;
-(void)deleteNlv4SampleEvaluationContext;
-(void)deleteNlv4TaskEvaluationContext;
-(void)writeTo:(id)arg0 ;


@end


#endif