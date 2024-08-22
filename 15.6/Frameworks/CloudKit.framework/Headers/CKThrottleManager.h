// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTHROTTLEMANAGER_H
#define CKTHROTTLEMANAGER_H

@class NSArray;
@protocol CKThrottleObserver;

#import <Foundation/Foundation.h>


@interface CKThrottleManager : NSObject {
    NSArray *_throttleList;
    id<CKThrottleObserver> *_observer;
    _opaque_pthread_mutex_t _throttleLock;
}




+(id)sharedManager;
-(BOOL)addThrottle:(id)arg0 ;
-(id)CKStatusReportArray;
-(id)_init;
-(id)allThrottles;
-(id)enforcedThrottleForCriteria:(id)arg0 willSendRequest:(BOOL)arg1 outThrottleError:(*id)arg2 ;
-(void)noteDataChangeForThrottle:(id)arg0 ;
-(void)resetThrottles;
-(void)setThrottleObserver:(id)arg0 ;
-(void)throttleWillBeRemoved:(id)arg0 ;


@end


#endif