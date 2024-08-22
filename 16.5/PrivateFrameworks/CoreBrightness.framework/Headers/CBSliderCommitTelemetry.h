// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSLIDERCOMMITTELEMETRY_H
#define CBSLIDERCOMMITTELEMETRY_H

@class NSString;
@protocol CBContainerModuleProtocol, CBAODProtocol, OS_dispatch_queue, OS_os_log, OS_dispatch_source;


#import "CBModule.h"
#import "CBDisplayContaineriOS.h"

@interface CBSliderCommitTelemetry : CBModule <CBContainerModuleProtocol, CBAODProtocol>

 {
    CBDisplayContaineriOS *_displayContainer;
    TrackedState _state;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    array<CBSliderCommitInfo, 100UL> _entryBuffer;
    NSUInteger _bufferIndex;
    NSUInteger _bufferEntriesFilled;
    NSInteger _delayedAPCEDelay;
    CBAABParams _lastAABParams;
    NSObject<OS_os_log> *_bufferLogHandle;
    *__IOMobileFramebuffer _iomfb;
    NSObject<OS_dispatch_source> *_delayedAPCETimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sliderInfoToNSDictionary:(struct CBSliderCommitInfo *)arg0 ;
-(BOOL)getUserAABParams:(struct CBAABParams *)arg0 ;
-(BOOL)handleAODStateUpdate:(NSUInteger)arg0 transitionTime:(float)arg1 context:(id)arg2 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(float)getAPCE;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)initWithQueue:(id)arg0 andDisplayContainer:(id)arg1 ;
-(struct CBSliderCommitInfo *)addOrUpdateEntryWithTimestamp:(NSInteger)arg0 slider:(float)arg1 apce:(float)arg2 andTrackedState:(struct TrackedState )arg3 ;
-(struct CBSliderCommitInfo *)getLastFilledEntry;
-(struct CBSliderCommitInfo *)getNextEntryAndAdvanceBufferIndex;
-(void)cancelDelayedAPCETimer;
-(void)delayedAPCETimerHandler:(struct CBSliderCommitInfo *)arg0 ;
-(void)fillEntry:(struct CBSliderCommitInfo *)arg0 withTimestamp:(NSInteger)arg1 andAABParams:(struct CBAABParams *)arg2 ;
-(void)fillEntry:(struct CBSliderCommitInfo *)arg0 withTimestamp:(NSInteger)arg1 slider:(float)arg2 apce:(float)arg3 andTrackedState:(struct TrackedState )arg4 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)logAfterUserBrightnessCommitWithTimestamp:(NSInteger)arg0 slider:(float)arg1 apce:(float)arg2 andTrackedState:(struct TrackedState )arg3 ;
-(void)logAllFilledEntries;
-(void)reportCommit:(struct CBSliderCommitInfo *)arg0 ;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif