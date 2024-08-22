// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDSACCOUNTEXISTENCENOTIFIER_H
#define HDHEALTHRECORDSACCOUNTEXISTENCENOTIFIER_H

@class HKObserverSet<HDHealthRecordsAccountExistenceObserver>, NSString;
@protocol HDProfileReadyObserver, HDHealthRecordsAccountEventObserver, HDHealthRecordsProfileExtension;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDHealthRecordsAccountExistenceNotifier : NSObject <HDProfileReadyObserver, HDHealthRecordsAccountEventObserver>

 {
    id<HDHealthRecordsProfileExtension> *_healthRecordsProfileExtension;
    HKObserverSet<HDHealthRecordsAccountExistenceObserver> *_observers;
    os_unfair_lock_s _lock;
    NSInteger _state;
    NSInteger _testOverrideState;
    BOOL _isProfileReady;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ontologyEnablingHealthRecordsAccountExists;
@property (readonly, nonatomic) NSInteger ontologyEnablingHealthRecordsAccountState;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_profileReadyCompleteHandler; // ivar: _unitTesting_profileReadyCompleteHandler


-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)addAccountExistenceObserver:(id)arg0 ;
-(void)addAccountExistenceObserver:(id)arg0 queue:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)profileExtension:(id)arg0 accountEventOccurred:(NSUInteger)arg1 ;
-(void)removeAccountExistenceObserver:(id)arg0 ;


@end


#endif