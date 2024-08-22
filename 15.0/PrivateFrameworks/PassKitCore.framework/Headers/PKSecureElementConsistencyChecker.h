// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSECUREELEMENTCONSISTENCYCHECKER_H
#define PKSECUREELEMENTCONSISTENCYCHECKER_H

@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"

@interface PKSecureElementConsistencyChecker : NSObject {
    NSObject<OS_dispatch_queue> *_processingQueue;
    id<PKCloudStoreCoordinatorDelegate> *_cloudStoreCoordinatorDelegate;
}


@property (nonatomic) NSObject<PKSecureElementConsistencyCheckerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PKPaymentWebService *paymentWebService; // ivar: _paymentWebService


+(BOOL)isCheckingConsistencyForSecureElementID:(id)arg0 ;
-(BOOL)_downloadPasses;
-(id)initWithPaymentWebService:(id)arg0 delegate:(id)arg1 ;
-(id)initWithPaymentWebService:(id)arg0 delegate:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 ;
-(void)_rescheduleCheckInTimeInterval:(CGFloat)arg0 backoffLevel:(NSInteger)arg1 ;
-(void)_rescheduleWithBackoff;
-(void)_syncWithTSMCompletion:(id)arg0 ;
-(void)queue_startWithCompletion:(id)arg0 ;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif