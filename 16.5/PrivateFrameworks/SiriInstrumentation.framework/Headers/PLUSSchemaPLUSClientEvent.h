// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSCLIENTEVENT_H
#define PLUSSCHEMAPLUSCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "PLUSSchemaPLUSContactGroundTruthGenerated.h"
#import "PLUSSchemaPLUSContactSuggesterQueryContext.h"
#import "PLUSSchemaPLUSContactSuggesterRequestMetadataReported.h"
#import "PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported.h"
#import "PLUSSchemaPLUSContactSuggestionAccuracySignalReported.h"
#import "PLUSSchemaPLUSContactSuggestionGenerated.h"
#import "PLUSSchemaPLUSContactSuggestionHeartbeatReported.h"
#import "PLUSSchemaPLUSContactSuggestionOutcomeReported.h"
#import "PLUSSchemaPLUSContactSuggestionRemoved.h"
#import "PLUSSchemaPLUSClientEventMetadata.h"
#import "PLUSSchemaPLUSInferencePluginInvocationContext.h"
#import "SISchemaInstrumentationMessage.h"
#import "PLUSSchemaPLUSMediaEvaluationSummaryReported.h"
#import "PLUSSchemaPLUSMediaGroundTruthGenerated.h"
#import "PLUSSchemaPLUSRECTIFIPatternSequenceGenerated.h"
#import "PLUSSchemaPLUSPhoneCallMetadataExtracted.h"
#import "PLUSSchemaPLUSSendMessageMetadataExtracted.h"
#import "PLUSSchemaPLUSTMDCGroundTruthGenerated.h"
#import "PLUSSchemaPLUSUSOGraphTier1.h"

@interface PLUSSchemaPLUSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) PLUSSchemaPLUSContactGroundTruthGenerated *contactGroundTruthGenerated; // ivar: _contactGroundTruthGenerated
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggesterQueryContext *contactSuggesterQueryContext; // ivar: _contactSuggesterQueryContext
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggesterRequestMetadataReported *contactSuggesterRequestMetadataReported; // ivar: _contactSuggesterRequestMetadataReported
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported *contactSuggesterSuggestionMetadataReported; // ivar: _contactSuggesterSuggestionMetadataReported
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionAccuracySignalReported *contactSuggestionAccuracySignalReported; // ivar: _contactSuggestionAccuracySignalReported
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionGenerated *contactSuggestionGenerated; // ivar: _contactSuggestionGenerated
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionHeartbeatReported *contactSuggestionHeartbeatReported; // ivar: _contactSuggestionHeartbeatReported
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionOutcomeReported *contactSuggestionOutcomeReported; // ivar: _contactSuggestionOutcomeReported
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionRemoved *contactSuggestionRemoved; // ivar: _contactSuggestionRemoved
@property (retain, nonatomic) PLUSSchemaPLUSClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasContactGroundTruthGenerated; // ivar: _hasContactGroundTruthGenerated
@property (nonatomic) BOOL hasContactSuggesterQueryContext; // ivar: _hasContactSuggesterQueryContext
@property (nonatomic) BOOL hasContactSuggesterRequestMetadataReported; // ivar: _hasContactSuggesterRequestMetadataReported
@property (nonatomic) BOOL hasContactSuggesterSuggestionMetadataReported; // ivar: _hasContactSuggesterSuggestionMetadataReported
@property (nonatomic) BOOL hasContactSuggestionAccuracySignalReported; // ivar: _hasContactSuggestionAccuracySignalReported
@property (nonatomic) BOOL hasContactSuggestionGenerated; // ivar: _hasContactSuggestionGenerated
@property (nonatomic) BOOL hasContactSuggestionHeartbeatReported; // ivar: _hasContactSuggestionHeartbeatReported
@property (nonatomic) BOOL hasContactSuggestionOutcomeReported; // ivar: _hasContactSuggestionOutcomeReported
@property (nonatomic) BOOL hasContactSuggestionRemoved; // ivar: _hasContactSuggestionRemoved
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasInferencePluginInvocationContext; // ivar: _hasInferencePluginInvocationContext
@property (nonatomic) BOOL hasMediaEvaluationSummaryReported; // ivar: _hasMediaEvaluationSummaryReported
@property (nonatomic) BOOL hasMediaGroundTruthGenerated; // ivar: _hasMediaGroundTruthGenerated
@property (nonatomic) BOOL hasPatternSequenceGenerated; // ivar: _hasPatternSequenceGenerated
@property (nonatomic) BOOL hasPhoneCallMetadataExtracted; // ivar: _hasPhoneCallMetadataExtracted
@property (nonatomic) BOOL hasSendMessageMetadataExtracted; // ivar: _hasSendMessageMetadataExtracted
@property (nonatomic) BOOL hasTmdcGroundTruthGenerated; // ivar: _hasTmdcGroundTruthGenerated
@property (nonatomic) BOOL hasUsoGraphTier1; // ivar: _hasUsoGraphTier1
@property (retain, nonatomic) PLUSSchemaPLUSInferencePluginInvocationContext *inferencePluginInvocationContext; // ivar: _inferencePluginInvocationContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PLUSSchemaPLUSMediaEvaluationSummaryReported *mediaEvaluationSummaryReported; // ivar: _mediaEvaluationSummaryReported
@property (retain, nonatomic) PLUSSchemaPLUSMediaGroundTruthGenerated *mediaGroundTruthGenerated; // ivar: _mediaGroundTruthGenerated
@property (retain, nonatomic) PLUSSchemaPLUSRECTIFIPatternSequenceGenerated *patternSequenceGenerated; // ivar: _patternSequenceGenerated
@property (retain, nonatomic) PLUSSchemaPLUSPhoneCallMetadataExtracted *phoneCallMetadataExtracted; // ivar: _phoneCallMetadataExtracted
@property (retain, nonatomic) PLUSSchemaPLUSSendMessageMetadataExtracted *sendMessageMetadataExtracted; // ivar: _sendMessageMetadataExtracted
@property (retain, nonatomic) PLUSSchemaPLUSTMDCGroundTruthGenerated *tmdcGroundTruthGenerated; // ivar: _tmdcGroundTruthGenerated
@property (retain, nonatomic) PLUSSchemaPLUSUSOGraphTier1 *usoGraphTier1; // ivar: _usoGraphTier1
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
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteContactGroundTruthGenerated;
-(void)deleteContactSuggesterQueryContext;
-(void)deleteContactSuggesterRequestMetadataReported;
-(void)deleteContactSuggesterSuggestionMetadataReported;
-(void)deleteContactSuggestionAccuracySignalReported;
-(void)deleteContactSuggestionGenerated;
-(void)deleteContactSuggestionHeartbeatReported;
-(void)deleteContactSuggestionOutcomeReported;
-(void)deleteContactSuggestionRemoved;
-(void)deleteEventMetadata;
-(void)deleteInferencePluginInvocationContext;
-(void)deleteMediaEvaluationSummaryReported;
-(void)deleteMediaGroundTruthGenerated;
-(void)deletePatternSequenceGenerated;
-(void)deletePhoneCallMetadataExtracted;
-(void)deleteSendMessageMetadataExtracted;
-(void)deleteTmdcGroundTruthGenerated;
-(void)deleteUsoGraphTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif