// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMWAKEGESTUREMANAGER_H
#define CMWAKEGESTUREMANAGER_H

@class NSString;
@protocol OS_dispatch_queue, CMWakeGestureDelegate;

#import <Foundation/Foundation.h>


@interface CMWakeGestureManager : NSObject {
    NSObject<OS_dispatch_queue> *fDispatchQ;
    BOOL gestureUpdatesStarted;
    *Dispatcher fWakeDispatcher;
    *Dispatcher fPowerStateDispatcher;
    unique_ptr<CMWakeGestureVisitor, std::default_delete<CMWakeGestureVisitor>> fWakeGestureVisitor;
    NSInteger fCurrentState;
    int fMeasureLatencyState;
    CGFloat fWakePacketTimestamp;
    *IONotificationPort fIoNotifyPort;
    unsigned int fIoNotification;
    unsigned int backlightService;
    CGFloat fLastNotificationTime;
    int fLockScreenToken;
    CGFloat fLastDisplayOnTime;
    NSString *fProcessName;
    BOOL fIsRunningInPrimaryProcess;
    BOOL fEnableLatencyAlert;
    BOOL fEnableAudioAlert;
    int fLatencyAlertThreshold;
    BOOL fIsDisplayActive;
    int fSelector;
    id<CMWakeGestureDelegate> *fUpdatedDelegate;
    id<CMWakeGestureDelegate> *fDelegate;
}


@property (nonatomic) NSObject<CMWakeGestureDelegate> *delegate;


+(BOOL)hasSlowBootArgs;
+(BOOL)isWakeGestureAvailable;
+(BOOL)isWakeGestureOverrideEnabled;
+(NSInteger)toState:(unsigned char)arg0 ;
+(id)sharedManager;
+(id)stringForGestureState:(NSInteger)arg0 ;
+(id)stringForMode:(unsigned char)arg0 ;
+(id)stringForNotification:(unsigned char)arg0 ;
+(id)stringForStartPose:(unsigned char)arg0 ;
+(id)stringForViewPose:(unsigned char)arg0 ;
+(unsigned char)toRaw:(NSInteger)arg0 ;
-(BOOL)simulateGestureWithDelay:(CGFloat)arg0 Duration:(CGFloat)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)forceDetected;
-(void)invokeDelegateWithState:(NSInteger)arg0 ;
-(void)loadPreferences;
-(void)logWakeLatency;
-(void)onBacklightServiceUpdated:(unsigned int)arg0 ;
-(void)onNotificationControl:(id)arg0 ;
-(void)onPowerStateUpdated:(struct Sample *)arg0 ;
-(void)onWakeUpdated:(struct Sample *)arg0 ;
-(void)playAlert;
-(void)reenableDetectedStateRecognition;
-(void)sendWakeTriggerAnalytics:(unsigned char)arg0 withDisplay:(int)arg1 ;
-(void)setBacklightState:(NSInteger)arg0 ;
-(void)simulateGesture:(NSInteger)arg0 after:(CGFloat)arg1 ;
-(void)startWakeGestureUpdates;
-(void)stopWakeGestureUpdates;


@end


#endif