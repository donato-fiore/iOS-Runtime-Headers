// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSSSUBSCRIPTIONMANAGER_H
#define PSSSSUBSCRIPTIONMANAGER_H

@class VSSubscriptionRegistrationCenter;

#import <Foundation/Foundation.h>


@interface PSSSSubscriptionManager : NSObject

@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter; // ivar: _registrationCenter


-(id)init;
-(void)registerSubscriptionWithInfo:(id)arg0 expirationDate:(id)arg1 ;
-(void)unregisterAllSubscriptions;
-(void)unregisterSubscriptionWithInfo:(id)arg0 ;


@end


#endif