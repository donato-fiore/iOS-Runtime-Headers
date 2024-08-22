// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIASTREAM_H
#define VCMEDIASTREAM_H

@class NSString, VCWeakObjectHolder, NSError, NSArray;
@protocol VCMediaStreamProtocol, RTCPReportProvider, VCSecurityEventHandler, VCConnectionChangedHandler, OS_dispatch_queue, VCMediaStreamDelegate, OS_dispatch_source, VCMomentsCollectorDelegate, VCMediaStreamNotification;


#import "VCObject.h"
#import "VCDatagramChannelIDS.h"
#import "VCMediaKeyIndex.h"
#import "VCCallInfoBlob.h"
#import "VCTransportSession.h"
#import "AVCRateControlFeedbackController.h"
#import "AVCStatisticsCollector.h"
#import "AVCBasebandCongestionDetector.h"
#import "VCMediaStreamConfig.h"
#import "VCMediaStreamTransport.h"
#import "VCNetworkFeedbackController.h"

@interface VCMediaStream : VCObject <VCMediaStreamProtocol, RTCPReportProvider, VCSecurityEventHandler, VCConnectionChangedHandler>

 {
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    _opaque_pthread_mutex_t _streamLock;
    VCDatagramChannelIDS *_datagramChannel;
    NSString *_idsDestination;
    id<VCMediaStreamDelegate> *_delegate;
    NSString *_callID;
    BOOL _isSRTPInitialized;
    BOOL _useRandomTS;
    BOOL _isReportingAgentOwner;
    CGFloat _rtpTimeoutEnabledTime;
    CGFloat _rtcpTimeoutEnabledTime;
    CGFloat _decryptionTimeoutEnabledTime;
    NSObject<OS_dispatch_source> *_rtcpSendHeartbeat;
    NSObject<OS_dispatch_source> *_timeoutHeartbeat;
    CGFloat _lastRTPTimeoutReportTime;
    CGFloat _lastRTCPTimeoutReportTime;
    CGFloat _lastDecryptionTimeoutReportTime;
    CGFloat _lastDecryptionMKMRecoveryTime;
    CGFloat _decryptionErrorStartTime;
    unsigned int _transportSessionID;
    int _clientPID;
    VCWeakObjectHolder *_notificationDelegate;
    VCWeakObjectHolder *_rtcpReportProvider;
    _VCMediaStreamTransportSetupInfo _transportSetupInfo;
    *unk _vcMediaCallback;
    VCMediaKeyIndex *_lastReceivedMKI;
    VCCallInfoBlob *_remoteEndpointInfo;
    VCTransportSession *_transportSession;
    NSError *_cachedError;
    *unk _notificationHandler;
    *unk _packetEventHandler;
    *tagVCNWConnectionMonitor _nwMonitor;
    *void _oneToOneControlInfoGenerator;
    AVCRateControlFeedbackController *_oneToOneFeedbackController;
    BOOL _mediaControlInfoCallbacksRegistered;
    *unk _statisticsHandler;
    BOOL _isWRMinitialized;
    BOOL _isNWMonitorSignalEnabled;
    BOOL _isRTTBasedFIRThrottlingEnabled;
    BOOL _areStatisticsRegistered;
    AVCStatisticsCollector *_statisticsCollector;
    int _nwMonitorHandlerIndex;
    int _rttMonitorHandlerIndex;
}


@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // ivar: _basebandCongestionDetector
@property (copy) NSArray *compoundStreamIDs; // ivar: _compoundStreamIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) VCMediaStreamConfig *defaultStreamConfig;
@property (readonly, nonatomic) VCMediaStreamTransport *defaultTransport;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // ivar: _feedbackController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSendingMedia;
@property (readonly, nonatomic) CGFloat lastReceivedRTCPPacketTime;
@property (readonly, nonatomic) CGFloat lastReceivedRTPPacketTime;
@property (readonly, nonatomic) unsigned int localSSRC; // ivar: _localSSRC
@property (readonly, nonatomic) *void mediaControlInfoGenerator; // ivar: _mediaControlInfoGenerator
@property (readonly, nonatomic) unsigned int mediaControlInfoGeneratorType; // ivar: _mediaControlInfoGeneratorType
@property (nonatomic) *tagVCMediaQueue mediaQueue; // ivar: _mediaQueue
@property (nonatomic) NSObject<VCMomentsCollectorDelegate> *momentsCollectorDelegate; // ivar: _momentsCollectorDelegate
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // ivar: _networkFeedbackController
@property (nonatomic) NSObject<VCMediaStreamNotification> *notificationDelegate;
@property (readonly, nonatomic) VCMediaStreamConfig *oneToOneStreamConfig;
@property (nonatomic) int operatingMode; // ivar: _operatingMode
@property (readonly, nonatomic) CGFloat rtcpHeartbeatLeeway;
@property (nonatomic) NSObject<RTCPReportProvider> *rtcpReportProvider;
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *transportArray; // ivar: _transportArray


+(BOOL)isSameSRTPKey:(id)arg0 newKey:(id)arg1 ;
-(BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg0 reportCount:(char *)arg1 ;
-(BOOL)handleEncryptionInfoChange:(id)arg0 ;
-(BOOL)initializeTransportSessionWithIDSDestination:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeTransportSessionWithNWConnectionID:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeTransportSessionWithSocketDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeTransportSetupInfoWithIDSDestination:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeTransportSetupInfoWithTransportSession:(*id)arg0 ;
-(BOOL)isDecryptionTimeoutEnabled;
-(BOOL)isRTCPSendEnabled;
-(BOOL)isRTCPTimeoutEnabled;
-(BOOL)isRTPTimeoutEnabled;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)setStreamConfig:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setupNWConnectionWithID:(id)arg0 ;
-(BOOL)startMediaTransportsWithError:(*id)arg0 ;
-(BOOL)updateRemoteAddressWithConfig:(id)arg0 error:(*id)arg1 ;
-(CGFloat)computeNextTimoutWithEnabledTime:(CGFloat)arg0 timeoutInterval:(CGFloat)arg1 lastReceivedPacketTime:(CGFloat)arg2 currentTime:(CGFloat)arg3 lastTimeoutReportTime:(CGFloat)arg4 ;
-(NSInteger)streamDirection;
-(char *)streamStateToString:(int)arg0 ;
-(id)copyDelegate;
-(id)createTransportWithStreamConfig:(id)arg0 ssrc:(unsigned int)arg1 ;
-(id)getMediaStreamConfigForControlInfoGenerator:(id)arg0 ;
-(id)init;
-(id)initWithTransportSessionID:(unsigned int)arg0 ;
-(id)initWithTransportSessionID:(unsigned int)arg0 localSSRC:(unsigned int)arg1 ;
-(id)setLocalParticipantInfo:(id)arg0 networkSockets:(id)arg1 withError:(*id)arg2 ;
-(id)setPause:(BOOL)arg0 ;
-(id)setupRTPForIDS;
-(id)setupRTPWithIDSDestination:(id)arg0 error:(*id)arg1 ;
-(id)setupRTPWithIPInfo:(id)arg0 error:(*id)arg1 ;
-(id)setupRTPWithLocalParticipantInfo:(id)arg0 error:(*id)arg1 ;
-(id)setupRTPWithNWConnectionID:(id)arg0 error:(*id)arg1 ;
-(id)setupRTPWithSocketDictionary:(id)arg0 error:(*id)arg1 ;
-(id)start;
-(id)stop;
-(id)supportedPayloads;
-(int)handleMediaCallbackNotification:(int)arg0 inData:(*void)arg1 outData:(*void)arg2 ;
-(int)registerStatisticsHandler:(id)arg0 statisticType:(int)arg1 ;
-(struct tagHANDLE *)createRTPHandleWithStreamConfig:(id)arg0 payloadType:(int)arg1 localSSRC:(unsigned int)arg2 ;
-(unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg0 ;
-(unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg0 ;
-(void)checkDecryptionTimeoutAgainstTime:(CGFloat)arg0 decryptionErrorStartTime:(CGFloat)arg1 ;
-(void)checkDecryptionTimeoutForMKMRecoveryAgainstTime:(CGFloat)arg0 decryptionErrorStartTime:(CGFloat)arg1 ;
-(void)checkForDecryptionTimeout;
-(void)checkRTCPPacketTimeoutAgainstTime:(CGFloat)arg0 lastReceivedPacketTime:(CGFloat)arg1 ;
-(void)checkRTPPacketTimeoutAgainstTime:(CGFloat)arg0 lastReceivedPacketTime:(CGFloat)arg1 ;
-(void)cleanupNWConnection:(*id)arg0 ;
-(void)collectRxChannelMetrics:(struct ? *)arg0 ;
-(void)collectRxChannelMetrics:(struct ? *)arg0 interval:(float)arg1 ;
-(void)collectTxChannelMetrics:(struct ? *)arg0 ;
-(void)createLocalMediaControlInfoGeneratorWithType:(unsigned int)arg0 version:(unsigned char)arg1 ;
-(void)createNWMonitor;
-(void)dealloc;
-(void)decryptionStatusChanged:(BOOL)arg0 ;
-(void)destroyNWMonitor;
-(void)destroyNWMonitorInternal;
-(void)didEnterState:(int)arg0 oldState:(int)arg1 ;
-(void)dupNWConnectionBackingSocket:(*int)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleStartDidSucceed:(BOOL)arg0 withError:(id)arg1 ;
-(void)handleTransportSessionEvent:(unsigned int)arg0 info:(id)arg1 ;
-(void)initializeTransportSetupInfoWithRTPSocket:(int)arg0 RTCPSocket:(int)arg1 ;
-(void)initializeTransportSetupInfoWithSocketDictionary:(id)arg0 ;
-(void)initializeWRMUsingRtpHandle:(struct tagHANDLE *)arg0 ;
-(void)lock;
-(void)notifyDelegateDidReceiveRTCPPackets:(struct _RTCPPacketList *)arg0 ;
-(void)onCallIDChanged;
-(void)onPauseWithCompletionHandler:(id)arg0 ;
-(void)onRTCPTimeout;
-(void)onRTPTimeout;
-(void)onResumeWithCompletionHandler:(id)arg0 ;
-(void)onSendRTCPPacket;
-(void)onStartWithCompletionHandler:(id)arg0 ;
-(void)onStopWithCompletionHandler:(id)arg0 ;
-(void)processDecryptionTimeoutSettingChange;
-(void)processRTCPTimeoutSettingChange;
-(void)processRTPTimeoutSettingChange;
-(void)registerCallbacksForMediaControlInfoGenerator:(*void)arg0 forDirection:(NSInteger)arg1 options:(unsigned int)arg2 ;
-(void)registerMediaControlInfoGeneratorWithConfigs:(id)arg0 ;
-(void)registerStatistics:(id)arg0 ;
-(void)resetDecryptionTimeout;
-(void)resetRTCPSendHeartbeatTimer:(NSUInteger)arg0 ;
-(void)resetTimeoutHeartbeatTimer:(NSUInteger)arg0 ;
-(void)resetTimeoutHeartbeatWithRTPTimeout:(CGFloat)arg0 rtcpTimeout:(CGFloat)arg1 decryptionTimeout:(CGFloat)arg2 currentTime:(CGFloat)arg3 ;
-(void)rtcpSendHeartbeat;
-(void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg0 ;
-(void)setDecryptionTimeOutEnabled:(BOOL)arg0 ;
-(void)setDecryptionTimeOutInterval:(CGFloat)arg0 ;
-(void)setPause:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg0 ;
-(void)setRtcpSendInterval:(CGFloat)arg0 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg0 ;
-(void)setRtcpTimeOutInterval:(CGFloat)arg0 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg0 ;
-(void)setRtpTimeOutInterval:(CGFloat)arg0 ;
-(void)setStreamDirection:(NSInteger)arg0 ;
-(void)setStreamIDs:(id)arg0 repairStreamIDs:(id)arg1 ;
-(void)setupCallbacksWithNWConnectionMonitor:(struct tagVCNWConnectionMonitor *)arg0 ;
-(void)setupMediaStream;
-(void)startRTCPSendHeartbeat;
-(void)startTimeoutHeartbeat;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stopInternalWithHandler:(id)arg0 ;
-(void)stopMediaTransports;
-(void)stopRTCPSendHeartbeat;
-(void)stopTimeoutHeartbeat;
-(void)timeoutHeartbeat;
-(void)unlock;
-(void)unregisterMediaControlInfoGenerator;
-(void)unregisterStatistics;
-(void)unregisterWRMCallback;
-(void)willExitState:(int)arg0 newState:(int)arg1 ;


@end


#endif