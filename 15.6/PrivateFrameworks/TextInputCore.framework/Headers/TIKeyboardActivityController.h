// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDACTIVITYCONTROLLER_H
#define TIKEYBOARDACTIVITYCONTROLLER_H

@class NSString, NSTimer, NSHashTable;
@protocol TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "TIKeyboardApplicationStateMonitor.h"

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses>

 {
    BOOL _hadRecentActivity;
    BOOL _hasBackgroundActivity;
    NSUInteger _activityState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSInteger _inactiveMemoryPressureCount;
}


@property (readonly, nonatomic) NSUInteger activityState;
@property (retain, nonatomic) TIKeyboardApplicationStateMonitor *appMonitor; // ivar: _appMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *inactivityTimer; // ivar: _inactivityTimer
@property (nonatomic) BOOL isDirty; // ivar: _isDirty
@property (retain, nonatomic) NSObject<OS_os_transaction> *isDirtyTransaction; // ivar: _isDirtyTransaction
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(CGFloat)defaultKeyboardIdleTimeoutInterval;
+(CGFloat)keyboardIdleTimeoutInterval;
+(id)sharedController;
+(id)singletonInstance;
+(void)setKeyboardIdleTimeoutInterval:(CGFloat)arg0 ;
+(void)setSharedController:(id)arg0 ;
-(BOOL)atexitHandler;
-(BOOL)canGoEarlyClean;
-(BOOL)shouldBecomeClean;
-(BOOL)shouldBecomeDirty;
-(NSUInteger)getExcessMemoryInBytes;
-(id)createMemoryPressureSource;
-(id)init;
-(void)addActivityObserver:(id)arg0 ;
-(void)backgroundActivityAssertionsDidChange;
-(void)dealloc;
-(void)handleMemoryStatusPressure:(NSUInteger)arg0 ;
-(void)inactivityTimerFired:(id)arg0 ;
-(void)keyboardAssertionsDidChange;
-(void)notifyMemoryPressureLevel:(NSUInteger)arg0 excessMemoryInBytes:(NSUInteger)arg1 ;
-(void)notifyTransitionWithContext:(id)arg0 ;
-(void)releaseInputManagers;
-(void)removeActivityObserver:(id)arg0 ;
-(void)setKeyboardCleanIfNecessary;
-(void)setKeyboardDirtyIfNecessaryWithReason:(id)arg0 ;
-(void)touchInactivityTimer;
-(void)updateActivityState;


@end


#endif