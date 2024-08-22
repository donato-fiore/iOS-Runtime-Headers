// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPMUTEMONITOR_H
#define HKSPMUTEMONITOR_H


#import <Foundation/Foundation.h>

#import "HKSPObserverSet.h"

@interface HKSPMuteMonitor : NSObject {
    int _notifyToken;
    HKSPObserverSet *_observers;
    os_unfair_lock_s _lock;
    BOOL _isMuted;
}


@property (readonly, nonatomic) BOOL isMuted;


-(id)init;
-(void)_updateIsMuted;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif