// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASLOCKSTATEMONITOR_H
#define SASLOCKSTATEMONITOR_H

@class NSNumber;
@protocol SASLockStateMonitorDelegate;

#import <Foundation/Foundation.h>


@interface SASLockStateMonitor : NSObject

@property (retain, nonatomic) NSNumber *assistantIsEnabled; // ivar: _assistantIsEnabled
@property (weak, nonatomic) NSObject<SASLockStateMonitorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger lockState; // ivar: _lockState
@property (nonatomic) BOOL unlockedByTouchID; // ivar: _unlockedByTouchID


-(BOOL)hasUnlockedSinceBoot;
-(BOOL)isBlocked;
-(BOOL)isScreenOn;
-(NSUInteger)_currentLockState;
-(id)init;
-(void)_lockStateDidChange:(id)arg0 ;
-(void)_updateLockState;
-(void)dealloc;


@end


#endif