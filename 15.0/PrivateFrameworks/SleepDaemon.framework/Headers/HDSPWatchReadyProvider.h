// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWATCHREADYPROVIDER_H
#define HDSPWATCHREADYPROVIDER_H

@class NSString;
@protocol HDSPSpringboardObserver, HDSPSystemReadyProvider, HDSPEnvironmentAware, HDSPSystemReadyDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSpringboardMonitor.h"

@interface HDSPWatchReadyProvider : NSObject <HDSPSpringboardObserver, HDSPSystemReadyProvider, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSystemReadyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) BOOL observingRestore; // ivar: _observingRestore
@property (readonly, nonatomic) HDSPSpringboardMonitor *springboardMonitor; // ivar: _springboardMonitor
@property (readonly) Class superclass;


-(BOOL)_isInRootRobot;
-(BOOL)_waitForInitialSync;
-(BOOL)isInRootRobotOrDemoMode;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_finishWaitingForInitialSync;
-(void)_withLock:(id)arg0 ;
-(void)restoreDidFinish;
-(void)springboardDidStart;


@end


#endif