// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCALLFORWARDINGCONTROLLER_H
#define TPSCALLFORWARDINGCONTROLLER_H

@class NSDictionary, NSString, CTCallForwardingValue, NSArray, CTXPCServiceSubscriptionContext;
@protocol TPSCarrierBundleControllerDelegate, TPSRequestControllerDelegate, TPSCallForwardingControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSCarrierBundleController.h"
#import "TPSCallForwardingRequestController.h"

@interface TPSCallForwardingController : NSObject <TPSCarrierBundleControllerDelegate, TPSRequestControllerDelegate>



@property (readonly, nonatomic) TPSCarrierBundleController *carrierBundleController; // ivar: _carrierBundleController
@property (readonly, copy, nonatomic) NSDictionary *carrierBundleLocalizedStringKeys;
@property (readonly, nonatomic, getter=isConditionalServiceAvailable) BOOL conditionalServiceAvailable;
@property (copy, nonatomic) NSString *conditionalServiceBusyPhoneNumber;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceBusyValue; // ivar: _conditionalServiceBusyValue
@property (readonly, nonatomic, getter=isConditionalServiceLoading) BOOL conditionalServiceLoading;
@property (readonly, copy, nonatomic) NSArray *conditionalServiceRequests; // ivar: _conditionalServiceRequests
@property (readonly, nonatomic) NSInteger conditionalServiceState;
@property (copy, nonatomic) NSString *conditionalServiceUnansweredPhoneNumber;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnansweredValue; // ivar: _conditionalServiceUnansweredValue
@property (copy, nonatomic) NSString *conditionalServiceUnreachablePhoneNumber;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnreachableValue; // ivar: _conditionalServiceUnreachableValue
@property (nonatomic) NSInteger currentServiceType; // ivar: _currentServiceType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSCallForwardingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, copy, nonatomic) NSString *localizedConditionalBusyTitle;
@property (readonly, copy, nonatomic) NSString *localizedConditionalUnansweredTitle;
@property (readonly, copy, nonatomic) NSString *localizedConditionalUnreachableTitle;
@property (nonatomic) NSInteger pendingServiceType; // ivar: _pendingServiceType
@property (readonly, nonatomic) TPSCallForwardingRequestController *requestController; // ivar: _requestController
@property (readonly, nonatomic) NSInteger serviceType;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly, copy, nonatomic) NSString *subscriptionISOCountryCode; // ivar: _subscriptionISOCountryCode
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUnconditionalServiceLoading) BOOL unconditionalServiceLoading;
@property (copy, nonatomic) NSString *unconditionalServicePhoneNumber;
@property (readonly, copy, nonatomic) NSArray *unconditionalServiceRequests; // ivar: _unconditionalServiceRequests
@property (readonly, nonatomic) NSInteger unconditionalServiceState;
@property (retain, nonatomic) CTCallForwardingValue *unconditionalServiceValue; // ivar: _unconditionalServiceValue
@property (nonatomic, getter=isUnloading) BOOL unloading; // ivar: _unloading


-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)localizedCarrierBundleStringForKey:(id)arg0 ;
-(void)enableConditionalServiceIfNeeded;
-(void)enableUnconditionalServiceIfNeeded;
-(void)requestController:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)sendConditionalServicesRequest;
-(void)sendEnableSetRequestForValue:(id)arg0 ;
-(void)sendServicesRequest;
-(void)sendSetAllServicesDisabledRequest;
-(void)sendSetRequestForValue:(id)arg0 ;
-(void)sendSetUnconditionalServiceDisabledRequest;
-(void)sendUnconditionalServicesRequest;
-(void)updateServiceType:(NSInteger)arg0 ;


@end


#endif