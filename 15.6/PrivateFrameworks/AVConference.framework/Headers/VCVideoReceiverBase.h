// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEORECEIVERBASE_H
#define VCVIDEORECEIVERBASE_H

@class NSString;
@protocol VCMediaStreamSyncDestination, VCConnectionChangedHandler, VCVideoReceiverDelegate, VCMediaStreamSyncSource;

#import <Foundation/Foundation.h>

#import "VCMediaStreamSynchronizer.h"

@interface VCVideoReceiverBase : NSObject <VCMediaStreamSyncDestination, VCConnectionChangedHandler>

 {
    float lastLastVideoStallDuration;
    unsigned int _rtpTimestampRate;
    VCMediaStreamSynchronizer *_mediaStreamSynchronizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCVideoReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) float lastLastVideoStallDuration; // ivar: _lastLastVideoStallDuration
@property (readonly) CGFloat lastReceivedVideoRTCPPacketTime; // ivar: _lastReceivedVideoRTCPPacketTime
@property (readonly) CGFloat lastReceivedVideoRTPPacketTime; // ivar: _lastReceivedVideoRTPPacketTime
@property int remoteVideoOrientation; // ivar: _remoteVideoOrientation
@property CGFloat roundTripTime; // ivar: _roundTripTime
@property (readonly) Class superclass;
@property (nonatomic) NSObject<VCMediaStreamSyncSource> *syncSource; // ivar: _syncSource


-(BOOL)startSynchronization:(id)arg0 ;
-(id)init;
-(void)collectChannelMetrics:(struct ? *)arg0 interval:(float)arg1 ;
-(void)dealloc;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)pauseVideo;
-(void)rtcpSendIntervalElapsed;
-(void)setEnableCVO:(BOOL)arg0 cvoExtensionID:(NSUInteger)arg1 ;
-(void)setEnableRateAdaptation:(BOOL)arg0 maxBitrate:(unsigned int)arg1 minBitrate:(unsigned int)arg2 adaptationInterval:(CGFloat)arg3 ;
-(void)setSynchronizer:(id)arg0 ;
-(void)setTargetStreamID:(unsigned short)arg0 ;
-(void)startVideo;
-(void)stopSynchronization;
-(void)stopVideo;
-(void)updateSourcePlayoutTimestamp:(struct ? *)arg0 ;


@end


#endif