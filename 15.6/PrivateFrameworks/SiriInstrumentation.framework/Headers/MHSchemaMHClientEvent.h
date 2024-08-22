// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHCLIENTEVENT_H
#define MHSCHEMAMHCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext.h"
#import "MHSchemaMHVoiceAdBlockerContext.h"
#import "MHSchemaMHApplicationPlaybackAttempted.h"
#import "MHSchemaMHASRAudioConfigureStarted.h"
#import "MHSchemaMHAssistantDaemonAudioBluetoothInfo.h"
#import "MHSchemaMHAssistantDaemonAudioConfigureContext.h"
#import "MHSchemaMHAssistantDaemonAudioFetchRouteContext.h"
#import "MHSchemaMHAssistantDaemonAudioInitContext.h"
#import "MHSchemaMHAssistantDaemonAudioLateBufferDetected.h"
#import "MHSchemaMHAssistantDaemonAudioPrepareContext.h"
#import "MHSchemaMHAssistantDaemonAudioPrewarmContext.h"
#import "MHSchemaMHAssistantDaemonAudioRecordingContext.h"
#import "MHSchemaMHAssistantDaemonAudioRecordingFirstBufferContext.h"
#import "MHSchemaMHAssistantDaemonAudioRecordingInterruptionContext.h"
#import "MHSchemaMHAssistantDaemonAudioRecordingInterruptionStartedTier1.h"
#import "MHSchemaMHAssistantDaemonAudioRecordingLastBufferContext.h"
#import "MHSchemaMHAssistantDaemonAudioRecordingMissedBufferDetected.h"
#import "MHSchemaMHAssistantDaemonAudioSessionSetActiveContext.h"
#import "MHSchemaMHAssistantDaemonAudioSessionSetInactiveContext.h"
#import "MHSchemaMHAssistantDaemonAudioStartRecordingContext.h"
#import "MHSchemaMHAssistantDaemonAudioStopRecordingContext.h"
#import "MHSchemaMHAssistantDaemonAudioTwoShotTransitionContext.h"
#import "MHSchemaMHCarplayLanguageMismatch.h"
#import "MHSchemaMHCoreSpeechPreprocessorCompleted.h"
#import "MHSchemaMHDarwinConnectedDeviceWakeContext.h"
#import "MHSchemaMHEndpointDelayContext.h"
#import "MHSchemaMHEndpointDetected.h"
#import "MHSchemaMHEndpointLatencyInfoReported.h"
#import "MHSchemaMHEndpointerAccessibleContext.h"
#import "MHSchemaMHEndpointerUsed.h"
#import "MHSchemaMHClientEventMetadata.h"
#import "MHSchemaMHMitigationDecisionRecommended.h"
#import "MHSchemaMHLatticeFalseTriggerMitigationEvaluationContext.h"
#import "SISchemaUUID.h"
#import "MHSchemaMHOnDeviceEndpointerContext.h"
#import "MHSchemaMHServerEndpointerContext.h"
#import "MHSchemaMHSiriLaunchRequestContext.h"
#import "MHSchemaMHUnintendedResponseSuppressionEvaluationContext.h"
#import "MHSchemaMHVoiceTriggerContext.h"
#import "MHSchemaMHVoiceTriggerTwoShotDetected.h"

@interface MHSchemaMHClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext *acousticFalseTriggerMitigationEvaluationContext; // ivar: _acousticFalseTriggerMitigationEvaluationContext
@property (retain, nonatomic) MHSchemaMHVoiceAdBlockerContext *adblockerContext; // ivar: _adblockerContext
@property (retain, nonatomic) MHSchemaMHApplicationPlaybackAttempted *applicationPlaybackAttempted; // ivar: _applicationPlaybackAttempted
@property (retain, nonatomic) MHSchemaMHASRAudioConfigureStarted *asrAudioConfigureStarted; // ivar: _asrAudioConfigureStarted
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioBluetoothInfo *assistantDaemonAudioBluetoothInfo; // ivar: _assistantDaemonAudioBluetoothInfo
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioConfigureContext *assistantDaemonAudioConfigureContext; // ivar: _assistantDaemonAudioConfigureContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioFetchRouteContext *assistantDaemonAudioFetchRouteContext; // ivar: _assistantDaemonAudioFetchRouteContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioInitContext *assistantDaemonAudioInitContext; // ivar: _assistantDaemonAudioInitContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioLateBufferDetected *assistantDaemonAudioLateBufferDetected; // ivar: _assistantDaemonAudioLateBufferDetected
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrepareContext *assistantDaemonAudioPrepareContext; // ivar: _assistantDaemonAudioPrepareContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrewarmContext *assistantDaemonAudioPrewarmContext; // ivar: _assistantDaemonAudioPrewarmContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingContext *assistantDaemonAudioRecordingContext; // ivar: _assistantDaemonAudioRecordingContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingFirstBufferContext *assistantDaemonAudioRecordingFirstBufferContext; // ivar: _assistantDaemonAudioRecordingFirstBufferContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingInterruptionContext *assistantDaemonAudioRecordingInterruptionContext; // ivar: _assistantDaemonAudioRecordingInterruptionContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingInterruptionStartedTier1 *assistantDaemonAudioRecordingInterruptionStartedTier1; // ivar: _assistantDaemonAudioRecordingInterruptionStartedTier1
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingLastBufferContext *assistantDaemonAudioRecordingLastBufferContext; // ivar: _assistantDaemonAudioRecordingLastBufferContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingMissedBufferDetected *assistantDaemonAudioRecordingMissedBufferDetected; // ivar: _assistantDaemonAudioRecordingMissedBufferDetected
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioSessionSetActiveContext *assistantDaemonAudioSessionSetActiveContext; // ivar: _assistantDaemonAudioSessionSetActiveContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioSessionSetInactiveContext *assistantDaemonAudioSessionSetInactiveContext; // ivar: _assistantDaemonAudioSessionSetInactiveContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioStartRecordingContext *assistantDaemonAudioStartRecordingContext; // ivar: _assistantDaemonAudioStartRecordingContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioStopRecordingContext *assistantDaemonAudioStopRecordingContext; // ivar: _assistantDaemonAudioStopRecordingContext
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioTwoShotTransitionContext *assistantDaemonAudioTwoShotTransitionContext; // ivar: _assistantDaemonAudioTwoShotTransitionContext
@property (retain, nonatomic) MHSchemaMHCarplayLanguageMismatch *carPlayLangaugeMismatched; // ivar: _carPlayLangaugeMismatched
@property (retain, nonatomic) MHSchemaMHCoreSpeechPreprocessorCompleted *coreSpeechPreprocessorCompleted; // ivar: _coreSpeechPreprocessorCompleted
@property (retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeContext *darwinConnectedDeviceWakeContext; // ivar: _darwinConnectedDeviceWakeContext
@property (retain, nonatomic) MHSchemaMHEndpointDelayContext *endpointDelayContext; // ivar: _endpointDelayContext
@property (retain, nonatomic) MHSchemaMHEndpointDetected *endpointDetected; // ivar: _endpointDetected
@property (retain, nonatomic) MHSchemaMHEndpointLatencyInfoReported *endpointLatencyInfoReported; // ivar: _endpointLatencyInfoReported
@property (retain, nonatomic) MHSchemaMHEndpointerAccessibleContext *endpointerAccessibleContext; // ivar: _endpointerAccessibleContext
@property (retain, nonatomic) MHSchemaMHEndpointerUsed *endpointerUsed; // ivar: _endpointerUsed
@property (retain, nonatomic) MHSchemaMHClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) MHSchemaMHMitigationDecisionRecommended *finalMitigationRecommendation; // ivar: _finalMitigationRecommendation
@property (nonatomic) BOOL hasAcousticFalseTriggerMitigationEvaluationContext; // ivar: _hasAcousticFalseTriggerMitigationEvaluationContext
@property (nonatomic) BOOL hasAdblockerContext; // ivar: _hasAdblockerContext
@property (nonatomic) BOOL hasApplicationPlaybackAttempted; // ivar: _hasApplicationPlaybackAttempted
@property (nonatomic) BOOL hasAsrAudioConfigureStarted; // ivar: _hasAsrAudioConfigureStarted
@property (nonatomic) BOOL hasAssistantDaemonAudioBluetoothInfo; // ivar: _hasAssistantDaemonAudioBluetoothInfo
@property (nonatomic) BOOL hasAssistantDaemonAudioConfigureContext; // ivar: _hasAssistantDaemonAudioConfigureContext
@property (nonatomic) BOOL hasAssistantDaemonAudioFetchRouteContext; // ivar: _hasAssistantDaemonAudioFetchRouteContext
@property (nonatomic) BOOL hasAssistantDaemonAudioInitContext; // ivar: _hasAssistantDaemonAudioInitContext
@property (nonatomic) BOOL hasAssistantDaemonAudioLateBufferDetected; // ivar: _hasAssistantDaemonAudioLateBufferDetected
@property (nonatomic) BOOL hasAssistantDaemonAudioPrepareContext; // ivar: _hasAssistantDaemonAudioPrepareContext
@property (nonatomic) BOOL hasAssistantDaemonAudioPrewarmContext; // ivar: _hasAssistantDaemonAudioPrewarmContext
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingContext; // ivar: _hasAssistantDaemonAudioRecordingContext
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingFirstBufferContext; // ivar: _hasAssistantDaemonAudioRecordingFirstBufferContext
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingInterruptionContext; // ivar: _hasAssistantDaemonAudioRecordingInterruptionContext
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingInterruptionStartedTier1; // ivar: _hasAssistantDaemonAudioRecordingInterruptionStartedTier1
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingLastBufferContext; // ivar: _hasAssistantDaemonAudioRecordingLastBufferContext
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingMissedBufferDetected; // ivar: _hasAssistantDaemonAudioRecordingMissedBufferDetected
@property (nonatomic) BOOL hasAssistantDaemonAudioSessionSetActiveContext; // ivar: _hasAssistantDaemonAudioSessionSetActiveContext
@property (nonatomic) BOOL hasAssistantDaemonAudioSessionSetInactiveContext; // ivar: _hasAssistantDaemonAudioSessionSetInactiveContext
@property (nonatomic) BOOL hasAssistantDaemonAudioStartRecordingContext; // ivar: _hasAssistantDaemonAudioStartRecordingContext
@property (nonatomic) BOOL hasAssistantDaemonAudioStopRecordingContext; // ivar: _hasAssistantDaemonAudioStopRecordingContext
@property (nonatomic) BOOL hasAssistantDaemonAudioTwoShotTransitionContext; // ivar: _hasAssistantDaemonAudioTwoShotTransitionContext
@property (nonatomic) BOOL hasCarPlayLangaugeMismatched; // ivar: _hasCarPlayLangaugeMismatched
@property (nonatomic) BOOL hasCoreSpeechPreprocessorCompleted; // ivar: _hasCoreSpeechPreprocessorCompleted
@property (nonatomic) BOOL hasDarwinConnectedDeviceWakeContext; // ivar: _hasDarwinConnectedDeviceWakeContext
@property (nonatomic) BOOL hasEndpointDelayContext; // ivar: _hasEndpointDelayContext
@property (nonatomic) BOOL hasEndpointDetected; // ivar: _hasEndpointDetected
@property (nonatomic) BOOL hasEndpointLatencyInfoReported; // ivar: _hasEndpointLatencyInfoReported
@property (nonatomic) BOOL hasEndpointerAccessibleContext; // ivar: _hasEndpointerAccessibleContext
@property (nonatomic) BOOL hasEndpointerUsed; // ivar: _hasEndpointerUsed
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFinalMitigationRecommendation; // ivar: _hasFinalMitigationRecommendation
@property (nonatomic) BOOL hasLatticeFalseTriggerMitigationEvaluationContext; // ivar: _hasLatticeFalseTriggerMitigationEvaluationContext
@property (nonatomic) BOOL hasMhId; // ivar: _hasMhId
@property (nonatomic) BOOL hasOnDeviceEndpointerContext; // ivar: _hasOnDeviceEndpointerContext
@property (nonatomic) BOOL hasServerEndpointerContext; // ivar: _hasServerEndpointerContext
@property (nonatomic) BOOL hasSiriLaunchRequestContext; // ivar: _hasSiriLaunchRequestContext
@property (nonatomic) BOOL hasUnintendedResponseSuppressionExecutionContext; // ivar: _hasUnintendedResponseSuppressionExecutionContext
@property (nonatomic) BOOL hasVoiceTriggerContext; // ivar: _hasVoiceTriggerContext
@property (nonatomic) BOOL hasVoiceTriggerTwoShotDetected; // ivar: _hasVoiceTriggerTwoShotDetected
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHLatticeFalseTriggerMitigationEvaluationContext *latticeFalseTriggerMitigationEvaluationContext; // ivar: _latticeFalseTriggerMitigationEvaluationContext
@property (retain, nonatomic) SISchemaUUID *mhId; // ivar: _mhId
@property (retain, nonatomic) MHSchemaMHOnDeviceEndpointerContext *onDeviceEndpointerContext; // ivar: _onDeviceEndpointerContext
@property (retain, nonatomic) MHSchemaMHServerEndpointerContext *serverEndpointerContext; // ivar: _serverEndpointerContext
@property (retain, nonatomic) MHSchemaMHSiriLaunchRequestContext *siriLaunchRequestContext; // ivar: _siriLaunchRequestContext
@property (retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionEvaluationContext *unintendedResponseSuppressionExecutionContext; // ivar: _unintendedResponseSuppressionExecutionContext
@property (retain, nonatomic) MHSchemaMHVoiceTriggerContext *voiceTriggerContext; // ivar: _voiceTriggerContext
@property (retain, nonatomic) MHSchemaMHVoiceTriggerTwoShotDetected *voiceTriggerTwoShotDetected; // ivar: _voiceTriggerTwoShotDetected
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
-(void)deleteAcousticFalseTriggerMitigationEvaluationContext;
-(void)deleteAdblockerContext;
-(void)deleteApplicationPlaybackAttempted;
-(void)deleteAsrAudioConfigureStarted;
-(void)deleteAssistantDaemonAudioBluetoothInfo;
-(void)deleteAssistantDaemonAudioConfigureContext;
-(void)deleteAssistantDaemonAudioFetchRouteContext;
-(void)deleteAssistantDaemonAudioInitContext;
-(void)deleteAssistantDaemonAudioLateBufferDetected;
-(void)deleteAssistantDaemonAudioPrepareContext;
-(void)deleteAssistantDaemonAudioPrewarmContext;
-(void)deleteAssistantDaemonAudioRecordingContext;
-(void)deleteAssistantDaemonAudioRecordingFirstBufferContext;
-(void)deleteAssistantDaemonAudioRecordingInterruptionContext;
-(void)deleteAssistantDaemonAudioRecordingInterruptionStartedTier1;
-(void)deleteAssistantDaemonAudioRecordingLastBufferContext;
-(void)deleteAssistantDaemonAudioRecordingMissedBufferDetected;
-(void)deleteAssistantDaemonAudioSessionSetActiveContext;
-(void)deleteAssistantDaemonAudioSessionSetInactiveContext;
-(void)deleteAssistantDaemonAudioStartRecordingContext;
-(void)deleteAssistantDaemonAudioStopRecordingContext;
-(void)deleteAssistantDaemonAudioTwoShotTransitionContext;
-(void)deleteCarPlayLangaugeMismatched;
-(void)deleteCoreSpeechPreprocessorCompleted;
-(void)deleteDarwinConnectedDeviceWakeContext;
-(void)deleteEndpointDelayContext;
-(void)deleteEndpointDetected;
-(void)deleteEndpointLatencyInfoReported;
-(void)deleteEndpointerAccessibleContext;
-(void)deleteEndpointerUsed;
-(void)deleteEventMetadata;
-(void)deleteFinalMitigationRecommendation;
-(void)deleteLatticeFalseTriggerMitigationEvaluationContext;
-(void)deleteMhId;
-(void)deleteOnDeviceEndpointerContext;
-(void)deleteServerEndpointerContext;
-(void)deleteSiriLaunchRequestContext;
-(void)deleteUnintendedResponseSuppressionExecutionContext;
-(void)deleteVoiceTriggerContext;
-(void)deleteVoiceTriggerTwoShotDetected;
-(void)writeTo:(id)arg0 ;


@end


#endif