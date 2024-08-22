// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECAPTURESTREAMSETTINGS_H
#define BWSTILLIMAGECAPTURESTREAMSETTINGS_H

@class NSArray, NSDictionary, NSMutableArray, NSString;
@protocol NSSecureCoding, BWAdaptiveBracketingParameters;

#import <Foundation/Foundation.h>

#import "BWBracketSettings.h"

@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding>

 {
    int _referenceFrameIndex;
    NSArray *_timeMachineBracketedCaptureParams;
    NSDictionary *_preBracketFrameCaptureParams;
    NSArray *_unifiedBracketedCaptureParams;
    NSArray *_captureFrameInfos;
    BOOL _lensStabilizationEnabledForClientBracket;
    os_unfair_lock_s _adaptiveBracketingLock;
    id<BWAdaptiveBracketingParameters> *_adaptiveBracketingParameters;
    NSMutableArray *_adaptivePreBracketFrameCaptureParams;
    NSMutableArray *_adaptiveUnifiedBracketedCaptureParams;
    NSMutableArray *_adaptiveCaptureFrameInfos;
    BOOL _reachedEndOfAdaptiveBracketing;
    ? _adaptiveBracketingLastFramePTS;
}


@property (readonly, nonatomic) BWBracketSettings *bracketSettings; // ivar: _bracketSettings
@property (readonly, nonatomic) NSUInteger captureFlags; // ivar: _captureFlags
@property (readonly, nonatomic) int captureType; // ivar: _captureType
@property (readonly, nonatomic) int expectedFrameCaptureCount;
@property (readonly, nonatomic) ? expectedFrameCaptureCounts;
@property (readonly, nonatomic) int expectedFrameCount;
@property (readonly, nonatomic) int expectedTimeMachineFrameCaptureCount;
@property (readonly, nonatomic) int expectedUltraHighResFrameCaptureCount;
@property (readonly, nonatomic) BOOL hasValidFrames;
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (nonatomic) ? preferredTimeMachinePTS; // ivar: _preferredTimeMachinePTS
@property (retain, nonatomic) NSString *sensorIDString; // ivar: _sensorIDString
@property (readonly, nonatomic) int timeMachineFrameCount; // ivar: _timeMachineFrameCount
@property (readonly, nonatomic) NSArray *validBracketedCaptureSequenceNumbers; // ivar: _validBracketedCaptureSequenceNumbers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFrameCapturedForProcessing:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)isUnifiedBracketingErrorRecoveryFrame:(struct opaqueCMSampleBuffer *)arg0 isReferenceFrame:(BOOL)arg1 ;
-(BOOL)lensStabilizationEnabledForClientBracket;
-(BOOL)reachedEndOfAdaptiveBracketing;
-(BOOL)sensorRawCapturedForFinalImageProcessing;
-(NSUInteger)hash;
-(id)adaptiveBracketingParameters;
-(id)adaptivePreBracketFrameCaptureParams;
-(id)adaptiveUnifiedBracketedCaptureParams;
-(id)captureFrameInfoForFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)captureFrameInfos;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPortType:(id)arg0 captureType:(int)arg1 captureFlags:(NSUInteger)arg2 adaptiveBracketingParameters:(id)arg3 ;
-(id)initWithPortType:(id)arg0 captureType:(int)arg1 captureFlags:(NSUInteger)arg2 referenceFrameIndex:(int)arg3 timeMachineBracketedCaptureParams:(id)arg4 preBracketFrameCaptureParams:(id)arg5 unifiedBracketedCaptureParams:(id)arg6 frameInfos:(id)arg7 ;
-(id)initWithPortType:(id)arg0 captureType:(int)arg1 captureFlags:(NSUInteger)arg2 timeMachineFrameCount:(int)arg3 bracketSettings:(id)arg4 validBracketedCaptureSequenceNumbers:(id)arg5 ;
-(id)preBracketFrameCaptureParams;
-(id)timeMachineBracketedCaptureParams;
-(id)unifiedBracketedCaptureParams;
-(int)adaptiveBracketingGroupCaptureCount;
-(int)currentExpectedAdaptiveBracketedFrameCaptureCount;
-(int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)arg0 ;
-(int)expectedEVZeroFrameCount;
-(int)expectedLongFrameCount;
-(int)expectedReferenceFrameCandidateCount;
-(int)referenceFrameIndex;
-(int)timeMachineReferenceFrameIndex;
-(struct ? )adaptiveBracketingLastFramePTS;
-(void)addAdaptiveUnifiedBracketedCaptureParams:(id)arg0 preBracketFrameCaptureParams:(id)arg1 bracketedCaptureFrameInfos:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAdaptiveBracketingLastFramePTS:(struct ? )arg0 ;
-(void)setLensStabilizationEnabledForClientBracket:(BOOL)arg0 ;
-(void)setReachedEndOfAdaptiveBracketing:(BOOL)arg0 ;


@end


#endif