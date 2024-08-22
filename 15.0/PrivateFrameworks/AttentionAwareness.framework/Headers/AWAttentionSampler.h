// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWATTENTIONSAMPLER_H
#define AWATTENTIONSAMPLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AWSampleLogger.h"

@interface AWAttentionSampler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _nextDeadline;
}


@property (nonatomic) int currentState; // ivar: _currentState
@property (nonatomic) BOOL lastFaceMetadataValid; // ivar: _lastFaceMetadataValid
@property (nonatomic) NSUInteger lastOrientation; // ivar: _lastOrientation
@property (nonatomic) CGFloat lastPitch; // ivar: _lastPitch
@property (nonatomic) NSUInteger lastPollTimeoutTime; // ivar: _lastPollTimeoutTime
@property (nonatomic) NSUInteger lastPositiveDetectTime; // ivar: _lastPositiveDetectTime
@property (nonatomic) CGFloat lastRoll; // ivar: _lastRoll
@property (nonatomic) NSUInteger lastTriggerTime; // ivar: _lastTriggerTime
@property (nonatomic) CGFloat lastYaw; // ivar: _lastYaw
@property (retain, nonatomic) AWSampleLogger *sampleLogger; // ivar: _sampleLogger
@property (nonatomic) NSUInteger samplingSuppressedMask; // ivar: _samplingSuppressedMask
@property (copy) id *stateChangedCallback; // ivar: _stateChangedCallback
@property (readonly, nonatomic) BOOL unitTestSampling; // ivar: _unitTestSampling


-(NSUInteger)minimumAttentionSamplerErrorRetryTime;
-(NSUInteger)nextSampleTimeForSamplingInterval:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMask:(NSUInteger)arg0 ;
-(void)finishDeadlineComputation;
-(void)setSmartCoverClosed:(BOOL)arg0 ;
-(void)setUnitTestMode;
-(void)shouldSample:(BOOL)arg0 withDeadline:(NSUInteger)arg1 ;
-(void)startDeadlineComputation;
-(void)updateSamplingDeadline:(NSUInteger)arg0 forClient:(id)arg1 ;


@end


#endif