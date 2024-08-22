// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOSTREAMRATEADAPTATION_H
#define VCVIDEOSTREAMRATEADAPTATION_H


#import <Foundation/Foundation.h>

#import "VCVideoStreamRateController.h"
#import "VCMediaStreamStats.h"

@interface VCVideoStreamRateAdaptation : NSObject {
    unsigned int _receivedTmmbnBitrate;
    BOOL _rateAdaptationEnabled;
    BOOL _downlinkQualityDidChange;
    CGFloat _tmmbrSendTime;
    CGFloat _tmmbnReceiveTime;
    CGFloat _adaptationTime;
    CGFloat _averageBitrateWindowDuration;
    *opaqueRTCReporting _reportingAgent;
    int _reportingModuleID;
    VCVideoStreamRateController *_rateController;
    VCMediaStreamStats *_stats;
}


@property (readonly, nonatomic) BOOL isOperatingAtMaxBitrate; // ivar: _isOperatingAtMaxBitrate
@property (readonly, nonatomic) BOOL isOperatingAtMinBitrate; // ivar: _isOperatingAtMinBitrate
@property (nonatomic) CGFloat maxOWRD; // ivar: _maxOWRD
@property (readonly, nonatomic) CGFloat nowrd;
@property (readonly, nonatomic) CGFloat nowrdAcc;
@property (readonly, nonatomic) CGFloat nowrdShort;
@property (readonly, nonatomic) unsigned int operatingBitrate; // ivar: _operatingBitrate
@property (readonly, nonatomic) CGFloat owrd;
@property (readonly, nonatomic) CGFloat packetLossPercentage; // ivar: _packetLossPercentage
@property (readonly, nonatomic) CGFloat roundTripTime; // ivar: _tmmbRTT
@property (readonly, nonatomic) *tagHANDLE rtpHandle; // ivar: _rtpHandle
@property (readonly, nonatomic) unsigned int sendTmmbrBitrate; // ivar: _sendTmmbrBitrate


-(BOOL)runVideoStreamRateAdaptation;
-(id)className;
-(id)initWithRTPHandle:(struct tagHANDLE *)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 receiverStats:(id)arg2 dumpID:(unsigned int)arg3 reportingParentID:(int)arg4 ;
-(unsigned int)averageReceivedBitrate;
-(void)dealloc;
-(void)receivedTMMBN:(unsigned int)arg0 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg0 ;
-(void)scheduleTMMBR:(unsigned int)arg0 ;
-(void)setEnableRateAdaptation:(BOOL)arg0 maxBitrate:(unsigned int)arg1 minBitrate:(unsigned int)arg2 adaptationInterval:(CGFloat)arg3 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned int)arg0 sampleRate:(unsigned int)arg1 time:(CGFloat)arg2 size:(unsigned int)arg3 endOfFrame:(BOOL)arg4 ;
-(void)updateVideoStall:(BOOL)arg0 withStallDuration:(unsigned int)arg1 ;


@end


#endif