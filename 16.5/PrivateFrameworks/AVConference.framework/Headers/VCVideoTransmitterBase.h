// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOTRANSMITTERBASE_H
#define VCVIDEOTRANSMITTERBASE_H

@class NSString;
@protocol VCConnectionChangedHandler;

#import <Foundation/Foundation.h>

#import "VCVideoRule.h"

@interface VCVideoTransmitterBase : NSObject <VCConnectionChangedHandler>

 {
    *void _controlInfoGenerator;
    unsigned int _captureWidth;
    unsigned int _captureHeight;
    unsigned int _txMaxBitrate;
    unsigned int _txMinBitrate;
    unsigned int _temporaryMaximumBitrate;
    VCVideoRule *_videoRule;
    NSString *_profileLevel;
    tagVCVideoTransmitterRealtimeSPI _realtimeSPI;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int encodingHeight; // ivar: _encodingHeight
@property (readonly) unsigned int encodingWidth; // ivar: _encodingWidth
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEndToEndBasedBandwidthProbingEnabled; // ivar: _isEndToEndBasedBandwidthProbingEnabled
@property (nonatomic) BOOL isServerBasedBandwidthProbingEnabled; // ivar: _isServerBasedBandwidthProbingEnabled
@property ? lastFrameTime; // ivar: _latestSampleBufferTimestamp
@property CGFloat lastKeyFrameSentTime; // ivar: _lastKeyFrameSentTime
@property unsigned int lastRTPTimestamp; // ivar: _timestamp
@property CGFloat lastSentAudioHostTime; // ivar: _lastSentAudioHostTime
@property unsigned int lastSentAudioSampleTime; // ivar: _lastSentAudioSampleTime
@property (readonly) Class superclass;
@property (nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate
@property (nonatomic) unsigned int targetBitrateChangeCounter; // ivar: _targetBitrateChangeCounter
@property (readonly) unsigned int targetFramerate; // ivar: _targetFramerate


-(BOOL)setEncodingMode:(int)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg0 ;
-(void)collectChannelMetrics:(struct ? *)arg0 interval:(float)arg1 ;
-(void)dealloc;
-(void)generateKeyFrameWithFIRType:(int)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleThermalLevelChange:(int)arg0 ;
-(void)setFECRatio:(CGFloat)arg0 ;
-(void)setFECRedundancyVector:(struct ? *)arg0 ;
-(void)setHighestActiveQualityIndex:(unsigned int)arg0 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg0 ;
-(void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg0 ;
-(void)setStreamIDs:(*unsigned short)arg0 numOfStreamIDs:(unsigned char)arg1 repairedStreamIDs:(*unsigned short)arg2 numOfRepairedStreamIDs:(unsigned char)arg3 ;
-(void)setTemporalBitrateArray:(id)arg0 ;
-(void)startVideo;
-(void)stopVideo;
-(void)updateWindowState:(int)arg0 isLocal:(BOOL)arg1 windowRect:(struct CGRect )arg2 ;


@end


#endif