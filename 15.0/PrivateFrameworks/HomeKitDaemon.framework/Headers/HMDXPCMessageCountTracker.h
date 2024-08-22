// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCMESSAGECOUNTTRACKER_H
#define HMDXPCMESSAGECOUNTTRACKER_H

@class HMFUnfairLock, NSMutableDictionary, NSString, NSDate;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDXPCMessageCountTracker : NSObject <HMFLogging>

 {
    HMFUnfairLock *_lock;
    NSMutableDictionary *_acceptedRequests;
    NSMutableDictionary *_erroredRequests;
    NSMutableDictionary *_sentNotifications;
    NSMutableDictionary *_filteredNotifications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastResetDate; // ivar: _lastResetDate
@property (readonly) Class superclass;


+(id)logCategory;
+(id)xpcCounterTracker;
-(id)__init;
-(id)_countersOfType:(NSInteger)arg0 ;
-(id)countersOfType:(NSInteger)arg0 ;
-(id)dumpState;
-(id)init;
-(id)sampleCountersAndReset:(BOOL)arg0 ;
-(void)_incrementCounterOfType:(NSInteger)arg0 identifier:(id)arg1 ;
-(void)_resetCounters;
-(void)incrementCounterOfType:(NSInteger)arg0 identifier:(id)arg1 ;
-(void)submitCounters;


@end


#endif