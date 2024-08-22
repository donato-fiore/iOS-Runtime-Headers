// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIASTREAMCONFIG_H
#define VCMEDIASTREAMCONFIG_H

@class NSString, NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "VCNetworkAddress.h"
#import "VCMediaStreamMultiwayConfig.h"
#import "VCNetworkFeedbackController.h"
#import "VCMediaStreamRateControlConfig.h"

@interface VCMediaStreamConfig : NSObject {
    *tagVCJBTargetEstimatorSynchronizer _jbTargetEstimatorSynchronizer;
}


@property (nonatomic) NSInteger SRTCPCipherSuite; // ivar: _SRTCPCipherSuite
@property (nonatomic) NSInteger SRTPCipherSuite; // ivar: _SRTPCipherSuite
@property (copy, nonatomic) NSString *cName; // ivar: _cName
@property (nonatomic) int captureSource; // ivar: _captureSource
@property (nonatomic) unsigned int cellularUniqueTag; // ivar: _cellularUniqueTag
@property (nonatomic) CGFloat decryptionMKMRecoveryInterval; // ivar: _decryptionMKMRecoveryInterval
@property (nonatomic, getter=isDecryptionTimeOutEnabled) BOOL decryptionTimeOutEnabled; // ivar: _decryptionTimeOutEnabled
@property (nonatomic) CGFloat decryptionTimeOutInterval; // ivar: _decryptionTimeOutInterval
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) *tagVCJBTargetEstimatorSynchronizer jbTargetEstimatorSynchronizer;
@property (nonatomic, getter=isLatencySensitiveModeEnabled) BOOL latencySensitiveModeEnabled; // ivar: _latencySensitiveModeEnabled
@property (retain, nonatomic) VCNetworkAddress *localAddress; // ivar: _localAddress
@property (nonatomic) unsigned int localSSRC; // ivar: _localSSRC
@property (retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig; // ivar: _multiwayConfig
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // ivar: _networkFeedbackController
@property (readonly, nonatomic) NSInteger primaryTxCodecType;
@property (nonatomic, getter=isRateAdaptationEnabled) BOOL rateAdaptationEnabled; // ivar: _rateAdaptationEnabled
@property (retain, nonatomic) VCMediaStreamRateControlConfig *rateControlConfig; // ivar: _rateControlConfig
@property (retain, nonatomic) NSData *receiveMediaKey; // ivar: _receiveMediaKey
@property (nonatomic) NSUInteger recommendedMTU; // ivar: _recommendedMTU
@property (retain, nonatomic) VCNetworkAddress *remoteAddress; // ivar: _remoteAddress
@property (nonatomic) unsigned int remoteSSRC; // ivar: _remoteSSRC
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled; // ivar: _rtcpEnabled
@property (nonatomic, getter=isRTCPReceiveCallbackEnabled) BOOL rtcpReceiveCallbackEnabled; // ivar: _rtcpReceiveCallbackEnabled
@property (nonatomic) unsigned short rtcpRemotePort; // ivar: _rtcpRemotePort
@property (nonatomic) CGFloat rtcpSendInterval; // ivar: _rtcpSendInterval
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled; // ivar: _rtcpTimeOutEnabled
@property (nonatomic) CGFloat rtcpTimeOutInterval; // ivar: _rtcpTimeOutInterval
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled; // ivar: _rtpTimeOutEnabled
@property (nonatomic) CGFloat rtpTimeOutInterval; // ivar: _rtpTimeOutInterval
@property (nonatomic) unsigned int rtpTimestampRate; // ivar: _rtpTimestampRate
@property (readonly, nonatomic) NSDictionary *rxPayloadMap; // ivar: _rxPayloadMap
@property (nonatomic) *tagVCSecurityKeyHolder securityKeyHolder; // ivar: _securityKeyHolder
@property (retain, nonatomic) NSData *sendMediaKey; // ivar: _sendMediaKey
@property (nonatomic) int sframeCipherSuite; // ivar: _sframeCipherSuite
@property (readonly, nonatomic) NSDictionary *txPayloadMap; // ivar: _txPayloadMap


-(id)description;
-(id)init;
-(id)initWithClientDictionary:(id)arg0 ;
-(void)addRxPayloadType:(int)arg0 ;
-(void)addRxPayloadType:(int)arg0 networkPayload:(unsigned int)arg1 ;
-(void)addTxPayloadType:(int)arg0 ;
-(void)addTxPayloadType:(int)arg0 networkPayload:(unsigned int)arg1 ;
-(void)applyMediaStreamClientDictionary:(id)arg0 ;
-(void)dealloc;
-(void)setupMediaStreamConfig;


@end


#endif