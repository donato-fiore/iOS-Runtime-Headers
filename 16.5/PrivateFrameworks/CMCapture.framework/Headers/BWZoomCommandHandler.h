// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWZOOMCOMMANDHANDLER_H
#define BWZOOMCOMMANDHANDLER_H

@class NSArray;
@protocol BWZoomCompletionDelegate;

#import <Foundation/Foundation.h>

#import "BWZoomDelayBuffer.h"

@interface BWZoomCommandHandler : NSObject {
    os_unfair_lock_s _zoomLock;
    float _appliedZoomFactor;
    float _lastRequestedZoomFactor;
    BOOL _zoomFactorServiced;
    BWZoomDelayBuffer *_zoomDelayBuffer;
    BOOL _clientCanCompensateForDelay;
    ? _lastFramePTSes;
    NSInteger _timeForLastRequestedZoomFactor;
    ? _rampStartTime;
    float _rampAcceleration;
    float _rampStartFactor;
    float _rampStartVelocity;
    float _rampTargetFactor;
    float _rampTargetVelocity;
    int _rampCommandID;
    BOOL _rampActive;
    int _rampType;
    int _rampTuning;
    CGFloat _rampDuration;
    float _rampSnapFraction;
    float _rampCurrentVelocity;
    float _rampZoomFactorOfInterest;
    NSArray *_fudgedZoomRanges;
    float _maxZoomFactorToApplyFudge;
    float _minZoomFactorToApplyFudge;
    float _maxFudgedZoomFactor;
    float _minFudgedZoomFactor;
    float _springRampTension;
    float _springRampFriction;
    float _earlySwitchOverScaleFactorForZoomIn;
    float _allowableMinimumDigitalZoomFactorDuringZoomOut;
    int _springRampStartFrameDelayAt30fps;
}


@property (readonly) float allowableMinimumDigitalZoomFactorDuringZoomOut;
@property (readonly) float appliedZoomFactor;
@property (readonly) float appliedZoomFactorWithoutFudge;
@property (readonly) float earlySwitchOverScaleFactorForZoomIn;
@property (readonly) float rampTargetZoomFactor;
@property (readonly) int rampTuning;
@property (readonly) float rampZoomFactorOfInterest;
@property float requestedZoomFactor;
@property (readonly) float requestedZoomFactorWithoutFudge;
@property (nonatomic) NSObject<BWZoomCompletionDelegate> *zoomCompletionDelegate; // ivar: _zoomCompletionDelegate
@property (nonatomic) NSObject<BWZoomCompletionDelegate> *zoomCompletionDelegateForStereoAudio; // ivar: _zoomCompletionDelegateForStereoAudio


+(void)initialize;
-(BOOL)haveUpdatedZoomModelForPTS:(struct ? )arg0 ;
-(NSInteger)timeForLastRequestedZoomFactor;
-(float)applyFudgeToZoomFactor:(float)arg0 ;
-(float)predictRampZoomFactorAfterNumberOfFrames:(int)arg0 settingZoomFactorOfInterest:(float)arg1 ;
-(float)updateZoomModelAndAppliedZoomFactorForNextFrameWithPTS:(struct ? )arg0 ptsTolerance:(struct ? )arg1 delayedISPAppliedZoomFactor:(float)arg2 ;
-(float)updateZoomModelForNextFrameWithPTS:(struct ? )arg0 ;
-(id)init;
-(void)dealloc;
-(void)rampToVideoZoomFactor:(float)arg0 usingSpringWithTension:(float)arg1 friction:(float)arg2 snapFraction:(float)arg3 rampTuning:(int)arg4 earlySwitchOverScaleFactorForZoomIn:(float)arg5 allowableMinimumDigitalZoomFactorDuringZoomOut:(float)arg6 rampStartFrameDelayAt30fps:(int)arg7 commandID:(int)arg8 ;
-(void)rampToVideoZoomFactor:(float)arg0 withRampType:(int)arg1 rate:(float)arg2 duration:(CGFloat)arg3 snapToTargetZoomFactorWithinRampFraction:(float)arg4 rampTuning:(int)arg5 earlySwitchOverScaleFactorForZoomIn:(float)arg6 allowableMinimumDigitalZoomFactorDuringZoomOut:(float)arg7 commandID:(int)arg8 ;
-(void)resetZoomDelayBuffer;
-(void)resetZoomFactorOfInterest;
-(void)setFudgedZoomRanges:(id)arg0 ;
-(void)setTypicalISPZoomDelay:(unsigned int)arg0 clientCanCompensateForDelay:(BOOL)arg1 ;
-(void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg0 ;


@end


#endif