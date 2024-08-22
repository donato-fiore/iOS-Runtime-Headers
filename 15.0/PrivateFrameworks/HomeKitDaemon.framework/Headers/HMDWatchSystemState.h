// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWATCHSYSTEMSTATE_H
#define HMDWATCHSYSTEMSTATE_H

@class HMFObject, NSHashTable;
@protocol HMFLocking;



@interface HMDWatchSystemState : HMFObject {
    id<HMFLocking> *_lock;
}


@property (nonatomic, getter=isCompanionReachable) BOOL companionReachable; // ivar: _companionReachable
@property (readonly, nonatomic) NSHashTable *watchSystemStateDelegates; // ivar: _watchSystemStateDelegates


+(id)sharedState;
-(id)init;
-(void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)arg0 forDelegate:(id)arg1 ;
-(void)registerDelegate:(id)arg0 ;


@end


#endif