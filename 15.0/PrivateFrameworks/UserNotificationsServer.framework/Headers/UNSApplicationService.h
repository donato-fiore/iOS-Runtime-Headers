// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSAPPLICATIONSERVICE_H
#define UNSAPPLICATIONSERVICE_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSApplicationLauncher.h"
#import "UNSNotificationCategoryRepository.h"
#import "UNSLocalizationService.h"

@interface UNSApplicationService : NSObject {
    NSMutableSet *_foregroundBundleIdentifiers;
    UNSApplicationLauncher *_applicationLauncher;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSLocalizationService *_localizationService;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)isApplicationForeground:(id)arg0 ;
-(id)initWithApplicationLauncher:(id)arg0 categoryRepository:(id)arg1 localizationService:(id)arg2 ;
-(void)_queue_didChangeApplicationState:(unsigned int)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_willPresentNotification:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)didChangeApplicationState:(unsigned int)arg0 forBundleIdentifier:(id)arg1 ;
-(void)willPresentNotification:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif