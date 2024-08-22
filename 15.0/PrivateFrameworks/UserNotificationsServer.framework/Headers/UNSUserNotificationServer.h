// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSUSERNOTIFICATIONSERVER_H
#define UNSUSERNOTIFICATIONSERVER_H

@class _UNNotificationCommunicationContextService, BKSApplicationStateMonitor, NSSet, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, UNSContentProtectionObserver, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSApplicationLauncher.h"
#import "UNSApplicationService.h"
#import "UNSAttachmentsRepository.h"
#import "UNSBundleLibrarian.h"
#import "UNSContentProtectionManager.h"
#import "UNSDefaultDataProviderFactory.h"
#import "UNSLocalizationService.h"
#import "UNSUserNotificationServerConnectionListener.h"
#import "UNSUserNotificationServerSettingsConnectionListener.h"
#import "UNSUserNotificationServerRemoteNotificationConnectionListener.h"
#import "UNSNotificationCategoryRepository.h"
#import "UNSNotificationSchedulingService.h"
#import "UNSNotificationAuthorizationService.h"
#import "UNSNotificationSettingsService.h"
#import "UNSNotificationRepository.h"
#import "UNSPendingNotificationRepository.h"
#import "UNSPushRegistrationRepository.h"
#import "UNSRemoteNotificationServer.h"
#import "UNSNotificationScheduleRepository.h"
#import "UNSNotificationTopicRepository.h"
#import "UNSAttachmentsService.h"
#import "UNSLocationMonitor.h"
#import "UNSDaemonLauncher.h"
#import "UNSSettingsGateway.h"

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSContentProtectionObserver, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver>

 {
    UNSApplicationLauncher *_applicationLauncher;
    UNSApplicationService *_applicationService;
    UNSAttachmentsRepository *_attachmentsRepository;
    UNSBundleLibrarian *_librarian;
    UNSContentProtectionManager *_contentProtectionManager;
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSLocalizationService *_localizationService;
    _UNNotificationCommunicationContextService *_communicationContextService;
    UNSUserNotificationServerConnectionListener *_userNotificationServerConnectionListener;
    UNSUserNotificationServerSettingsConnectionListener *_userNotificationServerSettingsConnectionListener;
    UNSUserNotificationServerRemoteNotificationConnectionListener *_userNotificationServerRemoteNotificationConnectionListener;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSNotificationAuthorizationService *_notificationAuthorizationService;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSPushRegistrationRepository *_pushRegistrationRepository;
    UNSRemoteNotificationServer *_remoteNotificationService;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    UNSLocationMonitor *_locationMonitor;
    UNSDaemonLauncher *_daemonLauncher;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSSet *_systemSourceBundleIdentifiers;
    NSString *_libraryDirectory;
    NSString *_directory;
    UNSSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_installedSourceQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)isApplicationForeground:(id)arg0 ;
-(id)_loadAllSystemNotificationSourceDescriptions;
-(id)_sourceDescriptionsForApplications:(id)arg0 ;
-(id)init;
-(void)_addObserverForApplicationStateMonitor;
-(void)_addObserverForApplicationStateRestore;
-(void)_addObserverForApplicationWorkspaceChanges;
-(void)_addObserverForBackgroundRefreshApplicationChanges;
-(void)_addObserverForContentProtectionChanges;
-(void)_addObserverForDataProviderFactoryChanges;
-(void)_addObserverForLocaleChanges;
-(void)_addObserverForRemoteNotificationServiceChanges;
-(void)_addObserverForSignificantTimeChanges;
-(void)_applicationStateDidRestore;
-(void)_applicationsDidInstall:(id)arg0 ;
-(void)_backgroundRefreshApplicationsDidChange;
-(void)_didChangeApplicationState:(unsigned int)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_ensureAttachmentsIntegrity;
-(void)_installedSourceQueue_notificationSourcesDidInstall:(id)arg0 ;
-(void)_installedSourceQueue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_localeDidChange;
-(void)_migrateAttachments;
-(void)_migrateNotificationCategories;
-(void)_migrateNotificationRepository;
-(void)_migrateNotificationSchedule;
-(void)_migratePendingNotificationRequests;
-(void)_migratePushRegistrations;
-(void)_registerLoggers;
-(void)_removeBundleLibrarianMappingsForSourceDescriptions:(id)arg0 ;
-(void)_removeNotificationSourceDirectories:(id)arg0 ;
-(void)_removePushStore;
-(void)_timeDidChangeSignificantly;
-(void)_triggerLocationArrowForBundleIdentifier:(id)arg0 ;
-(void)_validateNotificationRepository;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg0 ;
-(void)didChangeNotificationSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)initialSystemNotificationSourcesDidInstall:(id)arg0 applicationsDidInstall:(id)arg1 ;
-(void)willPresentNotification:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif