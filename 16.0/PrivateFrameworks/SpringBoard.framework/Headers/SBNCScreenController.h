// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNCSCREENCONTROLLER_H
#define SBNCSCREENCONTROLLER_H

@class NSString, CMPocketStateManager;
@protocol CMPocketStateDelegate, SBIdleTimerResetSource;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBLockScreenManager.h"
#import "SBLockStateAggregator.h"

@interface SBNCScreenController : NSObject <CMPocketStateDelegate, SBIdleTimerResetSource>



@property (retain, nonatomic) SBBacklightController *backlightController; // ivar: _backlightController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // ivar: _lockStateAggregator
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager; // ivar: _pocketStateManager
@property (nonatomic) unsigned int powerAssertionID; // ivar: _powerAssertionID
@property (copy, nonatomic) NSString *powerAssertionName; // ivar: _powerAssertionName
@property (readonly) Class superclass;
@property (nonatomic) BOOL turnOnScreenForOutOfPocketEvent; // ivar: _turnOnScreenForOutOfPocketEvent


-(BOOL)_isDeviceUILocked;
-(BOOL)canTurnOnScreenForNotificationRequest:(id)arg0 ;
-(id)init;
-(id)initWithBackLightController:(id)arg0 lockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 ;
-(void)_cancelTurnOnScreenForOutOfPocketEvents;
-(void)_createOrResetPowerAssertionWithTimeout:(CGFloat)arg0 ;
-(void)_releasePowerAssertion;
-(void)_turnOnScreen;
-(void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(CGFloat)arg0 ;
-(void)_turnOnScreenForPocketMode;
-(void)pocketStateManager:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)resetAutomaticLockStateForNotificationRequest:(id)arg0 ;
-(void)turnOnScreenForNotificationRequest:(id)arg0 ;
-(void)turnOnScreenIfPossibleForNotificationRequest:(id)arg0 ;


@end


#endif