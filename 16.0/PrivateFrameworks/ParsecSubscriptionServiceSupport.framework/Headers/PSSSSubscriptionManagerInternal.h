// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSSSUBSCRIPTIONMANAGERINTERNAL_H
#define PSSSSUBSCRIPTIONMANAGERINTERNAL_H

@class VSSubscriptionRegistrationCenter;

#import <Foundation/Foundation.h>


@interface PSSSSubscriptionManagerInternal : NSObject

@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter; // ivar: _registrationCenter


-(id)init;
-(void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(id)arg0 domainIdentifiers:(id)arg1 maximumExpirationLimit:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)registerSubscriptionServiceForURL:(id)arg0 withSubscriptionInfo:(id)arg1 expirationDate:(id)arg2 ;
-(void)removeSubscriptionServiceForURL:(id)arg0 ;
-(void)removeWebSubscriptionServicesCreatedAfterDate:(id)arg0 ;


@end


#endif