// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIASTREAMTRANSPORT_H
#define VCMEDIASTREAMTRANSPORT_H


#import <Foundation/Foundation.h>

#import "AVCBasebandCongestionDetector.h"
#import "VCMediaStreamConfig.h"

@interface VCMediaStreamTransport : NSObject {
    unsigned int _localSSRC;
    BOOL _isSRTPInitialized;
    int _payloadType;
    ? _transportStreamInfo;
}


@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // ivar: _basebandCongestionDetector
@property (nonatomic) CGFloat decryptionMKMRecoveryInterval;
@property (nonatomic, getter=isDecryptionTimeoutEnabled) BOOL decryptionTimeoutEnabled;
@property (nonatomic) CGFloat decryptionTimeoutInterval;
@property (readonly, nonatomic) BOOL encryptionInfoReceived; // ivar: _encryptionInfoReceived
@property (readonly, nonatomic) unsigned short idsStreamId;
@property (readonly, nonatomic) CGFloat lastReceivedRTCPPacketTime;
@property (readonly, nonatomic) *tagVCCryptor receiverSframeCryptor; // ivar: _receiverSframeCryptor
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (readonly, nonatomic, getter=isRTCPSendEnabled) BOOL rtcpSendEnabled;
@property (nonatomic) CGFloat rtcpSendInterval;
@property (nonatomic, getter=isRTCPTimeoutEnabled) BOOL rtcpTimeoutEnabled;
@property (nonatomic) CGFloat rtcpTimeoutInterval;
@property (readonly, nonatomic) *tagHANDLE rtpHandle; // ivar: _rtpHandle
@property (nonatomic, getter=isRTPTimeoutEnabled) BOOL rtpTimeoutEnabled;
@property (nonatomic) CGFloat rtpTimeoutInterval;
@property (readonly, nonatomic) VCMediaStreamConfig *streamConfig; // ivar: _streamConfig
@property (nonatomic) NSInteger streamDirection;
@property (readonly, nonatomic) *tagVCCryptor transmitterSframeCryptor; // ivar: _transmitterSframeCryptor


+(BOOL)isSameSRTPKey:(id)arg0 newKey:(id)arg1 ;
+(int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(NSInteger)arg0 ;
+(int)getSRTPMediaKeyLength:(NSInteger)arg0 ;
-(BOOL)configureWithStreamConfig:(id)arg0 setupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 reducedSizeRTCPPackets:(BOOL)arg2 hopByHopEncryptRTCPPackets:(BOOL)arg3 statisticsCollector:(id)arg4 basebandCongestionDetector:(id)arg5 error:(*id)arg6 ;
-(BOOL)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT *)arg0 reportCount:(char *)arg1 ;
-(BOOL)isSameSRTPConfig:(id)arg0 ;
-(BOOL)isSendingMedia:(id)arg0 ;
-(BOOL)sendIntervalDidElapse:(*int)arg0 remainingTime:(*CGFloat)arg1 ;
-(BOOL)setThrottlingInterval:(CGFloat)arg0 ;
-(BOOL)setupRTPForIDS:(*id)arg0 ;
-(BOOL)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo *)arg0 error:(*id)arg1 ;
-(BOOL)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo *)arg0 error:(*id)arg1 ;
-(BOOL)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo *)arg0 error:(*id)arg1 ;
-(BOOL)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg0 error:(*id)arg1 ;
-(BOOL)setupSframeCryptorsWithError:(*id)arg0 ;
-(id)initWithHandle:(struct tagHANDLE *)arg0 localSSRC:(unsigned int)arg1 ;
-(id)rxNetworkPayloads;
-(int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg0 withMediaKey:(id)arg1 ;
-(int)onStart;
-(int)setupRTPWithTransportStreams;
-(int)setupSRTP;
-(struct tagVCCryptor *)createSframeCryptorWithStreamConfig:(id)arg0 ssrc:(unsigned int)arg1 error:(*id)arg2 ;
-(unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg0 ;
-(unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg0 ;
-(void)dealloc;
-(void)handleEncryptionInfoChange:(id)arg0 ;
-(void)onStop;
-(void)registerRTPPayloadMappings;
-(void)reset;
-(void)resetPayloadMapping;
-(void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg0 ;
-(void)updateLastGeneratedKeyMaterial;


@end


#endif