// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCMEDIASTREAMCONFIG_H
#define AVCMEDIASTREAMCONFIG_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "AVCAudioStreamConfig.h"
#import "AVCNetworkAddress.h"
#import "AVCTextStreamConfig.h"
#import "AVCVideoStreamConfig.h"

@interface AVCMediaStreamConfig : NSObject {
    BOOL _jitterBufferModeSet;
}


@property (nonatomic) NSInteger SRTCPCipherSuite; // ivar: _SRTCPCipherSuite
@property (nonatomic) NSInteger SRTPCipherSuite; // ivar: _SRTPCipherSuite
@property (nonatomic) NSInteger accessNetworkType; // ivar: _accessNetworkType
@property (retain, nonatomic) AVCAudioStreamConfig *audio; // ivar: _audio
@property (copy, nonatomic) NSString *cName; // ivar: _cName
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) NSUInteger fixedJitterBufferSize; // ivar: _fixedJitterBufferSize
@property (nonatomic) unsigned int jitterBufferMode; // ivar: _jitterBufferMode
@property (retain, nonatomic) AVCNetworkAddress *localAddress; // ivar: _localAddress
@property (nonatomic) unsigned int localSSRC; // ivar: _localSSRC
@property (nonatomic) NSUInteger networkClockID; // ivar: _networkClockID
@property (nonatomic, getter=isRateAdaptationEnabled) BOOL rateAdaptationEnabled; // ivar: _rateAdaptationEnabled
@property (retain, nonatomic) NSData *receiveMasterKey;
@property (retain, nonatomic) NSData *receiveMediaKey; // ivar: _receiveMediaKey
@property (nonatomic) NSUInteger recommendedMTU; // ivar: _recommendedMTU
@property (retain, nonatomic) AVCNetworkAddress *remoteAddress; // ivar: _remoteAddress
@property (nonatomic) unsigned int remoteSSRC; // ivar: _remoteSSRC
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled; // ivar: _rtcpEnabled
@property (nonatomic) unsigned short rtcpRemotePort; // ivar: _rtcpRemotePort
@property (nonatomic) CGFloat rtcpSendInterval; // ivar: _rtcpSendInterval
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled; // ivar: _rtcpTimeOutEnabled
@property (nonatomic) CGFloat rtcpTimeOutInterval; // ivar: _rtcpTimeOutInterval
@property (nonatomic, getter=isRTCPXREnabled) BOOL rtcpXREnabled; // ivar: _rtcpXREnabled
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled; // ivar: _rtpTimeOutEnabled
@property (nonatomic) CGFloat rtpTimeOutInterval; // ivar: _rtpTimeOutInterval
@property (nonatomic) NSUInteger rxPayloadType; // ivar: _rxPayloadType
@property (retain, nonatomic) NSData *sendMasterKey;
@property (retain, nonatomic) NSData *sendMediaKey; // ivar: _sendMediaKey
@property (nonatomic) NSInteger streamInputID; // ivar: _streamInputID
@property (retain, nonatomic) AVCTextStreamConfig *text; // ivar: _text
@property (nonatomic) NSUInteger txPayloadType; // ivar: _txPayloadType
@property (retain, nonatomic) AVCVideoStreamConfig *video; // ivar: _video


+(NSInteger)cipherSuiteWithClientCipherSuite:(NSInteger)arg0 ;
+(NSInteger)clientCipherSuiteWithCipherSuite:(NSInteger)arg0 ;
+(NSInteger)clientStreamDirectionWithDirection:(NSInteger)arg0 ;
+(NSInteger)streamDirectionWithClientDirection:(NSInteger)arg0 ;
+(id)dictionaryForCommonStreamConfig:(id)arg0 ;
-(BOOL)isAudioCodecMaskValid;
-(BOOL)isAudioCodecValid;
-(BOOL)isJitterBufferModeValid;
-(BOOL)isStreamInputIDValid;
-(BOOL)isValidAudioConfig;
-(BOOL)isValidTextConfig;
-(BOOL)isValidVideoConfig;
-(id)description;
-(id)dictionary;
-(id)init;
-(void)dealloc;
-(void)setUpWithDictionary:(id)arg0 ;


@end


#endif