// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKASSERTIONSPREVENTINGRESTARTMONITOR_H
#define _DKASSERTIONSPREVENTINGRESTARTMONITOR_H

@class DKMonitor;



@interface _DKAssertionsPreventingRestartMonitor : DKMonitor

@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus; // ivar: _lastPreventingRestartAssertionsStatus
@property (nonatomic) int preventIdleSleepAssertionsToken; // ivar: _preventIdleSleepAssertionsToken
@property (nonatomic) int restartPreventerAssertionsToken; // ivar: _restartPreventerAssertionsToken
@property (nonatomic) int systemAssertionsToken; // ivar: _systemAssertionsToken
@property (nonatomic) int userspaceAssertionsToken; // ivar: _userspaceAssertionsToken


+(id)entitlements;
+(id)eventStream;
-(BOOL)areAssertionsPreventingRestart;
-(id)loadState;
-(void)deactivate;
-(void)dealloc;
-(void)saveState;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif