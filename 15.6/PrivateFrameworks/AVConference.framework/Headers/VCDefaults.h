// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCDEFAULTS_H
#define VCDEFAULTS_H


#import <Foundation/Foundation.h>


@interface VCDefaults : NSObject {
    int _forceCaptureWidth;
    int _forceCaptureHeight;
    int _forceEncodeWidth;
    int _forceEncodeHeight;
    int _forceEncodeFramerate;
    int _forceFramerate;
    int _forceBitrate;
    int _forceVideoPayload;
    int _forceRecvVideoPayload;
    int _forceKeyFrameInterval;
}


@property (readonly) unsigned int aacBlockSize;
@property (readonly) unsigned char audioPriorityDecayFast;
@property (readonly) unsigned char audioPriorityDecaySlow;
@property (readonly) unsigned char audioPriorityRampUpSpeed;
@property (readonly) BOOL audioRecordingEnabled;
@property (readonly) float audioVoiceDetectionSensitivity;
@property (readonly) BOOL bandwidthEstimationDumpEnabled;
@property (readonly) int bundleAudio;
@property (readonly) BOOL cameraVideoStablization;
@property (readonly) BOOL canDecodeHD;
@property (readonly) float depthFrameRateMultiplier;
@property (readonly) BOOL disableRed;
@property (readonly) BOOL disableVAD;
@property (readonly) BOOL dumpMediaBlob;
@property (readonly) BOOL enableBitstreamCapture;
@property (readonly) BOOL enableGFTStatsReceiveThread;
@property (readonly) BOOL enableGFTStatsReporting;
@property (readonly) BOOL enableHEIFAndHEVCForMoments;
@property (readonly) BOOL enablePacketLogging;
@property (readonly) BOOL enableRecvBitstreamDump;
@property (readonly) int enableRxDecodeYUVDump;
@property (readonly) BOOL enableTxBitstreamDump;
@property (readonly) int enableTxSourceYuvDump;
@property (readonly) BOOL enableTxTimestampAlignmentLogs;
@property (readonly) BOOL enableVPBLogging;
@property (readonly) int enableiRATSuggestion;
@property (readonly) int encodingScore;
@property (readonly) int extraPayloads;
@property (readonly) BOOL forceARCapture;
@property (readonly) int forceAudioBitrate;
@property (readonly) int forceAudioChannelCount;
@property (readonly) int forceAudioHardwareSampleRate;
@property (readonly) int forceAudioPacketsPerBundle;
@property (readonly) int forceAudioPayload;
@property (readonly) float forceAudioPowerThreshold;
@property (readonly) int forceAudioPowerTimeInterval;
@property (readonly) BOOL forceAudioPriorityEnabled;
@property (readonly) unsigned char forceAudioPriorityValue;
@property (readonly) int forceBitrate;
@property (readonly) int forceCaptureHeight;
@property (readonly) int forceCaptureWidth;
@property (readonly) BOOL forceDisableAudioPowerSpectrumRegister;
@property (readonly) BOOL forceDisableEffectsHealthCheck;
@property (readonly) BOOL forceDisableFaceZoom;
@property (readonly) BOOL forceDisableMediaEncryption;
@property (readonly) BOOL forceDisableMediaPriority;
@property (readonly) BOOL forceDisableMediaQueue;
@property (readonly) BOOL forceDisableMediaStalled;
@property (readonly) BOOL forceDisableMessageEncryption;
@property (readonly) BOOL forceDisableReporting;
@property (readonly) BOOL forceDisableThermal;
@property (readonly) BOOL forceDisableVideoDegraded;
@property (readonly) BOOL forceDisableVideoRuleCell720;
@property (readonly) BOOL forceDisableVideoRuleWiFi1080;
@property (readonly) BOOL forceDynamicEffectsFramerate;
@property (readonly) BOOL forceEVSWideBand;
@property (readonly) BOOL forceEnablePearlCamera;
@property (readonly) int forceEncodeFramerate;
@property (readonly) int forceEncodeHeight;
@property (readonly) int forceEncodeWidth;
@property (readonly) BOOL forceFECRepairStream;
@property (readonly) int forceFramerate;
@property (readonly) BOOL forceHWI;
@property (readonly) BOOL forceIPv6;
@property (readonly) int forceKeyFrameInterval;
@property (readonly) BOOL forceMirroredCapture;
@property (readonly) BOOL forceMultiwayHWI;
@property (readonly) BOOL forceMuteAtStart;
@property (readonly) BOOL forceOneToOneMode;
@property (readonly) int forceRecvVideoPayload;
@property (readonly) int forceRedMaxDelay;
@property (readonly) int forceRedNumPayloads;
@property (readonly) BOOL forceScreenHWI;
@property (readonly) BOOL forceUseFloat;
@property (readonly) int forceVideoPayload;
@property (readonly) BOOL forceVideoStreamDisableBitrateCap;
@property (readonly) int forceVideoStreamFramerate;
@property (readonly) int forceVideoStreamKeyFrameInterval;
@property (readonly) BOOL forceVideoStreamLowLatency;
@property (readonly) int forceVideoStreamPayload;
@property (readonly) int forceVideoStreamResolution;
@property (readonly) int forceVideoStreamRxMaxBitrate;
@property (readonly) int forceVideoStreamRxMinBitrate;
@property (readonly) int forceVideoStreamTxMaxBitrate;
@property (readonly) int forceVideoStreamTxMinBitrate;
@property (readonly) unsigned int forceVisibilityIndex;
@property (readonly) BOOL forceWiFiAssist; // ivar: _forceWiFiAssist
@property (readonly) BOOL forceWiFiAssistOutOfBudget; // ivar: _forceWiFiAssistOutOfBudget
@property (readonly) BOOL isFECVersion2Enabled; // ivar: _isFECVersion2Enabled
@property (readonly) int localRATTypeOverride;
@property (readonly) int localWRMLinkType;
@property (readonly) int max2GRate;
@property (readonly) unsigned int maxActiveVideoDecoders;
@property (readonly) unsigned int maxActiveVideoEncoders;
@property (readonly) BOOL mediaQueueDumpEnabled;
@property (readonly) unsigned int minParticipantCountSendVoiceActiveOnly;
@property (readonly) BOOL momentsUseBestVideoRule;
@property (readonly) BOOL momentsUserPreferenceEnabled;
@property (readonly) unsigned int multiwayAudioNetworkBitrateCapCellular;
@property (readonly) unsigned int multiwayAudioNetworkBitrateCapWifi;
@property (readonly) unsigned int multiwayVideoNetworkBitrateCapCellular;
@property (readonly) unsigned int multiwayVideoNetworkBitrateCapWifi;
@property (readonly) int packetExpirationTime;
@property (readonly) float pauseHeartbeatInterval;
@property (readonly) unsigned int prominenceActiveAccumulationThreshold;
@property (readonly) unsigned int prominenceActiveProbabilityThreshold;
@property (readonly) unsigned int prominenceInactiveAccumulationThreshold;
@property (readonly) unsigned int prominenceInactiveProbabilityThreshold;
@property (readonly) BOOL rateControlAllowBurstyLossRampDown;
@property (readonly) BOOL rateControlAllowVideoStop;
@property (readonly) int rateControlBasebandSlowDownFactor;
@property (readonly) BOOL rateControlDumpEnabled;
@property (readonly) int rateControlForceRxCap;
@property (readonly) int rateControlForceRxRate;
@property (readonly) int rateControlForceTxCap;
@property (readonly) int rateControlForceTxRate;
@property (readonly) BOOL rateControlLogEnabled;
@property (readonly) int rateControlStatisticsQueueWaitTime;
@property (readonly) int rateControllerType;
@property (readonly) int redundancyControlForceVideoRedundancyPercentage;
@property (readonly) CGFloat remoteMediaStallTimeout;
@property (readonly) BOOL shouldDisplayVideoInfoLayer;
@property (readonly) unsigned int silenceLevelMovingAveragePeriod;
@property (readonly) BOOL supportsOneToOneMode;
@property (readonly) BOOL useSBR;
@property (readonly) int videoStreamRateControlAlgorithm;
@property (readonly) BOOL videoStreamRateControlDumpEnabled;


+(BOOL)booleanValueForKey:(struct __CFString *)arg0 ;
+(BOOL)booleanValueForKey:(struct __CFString *)arg0 defaultValue:(BOOL)arg1 ;
+(CGFloat)getDoubleValueForKey:(struct __CFString *)arg0 defaultValue:(CGFloat)arg1 ;
+(NSInteger)integerValueForKey:(struct __CFString *)arg0 ;
+(NSInteger)integerValueForKey:(struct __CFString *)arg0 defaultValue:(NSInteger)arg1 ;
+(id)copyStringValueForKey:(struct __CFString *)arg0 ;
+(id)sharedInstance;
-(BOOL)enableAudioDumpParticipantLocal:(BOOL)arg0 ;
-(BOOL)enableAudioDumpParticipantRemote:(BOOL)arg0 ;
-(BOOL)forceUseInternalRTPThreadingWithDefaultValue:(BOOL)arg0 ;
-(BOOL)forceWifiAssist;
-(BOOL)forceWifiAssistOutOfBudget;
-(BOOL)shouldOverrideEffectsFramerate:(*unsigned int)arg0 ;
-(NSUInteger)retainCount;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(unsigned int)forceThermalLevelFramerate:(unsigned int)arg0 ;
-(void)release;
-(void)seperateString:(id)arg0 ;


@end


#endif