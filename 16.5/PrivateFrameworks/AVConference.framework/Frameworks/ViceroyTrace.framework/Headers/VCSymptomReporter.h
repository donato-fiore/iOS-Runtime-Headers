// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSYMPTOMREPORTER_H
#define VCSYMPTOMREPORTER_H

@class SDRDiagnosticReporter, NSString;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCSymptomReporter : NSObject {
    unsigned int _callID;
    SDRDiagnosticReporter *_diagnosticReporter;
    NSObject<OS_os_log> *_osLogNetworkingHandle;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    *unk _symptomReporterCallback;
    id *_symptomReporterContext;
    BOOL _didSubmitABCSymptom;
    BOOL _didShowAlreadyExistFailure;
    BOOL _isSymptomReportingEnabled;
    NSString *_procName;
}


@property (copy, nonatomic) NSString *loggingDirectory; // ivar: _loggingDirectory


-(id)initWithCallID:(unsigned int)arg0 ;
-(id)symptomNameWithDomain:(id)arg0 subtypeContext:(id)arg1 ;
-(int)reportAlgosScoreWithOptionalDictionary:(id)arg0 ;
-(int)reportAudioStall:(id)arg0 ;
-(int)reportBandwidthEstimationMismatch;
-(int)reportCCReliableDataNotReceived:(id)arg0 ;
-(int)reportConnectionTimeout:(id)arg0 ;
-(int)reportExtendedPoorConnectionWithOptionalDictionary:(id)arg0 ;
-(int)reportFailedToStartAudio;
-(int)reportFailedToStartVideo;
-(int)reportFrameQueueForDecodeHighWaterMarkExceeded;
-(int)reportHighConsecutiveAudioErasuresWithOptionalDictionary:(id)arg0 ;
-(int)reportIDSDataChannelEventUsageError;
-(int)reportInactiveSlotsInChannelSequence;
-(int)reportInvalidTransportType;
-(int)reportInvalidVideoStallTime;
-(int)reportKeyFrameGenerationFailure;
-(int)reportKeyIndexNotReceived;
-(int)reportMKMDecryptionWithOptionalDictionary:(id)arg0 ;
-(int)reportMediaQueueFlushingTooFrequent;
-(int)reportMediaQueueOvershoot;
-(int)reportMediaQueuePoolEmpty;
-(int)reportMediaSymptomSubtypeConnectionWithContext:(id)arg0 ;
-(int)reportNegativeJitterBufferSize;
-(int)reportNoFirstFrameWithOptionalDictionary:(id)arg0 ;
-(int)reportNoMediaBlob;
-(int)reportNoPacketsWithOptionalDictionary:(id)arg0 ;
-(int)reportNoRelayResponseWithOptionalDictionary:(id)arg0 ;
-(int)reportNoSNATMAPResponseWithOptionalDictionary:(id)arg0 ;
-(int)reportNoScreenFirstFrame:(id)arg0 ;
-(int)reportNoServerStatsActivity;
-(int)reportOSLogSymptomWithDictionary:(id)arg0 ;
-(int)reportQRATKNTokenError;
-(int)reportRateTargetMismatch;
-(int)reportReceiveSessionStatsFailed;
-(int)reportSessionInfoErrorResponse;
-(int)reportSignalingFailed:(id)arg0 ;
-(int)reportSignificantHandshakeDelayWithOptionalDictionary:(id)arg0 ;
-(int)reportSustainedHighDownlinkPacketLoss;
-(int)reportSustainedHighUplinkPacketLoss;
-(int)reportSymptomInternal:(unsigned int)arg0 optionalDictionary:(id)arg1 ;
-(int)reportSymptomWithGroupID:(id)arg0 signature:(id)arg1 actions:(id)arg2 ;
-(int)reportSymptomWithIDSDestination:(id)arg0 sessionID:(id)arg1 type:(id)arg2 subType:(id)arg3 context:(id)arg4 ;
-(int)reportSymptomWithOptions:(id)arg0 type:(id)arg1 subType:(id)arg2 context:(id)arg3 ;
-(int)reportSymptomWithType:(id)arg0 subType:(id)arg1 context:(id)arg2 actions:(id)arg3 ;
-(int)reportTargetBitrateOvershoot;
-(int)reportTerminateProcessWithOptionalDictionary:(id)arg0 ;
-(int)reportUnexpectedHighRTT;
-(int)reportUnexpectedLowTargetBitrate;
-(int)reportUnexpectedRampUpFrozen;
-(int)reportVideoStall:(id)arg0 ;
-(int)reportVideoSymptom:(id)arg0 ;
-(int)reportVideoSymptom:(id)arg0 options:(id)arg1 ;
-(int)requestRemoteSideWithOptions:(id)arg0 context:(id)arg1 signature:(id)arg2 ;
-(void)VCSymptomReporterSetCallback:(*unk)arg0 context:(*void)arg1 ;
-(void)dealloc;
-(void)reportSymptom:(unsigned int)arg0 optionalDictionary:(id)arg1 ;


@end


#endif