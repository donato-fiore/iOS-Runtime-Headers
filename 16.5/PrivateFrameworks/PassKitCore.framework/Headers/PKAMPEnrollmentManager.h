// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAMPENROLLMENTMANAGER_H
#define PKAMPENROLLMENTMANAGER_H

@class NSMutableDictionary, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKInAppPaymentService.h"

@interface PKAMPEnrollmentManager : NSObject {
    PKInAppPaymentService *_service;
    NSMutableDictionary *_promiseMap;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
}




+(id)sharedManager;
-(BOOL)shouldOfferAMPEnrollmentForPaymentPass:(id)arg0 ;
-(id)_bag;
-(id)init;
-(id)performCanEnrollPaymentPass:(id)arg0 ;
-(id)performEnrollPaymentPass:(id)arg0 isDefault:(BOOL)arg1 ;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)canEnrollPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)enrollPaymentPass:(id)arg0 isDefault:(BOOL)arg1 completion:(id)arg2 ;
// -(void)enrollmentStatusForPaymentPass:(id)arg0 completion:(id)arg1 progress:(unk)arg2  ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif