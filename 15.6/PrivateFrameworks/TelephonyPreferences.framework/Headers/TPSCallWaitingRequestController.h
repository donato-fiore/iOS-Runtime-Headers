// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCALLWAITINGREQUESTCONTROLLER_H
#define TPSCALLWAITINGREQUESTCONTROLLER_H

@class NSString;
@protocol CoreTelephonyClientSuppServicesDelegate;


#import "TPSRequestController.h"

@interface TPSCallWaitingRequestController : TPSRequestController <CoreTelephonyClientSuppServicesDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)executeFetchForRequest:(id)arg0 ;
-(void)executeRequest:(id)arg0 ;
-(void)executeSetForRequest:(id)arg0 ;
-(void)respondWithSubscriptionContext:(id)arg0 enabled:(BOOL)arg1 error:(id)arg2 ;
-(void)suppServicesEvent:(id)arg0 event:(int)arg1 settingsType:(int)arg2 data:(id)arg3 ;


@end


#endif