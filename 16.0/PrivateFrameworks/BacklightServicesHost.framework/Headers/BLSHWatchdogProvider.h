// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHWATCHDOGPROVIDER_H
#define BLSHWATCHDOGPROVIDER_H


#import <Foundation/Foundation.h>


@interface BLSHWatchdogProvider : NSObject

@property (getter=isWatchdogEnabled) BOOL watchdogEnabled; // ivar: _watchdogEnabled


+(BOOL)checkForWatchdogDidFire:(BOOL)arg0 ;
+(void)fileRadarForWatchdog:(id)arg0 buildVersion:(id)arg1 debugLogsEnabled:(BOOL)arg2 ;
+(void)markWatchdogDidFire;
+(void)resetWatchdogDidFire;
+(void)showWatchdogDidFireAlert:(id)arg0 buildVersion:(id)arg1 debugLogsEnabled:(BOOL)arg2 ;
-(id)init;
-(id)scheduleWatchdogWithDelegate:(id)arg0 explanation:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)clearWatchdogWithExplanation:(id)arg0 timeout:(CGFloat)arg1 elapsedTime:(CGFloat)arg2 ;
-(void)didDetectSignificantUserInteraction;
-(void)fireWatchdogWithTimer:(id)arg0 delegate:(id)arg1 timeout:(CGFloat)arg2 elapsedTime:(CGFloat)arg3 ;
-(void)registerHandlersForService:(id)arg0 ;


@end


#endif