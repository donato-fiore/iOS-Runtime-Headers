// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENGINERENDERFLIPBOOKSESSION_H
#define BLSHENGINERENDERFLIPBOOKSESSION_H

@class NSMutableSet, NSMutableArray, NSString, NSArray;
@protocol BSInvalidatable, BLSHFlipbook, BSTimerScheduleQuerying><BSCancellable><BSInvalidatable, BLSHEngineRenderFlipbookSessionDelegate, BLSHOSInterfaceProviding;

#import <Foundation/Foundation.h>

#import "BLSHPresentationDateSpecifier.h"
#import "BLSHBacklightEnvironmentPresentation.h"

@interface BLSHEngineRenderFlipbookSession : NSObject <BSInvalidatable>

 {
    id<BLSHFlipbook> *_flipbook;
    os_unfair_lock_s _lock;
    BLSHPresentationDateSpecifier *_lock_preparingSpecifier;
    NSMutableSet *_lock_pendingEnvironments;
    NSMutableArray *_lock_renderedFrames;
    id<BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> *_lock_timeoutTimer;
    id<BLSHEngineRenderFlipbookSessionDelegate> *_lock_delegate;
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    NSUInteger _stateHandler;
    CGFloat _sessionStartTime;
    CGFloat _lock_layoutStartTime;
    CGFloat _lock_accumulatedLayoutDuration;
    CGFloat _lock_accumulatedRenderDuration;
    int _lock_retryRenderCount;
    BOOL _lock_didFailToRender;
    BOOL _lock_timedOut;
    BOOL _lock_invalidated;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger memoryUsage;
@property (readonly, nonatomic) BLSHBacklightEnvironmentPresentation *presentation; // ivar: _presentation
@property (readonly, nonatomic) NSArray *renderedFrames;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 flipbook:(id)arg1 presentation:(id)arg2 osInterfaceProvider:(id)arg3 ;
-(id)telemetryDataWithEndTime:(CGFloat)arg0 reasonEnded:(id)arg1 preventedSleepDuration:(CGFloat)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)prepareAndRenderFrameSpecifier:(id)arg0 ;


@end


#endif