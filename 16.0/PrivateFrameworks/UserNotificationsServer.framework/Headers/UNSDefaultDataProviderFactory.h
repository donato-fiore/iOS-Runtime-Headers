// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSDEFAULTDATAPROVIDERFACTORY_H
#define UNSDEFAULTDATAPROVIDERFACTORY_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray, BBDataProviderConnection, BBObserver, NSString;
@protocol BBObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSApplicationLauncher.h"
#import "UNSDaemonLauncher.h"
#import "UNSLocalizationService.h"
#import "UNSNotificationCategoryRepository.h"
#import "UNSNotificationRepository.h"
#import "UNSNotificationTopicRepository.h"
#import "UNSAttachmentsService.h"
#import "UNSSettingsGateway.h"

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate>

 {
    NSMutableDictionary *_bundleIdentifierToDataProvider;
    NSMutableSet *_authorizedBundleIdentifiers;
    NSMutableSet *_supportedBundleIdentifiers;
    NSMutableArray *_observers;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSLocalizationService *_localizationService;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    BBDataProviderConnection *_dataProviderConnection;
    BBObserver *_settingsObserver;
    UNSSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_queue_effectiveSectionInfoForBundleIdentifier:(id)arg0 ;
-(id)_queue_notificationSettingsForBundleIdentifier:(id)arg0 ;
-(id)_queue_notificationSettingsForTopicsWithBundleIdentifier:(id)arg0 ;
-(id)_queue_sectionInfoForBundleIdentifier:(id)arg0 ;
-(id)initWithApplicationLauncher:(id)arg0 daemonLauncher:(id)arg1 categoryRepository:(id)arg2 notificationRepository:(id)arg3 attachmentsService:(id)arg4 topicRepository:(id)arg5 localizationService:(id)arg6 settingsGateway:(id)arg7 ;
-(id)notificationSettingsForBundleIdentifier:(id)arg0 ;
-(id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg0 ;
-(void)_queue_addObserver:(id)arg0 ;
-(void)_queue_createDataProviderWithNotificationSourceDescription:(id)arg0 withCompletion:(id)arg1 ;
-(void)_queue_createNewDefaultDataProviders:(id)arg0 ;
-(void)_queue_notificationSourceDidInstall:(id)arg0 ;
-(void)_queue_notificationSourceDidUninstall:(id)arg0 ;
-(void)_queue_notificationSourcesDidInstall:(id)arg0 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_queue_removeDataProviderWithBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg0 ;
-(void)_queue_sectionInfoDidChange:(id)arg0 ;
-(void)_queue_setCriticalAlertAuthorization:(BOOL)arg0 forNotificationSourceDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)_queue_setSectionInfo:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_updateSettingsWithAuthorizationStatus:(NSInteger)arg0 options:(NSUInteger)arg1 scheduledDeliveryEnabled:(BOOL)arg2 expirationDate:(id)arg3 lastUserGrantDate:(id)arg4 forNotificationSourceDescription:(id)arg5 completionHandler:(id)arg6 ;
-(void)_queue_updateSettingsWithAuthorizationStatus:(NSInteger)arg0 options:(NSUInteger)arg1 scheduledDeliveryEnabled:(BOOL)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(id)arg4 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)notificationSourcesDidInstall:(id)arg0 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)observer:(id)arg0 removeSection:(id)arg1 ;
-(void)observer:(id)arg0 updateSectionInfo:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestAuthorizationStatus:(NSInteger)arg0 withOptions:(NSUInteger)arg1 scheduledDeliveryEnabled:(BOOL)arg2 expirationDate:(id)arg3 lastUserGrantDate:(id)arg4 forNotificationSourceDescription:(id)arg5 completionHandler:(id)arg6 ;
-(void)requestAuthorizationStatus:(NSInteger)arg0 withOptions:(NSUInteger)arg1 scheduledDeliveryEnabled:(BOOL)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(id)arg4 ;
-(void)requestRemoveAuthorizationforNotificationSourceDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)setCriticalAlertAuthorization:(BOOL)arg0 forNotificationSourceDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateAuthorizationWithOptions:(NSUInteger)arg0 scheduledDeliveryEnabled:(BOOL)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif