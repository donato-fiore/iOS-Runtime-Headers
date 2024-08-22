// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCAPTIONSSTREAMSENDGROUP_H
#define VCCAPTIONSSTREAMSENDGROUP_H

@class NSNumber, NSString;
@protocol VCAudioCaptionsDelegate, VCCaptionsSource, VCAudioStreamGroup, VCCaptionsSourceDelegate;


#import "VCMediaStreamSendGroup.h"
#import "VCAudioStreamGroupCommon.h"
#import "VCAudioCaptions.h"

@interface VCCaptionsStreamSendGroup : VCMediaStreamSendGroup <VCAudioCaptionsDelegate, VCCaptionsSource, VCAudioStreamGroup>

 {
    VCAudioStreamGroupCommon *_common;
    VCAudioCaptions *_audioCaptions;
    *opaqueVCCaptionsEncoder _captionsEncoder;
    id<VCCaptionsSourceDelegate> *_captionsDelegate;
    NSNumber *_activeCaptionsStreamID;
}


@property (readonly, nonatomic) BOOL captionsEnabled;
@property (readonly, nonatomic) BOOL captionsSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int deviceRole;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;
@property (readonly) Class superclass;


-(id)activeStreamKeys;
-(id)captionsDelegate;
-(id)initWithConfig:(id)arg0 ;
-(id)startCapture;
-(id)stopCapture;
-(id)willStart;
-(void)collectAndLogChannelMetrics:(struct ? *)arg0 ;
-(void)dealloc;
-(void)didDisableCaptions:(BOOL)arg0 error:(id)arg1 ;
-(void)didEnableCaptions:(BOOL)arg0 error:(id)arg1 ;
-(void)didStartCaptioningWithReason:(int)arg0 streamToken:(NSInteger)arg1 ;
-(void)didStop;
-(void)didStopCaptioningWithReason:(int)arg0 streamToken:(NSInteger)arg1 ;
-(void)didUpdateCaptions:(id)arg0 ;
-(void)dispatchedUpdateActiveMediaStreamIDs:(id)arg0 withTargetBitrate:(unsigned int)arg1 mediaBitrates:(id)arg2 rateChangeCounter:(unsigned int)arg3 ;
-(void)enableCaptions:(BOOL)arg0 ;
-(void)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(void)registerCaptionsEventDelegate:(id)arg0 ;
-(void)setCaptionsLocale:(id)arg0 ;
-(void)setReportingAgent:(struct opaqueRTCReporting *)arg0 ;
-(void)transmitTranscription:(id)arg0 ;


@end


#endif