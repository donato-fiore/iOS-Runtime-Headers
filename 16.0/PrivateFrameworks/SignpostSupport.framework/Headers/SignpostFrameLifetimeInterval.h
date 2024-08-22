// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTFRAMELIFETIMEINTERVAL_H
#define SIGNPOSTFRAMELIFETIMEINTERVAL_H

@class NSArray, NSSet, NSNumber, NSDictionary;
@protocol SignpostCARenderServerFrameMetadata, SignpostSupportTimeInterval;


#import "SignpostAnimationSubInterval.h"
#import "SignpostContextInfo.h"
#import "SignpostFrameLatencyInterval.h"
#import "SignpostHIDLatencyInterval.h"
#import "SignpostRenderServerRenderInterval.h"

@interface SignpostFrameLifetimeInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>



@property (readonly, nonatomic) unsigned char bufferCount; // ivar: _bufferCount
@property (retain, nonatomic) NSArray *commits; // ivar: _commits
@property (readonly, nonatomic) SignpostContextInfo *contextInfoForHIDInput; // ivar: _contextInfoForHIDInput
@property (readonly, nonatomic) NSSet *contributingPIDs;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) NSNumber *displayIDNum;
@property (readonly, nonatomic) NSUInteger displayRefreshIntervalDurationMachTime; // ivar: _displayRefreshIntervalDurationMachTime
@property (readonly, nonatomic) SignpostContextInfo *earliestTimeContextInfo; // ivar: _earliestTimeContextInfo
@property (readonly, nonatomic) SignpostFrameLatencyInterval *frameLatencyInterval; // ivar: _frameLatencyInterval
@property (readonly, nonatomic) BOOL frameLatencyIsLong;
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *frameOverrunInactiveDisplayInterval;
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *frameOverrunInterval;
@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (readonly, nonatomic) BOOL frameStallSkipRequest; // ivar: _frameStallSkipRequest
@property (readonly, nonatomic) SignpostHIDLatencyInterval *hidLatencyInterval; // ivar: _hidLatencyInterval
@property (readonly, nonatomic) BOOL hidLatencyIsLong;
@property (readonly, nonatomic) BOOL mayBeFirstFrame;
@property (readonly, nonatomic) NSUInteger missedVBLCount;
@property (readonly, nonatomic) NSDictionary *pidToContextInfoArrayDict; // ivar: _pidToContextInfoArrayDict
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *previousFrameOnScreenInterval;
@property (readonly, nonatomic) NSUInteger previousFramePresentationMCT; // ivar: _previousFramePresentationMCT
@property (readonly, nonatomic) SignpostRenderServerRenderInterval *renderInterval; // ivar: _renderInterval
@property (readonly, nonatomic) BOOL renderIntervalIsLong;
@property (readonly, nonatomic) NSArray *skippedRenders; // ivar: _skippedRenders
@property (readonly, nonatomic) unsigned int swapID; // ivar: _swapID
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *userVisibleGlitchInterval;


+(id)_frameSeedForLifetimeIntervalBegin:(id)arg0 ;
-(BOOL)_hasDisplayID;
-(BOOL)_isLongMCT:(NSUInteger)arg0 expectedFrameLatency:(unsigned char)arg1 ;
-(NSUInteger)_overrunBeginMCT;
-(id)_glitchIntervalWithRoundingUp:(BOOL)arg0 ;
-(id)initWithInterval:(id)arg0 contextArray:(id)arg1 hidLatencyInterval:(id)arg2 renderInterval:(id)arg3 frameLatencyInterval:(id)arg4 frameSeedToSkippedRenderIntervals:(id)arg5 ;
-(id)initWithInterval:(id)arg0 contextArray:(id)arg1 renderInterval:(id)arg2 frameSeedToSkippedRenderIntervals:(id)arg3 ;
-(id)pidToContextIDtoContextFrameLifetimeDict;


@end


#endif