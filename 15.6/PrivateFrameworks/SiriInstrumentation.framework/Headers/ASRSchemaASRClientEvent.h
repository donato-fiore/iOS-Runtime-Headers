// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASRSCHEMAASRCLIENTEVENT_H
#define ASRSCHEMAASRCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "ASRSchemaASRAppleNeuralEngineCompilationContext.h"
#import "ASRSchemaASRAssetLoadContext.h"
#import "ASRSchemaASRAudioPacketArrivalContext.h"
#import "ASRSchemaASRClientEventMetadata.h"
#import "ASRSchemaASRFinalAudioPacketContainingSpeechReceived.h"
#import "ASRSchemaASRFinalResultGenerated.h"
#import "ASRSchemaASRFirstAudioPacketProcessed.h"
#import "ASRSchemaASRInitializationContext.h"
#import "ASRSchemaASRIntermediateUtteranceInfoTier1.h"
#import "ASRSchemaASRJitLanguageModelEnrollmentEndedTier1.h"
#import "ASRSchemaASRJitLanguageModelEnrollmentContext.h"
#import "ASRSchemaASRPackageGenerated.h"
#import "ASRSchemaASRPartialResultGenerated.h"
#import "ASRSchemaASRPreheatContext.h"
#import "ASRSchemaASRRecognitionResultTier1.h"
#import "ASRSchemaASRRequestContext.h"
#import "ASRSchemaASRSampledAudioFileDeleted.h"
#import "ASRSchemaASRSampledAudioFileDeletionFailed.h"
#import "ASRSchemaASRSampledAudioFileEnqueueFailed.h"
#import "ASRSchemaASRSampledAudioFileEnqueued.h"
#import "ASRSchemaASRSampledAudioFileStorageFailed.h"
#import "ASRSchemaASRSampledAudioFileStored.h"

@interface ASRSchemaASRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) ASRSchemaASRAppleNeuralEngineCompilationContext *appleNeuralEngineCompilationContext; // ivar: _appleNeuralEngineCompilationContext
@property (retain, nonatomic) ASRSchemaASRAssetLoadContext *assetLoadContext; // ivar: _assetLoadContext
@property (retain, nonatomic) ASRSchemaASRAudioPacketArrivalContext *audioPacketArrivalContext; // ivar: _audioPacketArrivalContext
@property (retain, nonatomic) ASRSchemaASRClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) ASRSchemaASRFinalAudioPacketContainingSpeechReceived *finalAudioPacketContainingSpeechReceived; // ivar: _finalAudioPacketContainingSpeechReceived
@property (retain, nonatomic) ASRSchemaASRFinalResultGenerated *finalResultGenerated; // ivar: _finalResultGenerated
@property (retain, nonatomic) ASRSchemaASRFirstAudioPacketProcessed *firstAudioPacketProcessed; // ivar: _firstAudioPacketProcessed
@property (nonatomic) BOOL hasAppleNeuralEngineCompilationContext; // ivar: _hasAppleNeuralEngineCompilationContext
@property (nonatomic) BOOL hasAssetLoadContext; // ivar: _hasAssetLoadContext
@property (nonatomic) BOOL hasAudioPacketArrivalContext; // ivar: _hasAudioPacketArrivalContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFinalAudioPacketContainingSpeechReceived; // ivar: _hasFinalAudioPacketContainingSpeechReceived
@property (nonatomic) BOOL hasFinalResultGenerated; // ivar: _hasFinalResultGenerated
@property (nonatomic) BOOL hasFirstAudioPacketProcessed; // ivar: _hasFirstAudioPacketProcessed
@property (nonatomic) BOOL hasInitializationContext; // ivar: _hasInitializationContext
@property (nonatomic) BOOL hasIntermediateUtteranceInfoTier1; // ivar: _hasIntermediateUtteranceInfoTier1
@property (nonatomic) BOOL hasJitLanguageModelEnrollmentEndedTier1; // ivar: _hasJitLanguageModelEnrollmentEndedTier1
@property (nonatomic) BOOL hasLanguageModelEnrollmentContext; // ivar: _hasLanguageModelEnrollmentContext
@property (nonatomic) BOOL hasPackageGenerated; // ivar: _hasPackageGenerated
@property (nonatomic) BOOL hasPartialResultGenerated; // ivar: _hasPartialResultGenerated
@property (nonatomic) BOOL hasPreheatContext; // ivar: _hasPreheatContext
@property (nonatomic) BOOL hasRecognitionResultTier1; // ivar: _hasRecognitionResultTier1
@property (nonatomic) BOOL hasRequestContext; // ivar: _hasRequestContext
@property (nonatomic) BOOL hasSampledAudioFileDeleted; // ivar: _hasSampledAudioFileDeleted
@property (nonatomic) BOOL hasSampledAudioFileDeletionFailed; // ivar: _hasSampledAudioFileDeletionFailed
@property (nonatomic) BOOL hasSampledAudioFileEnqueueFailed; // ivar: _hasSampledAudioFileEnqueueFailed
@property (nonatomic) BOOL hasSampledAudioFileEnqueued; // ivar: _hasSampledAudioFileEnqueued
@property (nonatomic) BOOL hasSampledAudioFileStorageFailed; // ivar: _hasSampledAudioFileStorageFailed
@property (nonatomic) BOOL hasSampledAudioFileStored; // ivar: _hasSampledAudioFileStored
@property (retain, nonatomic) ASRSchemaASRInitializationContext *initializationContext; // ivar: _initializationContext
@property (retain, nonatomic) ASRSchemaASRIntermediateUtteranceInfoTier1 *intermediateUtteranceInfoTier1; // ivar: _intermediateUtteranceInfoTier1
@property (retain, nonatomic) ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 *jitLanguageModelEnrollmentEndedTier1; // ivar: _jitLanguageModelEnrollmentEndedTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ASRSchemaASRJitLanguageModelEnrollmentContext *languageModelEnrollmentContext; // ivar: _languageModelEnrollmentContext
@property (retain, nonatomic) ASRSchemaASRPackageGenerated *packageGenerated; // ivar: _packageGenerated
@property (retain, nonatomic) ASRSchemaASRPartialResultGenerated *partialResultGenerated; // ivar: _partialResultGenerated
@property (retain, nonatomic) ASRSchemaASRPreheatContext *preheatContext; // ivar: _preheatContext
@property (retain, nonatomic) ASRSchemaASRRecognitionResultTier1 *recognitionResultTier1; // ivar: _recognitionResultTier1
@property (retain, nonatomic) ASRSchemaASRRequestContext *requestContext; // ivar: _requestContext
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileDeleted *sampledAudioFileDeleted; // ivar: _sampledAudioFileDeleted
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileDeletionFailed *sampledAudioFileDeletionFailed; // ivar: _sampledAudioFileDeletionFailed
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileEnqueueFailed *sampledAudioFileEnqueueFailed; // ivar: _sampledAudioFileEnqueueFailed
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileEnqueued *sampledAudioFileEnqueued; // ivar: _sampledAudioFileEnqueued
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileStorageFailed *sampledAudioFileStorageFailed; // ivar: _sampledAudioFileStorageFailed
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileStored *sampledAudioFileStored; // ivar: _sampledAudioFileStored
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
-(void)deleteAppleNeuralEngineCompilationContext;
-(void)deleteAssetLoadContext;
-(void)deleteAudioPacketArrivalContext;
-(void)deleteEventMetadata;
-(void)deleteFinalAudioPacketContainingSpeechReceived;
-(void)deleteFinalResultGenerated;
-(void)deleteFirstAudioPacketProcessed;
-(void)deleteInitializationContext;
-(void)deleteIntermediateUtteranceInfoTier1;
-(void)deleteJitLanguageModelEnrollmentEndedTier1;
-(void)deleteLanguageModelEnrollmentContext;
-(void)deletePackageGenerated;
-(void)deletePartialResultGenerated;
-(void)deletePreheatContext;
-(void)deleteRecognitionResultTier1;
-(void)deleteRequestContext;
-(void)deleteSampledAudioFileDeleted;
-(void)deleteSampledAudioFileDeletionFailed;
-(void)deleteSampledAudioFileEnqueueFailed;
-(void)deleteSampledAudioFileEnqueued;
-(void)deleteSampledAudioFileStorageFailed;
-(void)deleteSampledAudioFileStored;
-(void)writeTo:(id)arg0 ;


@end


#endif