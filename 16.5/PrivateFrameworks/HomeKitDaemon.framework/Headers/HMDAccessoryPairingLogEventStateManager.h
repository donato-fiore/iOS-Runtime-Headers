// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYPAIRINGLOGEVENTSTATEMANAGER_H
#define HMDACCESSORYPAIRINGLOGEVENTSTATEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMDAccessoryPairingLogEventStateManager : NSObject {
    os_unfair_lock_s _accessoryPairingRetryMapLock;
    os_unfair_lock_s _accessoryPairingProgressStateTrackerLock;
}


@property (readonly, nonatomic) NSMutableDictionary *pairingProgressStateTracker; // ivar: _pairingProgressStateTracker
@property (readonly, nonatomic) NSMutableDictionary *retryCountMap; // ivar: _retryCountMap


+(id)sharedInstance;
-(CGFloat)getTimeDurationForLongestProgressStateForAccessory:(id)arg0 ;
-(CGFloat)getTimeDurationForProgressStateForIdentifier:(id)arg0 state:(id)arg1 ;
-(NSUInteger)retryCountForIdentifier:(id)arg0 ;
-(id)getLastProgressStateForAccessory:(id)arg0 ;
-(id)getLongestProgressStateForAccessory:(id)arg0 ;
-(id)init;
-(void)_handlePairingStateProgressNotification:(id)arg0 ;
-(void)clearPairingProgressStateTrackerForIdentifier:(id)arg0 ;
-(void)clearRetryCountMap;
-(void)incrementRetryCount:(id)arg0 ;
-(void)startProgressStateTrackerWithDate:(id)arg0 identifier:(id)arg1 ;
-(void)updateLastPairingProgressStateEventForIdentifier:(id)arg0 withDate:(id)arg1 ;
-(void)updatePairingProgressState:(id)arg0 ;


@end


#endif