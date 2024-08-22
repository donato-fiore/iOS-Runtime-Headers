// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUAUTOUPDATEPASSCODEPOLICY_H
#define SUAUTOUPDATEPASSCODEPOLICY_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUAutoUpdatePasscodePolicy : NSObject {
    NSHashTable *_queue_observers;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    int _stateChangedNotifyToken;
    NSUInteger _queue_currentPolicyType;
}


@property (readonly, nonatomic) NSUInteger currentPolicyType;


+(id)sharedInstance;
-(BOOL)_isValidPasscodePolicyType:(NSUInteger)arg0 ;
-(id)_init;
-(id)description;
-(id)init;
-(id)stringForCurrentPolicy;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif