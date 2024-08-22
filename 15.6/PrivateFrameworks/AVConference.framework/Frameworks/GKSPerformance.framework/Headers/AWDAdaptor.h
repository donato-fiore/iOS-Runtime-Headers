// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDADAPTOR_H
#define AWDADAPTOR_H

@class NSMutableArray, TimingCollection;

#import <Foundation/Foundation.h>

#import "AWDStats.h"

@interface AWDAdaptor : NSObject {
    NSMutableArray *_rtpPacketLossRateArray;
    NSMutableArray *_jitterBufferUnderflowRateArray;
    NSMutableArray *_frameErasureRateArray;
    NSMutableArray *_jitterBufferResidencyTimeArray;
}


@property BOOL RTStatsReceived; // ivar: _RTStatsReceived
@property (retain) AWDStats *awdstat; // ivar: _awdstat
@property BOOL callStarted; // ivar: _callStarted
@property (retain) TimingCollection *videoQualityTimers; // ivar: _videoQualityTimers


-(*unsigned int)generateHistogramForValues:(id)arg0 withBinBoundaries:(id)arg1 ;
-(BOOL)wifiCallingAddSamplesGenerateAndSendCallEndReport:(id)arg0 ;
-(CGFloat)compute95thPercentile:(id)arg0 ;
-(CGFloat)computeMean:(id)arg0 ;
-(CGFloat)computeMedian:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)generateFaceTimeAggregatedCallStats:(id)arg0 ;
-(void)generateSecondDisplayAggregatedCallStats:(id)arg0 ;
-(void)parseAWDEvent:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseAudioTierChange:(id)arg0 ;
-(void)parseCellTechChange:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseConnectionEstablishment:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseConnectivityTimings:(id)arg0 ;
-(void)parseDTXReport:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseDisconnectReport:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseDuplication:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseFaceTimeAggregatedSegmentStats:(id)arg0 ;
-(void)parseHomeKitIPCameraFirstVideoFrame:(id)arg0 ;
-(void)parseHomeKitIPCameraRealtimeStatsReport:(id)arg0 ;
-(void)parseHomeKitIPCameraStreamStart:(id)arg0 ;
-(void)parseModeRoleTransportReport:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseRTStats:(id)arg0 ;
-(void)parseVideoDegraded:(id)arg0 direction:(unsigned short)arg1 ;
-(void)parseVideoProperty:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseVideoStats:(unsigned short)arg0 dict:(id)arg1 ;
-(void)parseWindowMode:(unsigned short)arg0 dict:(id)arg1 ;
-(void)processSecondDisplayLogTransportInfoStats;
-(void)sendMessageWithMethod:(unsigned short)arg0 respCode:(unsigned short)arg1 dict:(id)arg2 ;
-(void)updateHomeKitIPCameraKeyFrameReceivedReport;
-(void)updateHomeKitIPCameraPLISentReport;
-(void)updateMomentsStats:(id)arg0 ;
-(void)wifiCallingAddSamples:(id)arg0 ;


@end


#endif