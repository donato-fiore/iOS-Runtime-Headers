// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFEXECUTIONENVIRONMENT_H
#define HFEXECUTIONENVIRONMENT_H

@class NSDate, NSHashTable;

#import <Foundation/Foundation.h>


@interface HFExecutionEnvironment : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) NSDate *appForegroundStartTime; // ivar: _appForegroundStartTime
@property (readonly, nonatomic) NSInteger hostProcess;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSUInteger runningState; // ivar: _runningState


+(BOOL)isCarousel;
+(BOOL)isHomeApp;
+(BOOL)isHomeControlService;
+(BOOL)isHomeNotification;
+(BOOL)isHomeRelatedProcess;
+(BOOL)isHomeUIService;
+(BOOL)isMacShortcut;
+(BOOL)isSettings;
+(BOOL)isSpringBoard;
+(BOOL)isWatchApp;
+(id)sharedInstance;
+(id)stringForHFExecutionEnvironmentRunningState:(NSUInteger)arg0 ;
-(id)init;
-(void)_recordMetricsForAppRunningState;
-(void)addObserver:(id)arg0 ;
-(void)dispatchMessageToObserversWithBlock:(id)arg0 ;
-(void)executionEnvironmentDidBecomeActive;
-(void)executionEnvironmentDidEnterBackground;
-(void)executionEnvironmentWillEnterForeground;
-(void)executionEnvironmentWillResignActive;
-(void)removeObserver:(id)arg0 ;


@end


#endif