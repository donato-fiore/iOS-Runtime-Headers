// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CODISCOVERYMANAGER_H
#define CODISCOVERYMANAGER_H

@class NSDictionary;
@protocol CODiscoveryManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CODiscoveryManager : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, weak, nonatomic) NSObject<CODiscoveryManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat discoveryDelay; // ivar: _discoveryDelay
@property (retain, nonatomic) NSDictionary *envelopes; // ivar: _envelopes
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (nonatomic, getter=isTimerEnabled) BOOL timerEnabled; // ivar: _timerEnabled


+(id)managerWithDiscoveryDelay:(CGFloat)arg0 delegate:(id)arg1 ;
-(BOOL)addDiscoveryRecord:(id)arg0 ;
-(id)_initWithDiscoveryDelay:(CGFloat)arg0 delegate:(id)arg1 ;
-(id)_triggerDiscovery_unsafe;
-(void)_configureTimer;
-(void)_disableTimer_unsafe;
-(void)_enableTimer_unsafe;
-(void)_invokeDelegate:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)clearRecords;
-(void)dealloc;


@end


#endif