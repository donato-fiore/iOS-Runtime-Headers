// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCHAPTICPLAYER_H
#define _GCHAPTICPLAYER_H

@class NSMutableArray, NSArray, NSNumber;

#import <Foundation/Foundation.h>

#import "_GCHapticDynamicParameter.h"
#import "_GCHapticClientProxy.h"
#import "_GCHapticLogicalDevice.h"

@interface _GCHapticPlayer : NSObject {
    NSMutableArray *_scheduledCommands;
    NSMutableArray *_activeHapticEvents;
    NSMutableArray *_eventsToRemove;
    _GCHapticDynamicParameter *_intensityParameter;
    _GCHapticDynamicParameter *_sharpnessParameter;
    _GCHapticClientProxy *_client;
    BOOL _dirtyMuteState;
    BOOL _muted;
    int _muteReasons;
    BOOL _transientsEnqueuedSinceLastQuery;
    BOOL _activeEventThisSlice;
    CGFloat _initializationTime;
    CGFloat _activeLifetime;
    CGFloat _lastActiveTime;
    NSMutableArray *_intensityParamCurve;
    NSMutableArray *_sharpnessParamCurve;
}


@property (readonly, copy, nonatomic) NSArray *actuators; // ivar: _actuators
@property (nonatomic) int continuousEventsProcessed; // ivar: _continuousEventsProcessed
@property (readonly, nonatomic) float continuousIntensity; // ivar: _continuousIntensity
@property (readonly, nonatomic) float continuousSharpness; // ivar: _continuousSharpness
@property (weak, nonatomic) _GCHapticLogicalDevice *hapticLogicalDevice; // ivar: _hapticLogicalDevice
@property (readonly, copy, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (nonatomic) int parameterCurvesProcessed; // ivar: _parameterCurvesProcessed
@property (nonatomic, getter=isRetainedByClient) BOOL retainedByClient; // ivar: _retainedByClient
@property (nonatomic) int totalEventsProcessed; // ivar: _totalEventsProcessed
@property (nonatomic) CGFloat totalLifetimeInSeconds; // ivar: _totalLifetimeInSeconds
@property (nonatomic) int transientEventsProcessed; // ivar: _transientEventsProcessed


-(BOOL)hasProcessedActiveEventsAfterTime:(CGFloat)arg0 ;
-(BOOL)hasProcessedActiveEventsThisSlice;
-(BOOL)hasScheduledCommands;
-(BOOL)hasScheduledEventsByTime:(CGFloat)arg0 ;
-(BOOL)isActiveAtTime:(CGFloat)arg0 ;
-(BOOL)isMuted;
-(BOOL)isMutedForReason:(NSUInteger)arg0 ;
-(BOOL)transientsEnqueuedSinceLastQuery;
-(CGFloat)activeLifetimeInSeconds;
-(float)hapticStrength;
-(id)bundleIdentifier;
-(id)controllerProductCategory;
-(id)description;
-(id)initWithIdentifier:(NSUInteger)arg0 actuators:(id)arg1 client:(id)arg2 ;
-(void)clearParameters;
-(void)dealloc;
-(void)handleCommand:(id)arg0 ;
-(void)processSliceForLogicalDevice:(id)arg0 startTime:(CGFloat)arg1 endTime:(CGFloat)arg2 ;
-(void)scheduleCommand:(*void)arg0 ;
-(void)setMute:(BOOL)arg0 forReason:(NSUInteger)arg1 ;
-(void)teardown;


@end


#endif