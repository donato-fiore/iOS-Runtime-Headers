// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDSYSTEMAVAILABILITYMONITOR_H
#define CKDSYSTEMAVAILABILITYMONITOR_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface CKDSystemAvailabilityMonitor : NSObject

@property NSUInteger availabilityState; // ivar: _availabilityState
@property NSUInteger simulatedavailabilityState; // ivar: _simulatedavailabilityState
@property (retain, nonatomic) NSMutableSet *watcherWrappers; // ivar: _watcherWrappers


+(id)sharedMonitor;
+(void)initialize;
-(BOOL)registerWatcher:(id)arg0 ;
-(NSUInteger)currentAvailabilityState;
-(id)_init;
-(void)_clearVanishedWatchers;
-(void)_logAvailabilityDescription;
-(void)_systemMayNowBeReady;
-(void)assertAvailability:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)removeNotifications;
-(void)resetToUnavailableForUnitTests;
-(void)simulateBuddyCompletedForUnitTests;
-(void)simulateFirstUnlockForUnitTests;


@end


#endif