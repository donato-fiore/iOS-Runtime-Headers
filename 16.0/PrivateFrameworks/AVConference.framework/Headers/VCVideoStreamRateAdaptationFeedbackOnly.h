// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEOSTREAMRATEADAPTATIONFEEDBACKONLY_H
#define VCVIDEOSTREAMRATEADAPTATIONFEEDBACKONLY_H

@protocol OS_dispatch_source;


#import "VCVideoStreamRateAdaptation.h"
#import "AVCStatisticsCollector.h"

@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation {
    NSObject<OS_dispatch_source> *_rateControlFeedbackSource;
    AVCStatisticsCollector *_statisticsCollector;
    BOOL _useLowPrecisionEchoTimeStamp;
    unsigned int _previousRTPTimestamp;
    unsigned int _totalPacketsReceived;
    unsigned int _lastTimestamp;
    CGFloat _lastTimestampReceiveTime;
}


@property (nonatomic) BOOL didReceiveVideo; // ivar: _didReceiveVideo


-(CGFloat)owrd;
-(id)initWithRTPHandle:(struct tagHANDLE *)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 receiverStats:(id)arg2 dumpID:(unsigned int)arg3 reportingParentID:(int)arg4 statisticsCollector:(id)arg5 lowTimestampPrecision:(BOOL)arg6 ;
-(void)dealloc;
-(void)sendRateControlFeedback;
-(void)setEnableRateAdaptation:(BOOL)arg0 maxBitrate:(unsigned int)arg1 minBitrate:(unsigned int)arg2 adaptationInterval:(CGFloat)arg3 ;
-(void)startFeedbackSource;
-(void)stopFeedbackSource;
-(void)updateRTPReceiveWithTimestamp:(unsigned int)arg0 sampleRate:(unsigned int)arg1 time:(CGFloat)arg2 size:(unsigned int)arg3 endOfFrame:(BOOL)arg4 ;
-(void)updateRateControlInfoWithStatisticsMessage:(struct ? )arg0 ;


@end


#endif