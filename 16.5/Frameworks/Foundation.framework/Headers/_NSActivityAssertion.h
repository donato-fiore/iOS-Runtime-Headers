// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSACTIVITYASSERTION_H
#define _NSACTIVITYASSERTION_H

@protocol OS_os_transaction, OS_voucher, NSObject;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSActivityAssertion : NSObject {
    NSUInteger _options;
    NSString *_reason;
    NSObject<OS_os_transaction> *_transaction;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    uint8_t _signpostID;
    id<NSObject> *_xpcBoost;
    id *_processAssertion;
    id *_expirationHandler;
    os_unfair_lock_s _lock;
    uint8_t _ended;
    unsigned char _adoptPreviousVoucher;
}




+(id)_expirationHandlerExecutionQueue;
+(id)_expiringActivities;
+(id)_expiringAssertionManagementQueue;
+(id)_expiringTaskExecutionQueue;
+(void)_dumpExpiringActivitives;
+(void)_expireAllActivies;
+(void)_performActivityWithOptions:(NSUInteger)arg0 reason:(id)arg1 usingBlock:(id)arg2 ;
+(void)_performExpiringActivityWithReason:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)_isEnded;
-(id)_initWithActivityOptions:(NSUInteger)arg0 reason:(id)arg1 expirationHandler:(id)arg2 ;
-(id)debugDescription;
-(void)_endFromDealloc:(BOOL)arg0 ;
-(void)_fireExpirationHandler;
-(void)_reactivate;
-(void)dealloc;


@end


#endif