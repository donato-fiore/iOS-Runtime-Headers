// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNPOSTINTERVALBUILDER_H
#define SIGNPOSTINTERVALBUILDER_H

@class NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SignpostCAInstrumentationProcessor.h"

@interface SignpostIntervalBuilder : NSObject

@property (nonatomic) BOOL buildAnimationCompositeIntervalTimelines; // ivar: _buildAnimationCompositeIntervalTimelines
@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor; // ivar: _caInstrumentationProcessor
@property (nonatomic) BOOL compositeIntervalIsInFlight; // ivar: _compositeIntervalIsInFlight
@property (readonly, nonatomic) BOOL hasOutstandingAnimations;
@property (retain, nonatomic) NSMapTable *outstandingAnimationState; // ivar: _outstandingAnimationState
@property (nonatomic) NSUInteger previousMCT; // ivar: _previousMCT
@property (readonly, nonatomic) NSMutableDictionary *processwideDictionary; // ivar: _processwideDictionary
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (readonly, nonatomic) NSMutableDictionary *systemwideDictionary; // ivar: _systemwideDictionary
@property (readonly, nonatomic) NSMutableDictionary *threadwideDictionary; // ivar: _threadwideDictionary
@property (nonatomic) NSUInteger totalCompositeIntervalCount; // ivar: _totalCompositeIntervalCount


+(BOOL)_filterPassesRequiredSCForFramerate:(id)arg0 ;
+(id)_framerateCalculationAllowlist;
-(BOOL)_handleCommonSpecialIntervals:(id)arg0 ;
-(BOOL)_handleMacOsSpecialIntervals:(id)arg0 ;
-(BOOL)_trackBegin:(id)arg0 ;
-(BOOL)isCompositeLoopSubsystem:(id)arg0 category:(id)arg1 ;
-(BOOL)isMetadataSubsystem:(id)arg0 category:(id)arg1 ;
-(BOOL)processBeginEvent:(id)arg0 ;
-(BOOL)signpostIsAnimationMetadata:(id)arg0 ;
-(BOOL)signpostIsCompositeLoop:(id)arg0 ;
-(BOOL)timestampIndicatesDeviceReboot:(NSUInteger)arg0 ;
-(id)_animationWithBegin:(id)arg0 endEvent:(id)arg1 ;
-(id)_matchingEventForEvent:(id)arg0 removeIfFound:(BOOL)arg1 ;
-(id)doneProcessing;
-(id)init;
-(id)matchingEventForEvent:(id)arg0 removeIfFound:(BOOL)arg1 ;
-(id)processEndEvent:(id)arg0 isAnimation:(*BOOL)arg1 ;
-(void)_cleanupStateForBeginEvent:(id)arg0 ;
-(void)_initializeMapsIfNecessary;
-(void)_processCompositeInterval:(id)arg0 ;
-(void)_startTrackingAnimationWithBeginEvent:(id)arg0 ;
-(void)dropAccumulatedState;
-(void)processEmittedEvent:(id)arg0 ;


@end


#endif