// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOCAPTIONSCOORDINATOR_H
#define VCAUDIOCAPTIONSCOORDINATOR_H

@class NSString;
@protocol VCAudioCaptionsDelegate, VCCaptionsSource, VCCaptionsSourceDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "VCAudioCaptions.h"
#import "VCAudioCaptionsBufferInfoCollection.h"

@interface VCAudioCaptionsCoordinator : NSObject <VCAudioCaptionsDelegate, VCCaptionsSource>

 {
    id<VCCaptionsSourceDelegate> *_captionsDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    *opaqueRTCReporting _reportingAgent;
    NSObject<OS_dispatch_semaphore> *_startStopSemaphore;
    VCAudioCaptions *_audioCaptions;
    VCAudioCaptionsBufferInfoCollection *_bufferInfos;
    BOOL _oneToOneEnabled;
    *opaqueVCVoiceDetector _voiceDetector;
    BOOL _isVoiceDetectorRunning;
    tagVCAudioFrameFormat _lastUsedAudioFormat;
}


@property (readonly, nonatomic) BOOL captionsEnabled;
@property (readonly, nonatomic) BOOL captionsSupported;
@property (nonatomic) NSInteger currentlyCaptionedStreamToken; // ivar: _currentlyCaptionedStreamToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) os_unfair_lock_s stateLock; // ivar: _stateLock
@property (readonly) Class superclass;


-(id)captionsDelegate;
-(id)initWithOneToOneEnabled:(BOOL)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 ;
-(void)dealloc;
-(void)didDisableCaptions:(BOOL)arg0 error:(id)arg1 ;
-(void)didEnableCaptions:(BOOL)arg0 error:(id)arg1 ;
-(void)didStartCaptioningWithReason:(int)arg0 ;
-(void)didStopCaptioningWithReason:(int)arg0 ;
-(void)didUpdateCaptions:(id)arg0 ;
-(void)enableCaptions:(BOOL)arg0 ;
-(void)registerCaptionsEventDelegate:(id)arg0 ;
-(void)registerStreamToken:(NSInteger)arg0 withFormat:(struct AudioStreamBasicDescription *)arg1 ;
-(void)setCaptionsLocale:(id)arg0 ;
-(void)setOneToOneModeEnabled:(BOOL)arg0 ;


@end


#endif