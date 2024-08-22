// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSNOTIFICATIONAUTHORIZATIONSERVICE_H
#define UNSNOTIFICATIONAUTHORIZATIONSERVICE_H

@class CRCarPlayAppPolicyEvaluator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSDefaultDataProviderFactory.h"
#import "UNSNotificationSettingsService.h"
#import "UNSCriticalAlertAuthorizationAlertController.h"
#import "UNSNotificationAuthorizationAlertController.h"
#import "UNSNotificationDeliveryAuthorizationAlertController.h"
#import "UNSLocalizationService.h"

@interface UNSNotificationAuthorizationService : NSObject {
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSNotificationSettingsService *_settingsService;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    UNSNotificationDeliveryAuthorizationAlertController *_notificationDeliveryAuthorizationAlertController;
    UNSLocalizationService *_localizationService;
    NSObject<OS_dispatch_queue> *_queue;
    CRCarPlayAppPolicyEvaluator *_policyEvaluator;
}




-(BOOL)_queue_isCarPlayAvailableForApplication:(id)arg0 ;
-(id)initWithDataProviderFactory:(id)arg0 settingsService:(id)arg1 localizationService:(id)arg2 ;
-(void)_didForegroundApplicationWithBundleIdentifier:(id)arg0 ;
-(void)_queue_requestAuthorizationWithOptions:(NSUInteger)arg0 forNotificationSourceDescription:(id)arg1 withExpirationDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)_queue_requestRemoveAuthorizationForNotificationSourceDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)didChangeApplicationState:(unsigned int)arg0 forBundleIdentifier:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(NSUInteger)arg0 expirationDate:(id)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestAuthorizationWithOptions:(NSUInteger)arg0 forNotificationSourceDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestRemoveAuthorizationForNotificationSourceDescription:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif