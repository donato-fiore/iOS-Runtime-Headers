// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15SEYMOURSERVICES6DAEMON_H
#define _TTC15SEYMOURSERVICES6DAEMON_H

@class SwiftObject;



@interface _TtC15SeymourServices6Daemon : SwiftObject {
    ? appInstallCoordinator;
    ? activationGate;
    ? analyticsReporter;
    ? xpcStreamHandler;
    ? xpcStreamPublisher;
    ? xpcBroadcastConnection;
    ? managedProfileObserver;
    ? eventHub;
    ? pairedCompanionConnection;
    ? pairedCompanionLink;
    ? remoteParticipantBroadcastLink;
    ? remoteParticipantBroadcastConnection;
    ? accountProvider;
    ? accountSupportedWatchObserver;
    ? appLauncher;
    ? dataProtectionMonitor;
    ? persistenceStore;
    ? scriptConnection;
    ? scriptListener;
    ? scriptSystem;
    ? scriptUnpacker;
    ? scriptUpdateJournal;
    ? scriptBundleLoader;
    ? serverContainer;
    ? publicServerEndpoint;
    ? privateServerEndpoint;
    ? serverSyncCoordinator;
    ? pairedSyncCoordinator;
    ? syncCoordinator;
    ? syncListener;
    ? syncSystem;
    ? adminListener;
    ? adminSystem;
    ? bookmarkDataStore;
    ? bookmarkListener;
    ? bookmarkSystem;
    ? catalogCache;
    ? catalogDataStore;
    ? catalogListener;
    ? catalogScriptClient;
    ? catalogSystem;
    ? configurationDataStore;
    ? configurationListener;
    ? configurationScriptClient;
    ? configurationSystem;
    ? contactService;
    ? displayPreferenceDataStore;
    ? displayPreferenceListener;
    ? displayPreferenceSystem;
    ? privacyPreferenceDataSource;
    ? privacyPreferenceListener;
    ? privacyPreferenceSystem;
    ? scoreListener;
    ? scoreSystem;
    ? scoreServer;
    ? archivedSessionDataStore;
    ? archivedSessionListener;
    ? archivedSessionSystem;
    ? healthKitMindfulSessionService;
    ? healthKitMindfulSessionDataStore;
    ? healthKitWorkoutService;
    ? healthKitWorkoutDataStore;
    ? healthDataSystem;
    ? healthDataListener;
    ? localDeviceProvider;
    ? metricIdentifierProvider;
    ? recommendationDataStore;
    ? recommendationScriptClient;
    ? recommendationSystem;
    ? recommendationListener;
    ? schedulingListener;
    ? duetObserver;
    ? schedulingSystem;
    ? assetBundleHandler;
    ? assetBundleProgressPublisher;
    ? assetCancellationHandler;
    ? assetCatalogUpdater;
    ? assetDataStore;
    ? assetDeviceScreen;
    ? assetFileStore;
    ? assetImageLoader;
    ? assetKeyDeletionHander;
    ? assetListener;
    ? assetLoaderRegistry;
    ? assetMediaStreamLoader;
    ? assetMediaStreamKeyProvider;
    ? assetPersistentKeyLoader;
    ? assetPreferencesObserver;
    ? assetRequestHandler;
    ? assetRequestProvider;
    ? assetScriptClient;
    ? assetSystem;
    ? assetDefaultPriorityQueue;
    ? assetHighPriorityOperationQueue;
    ? assetLowPriorityOperationQueue;
    ? assetValidator;
    ? powerMonitor;
    ? bagConsumer;
    ? deviceRegistry;
    ? supportedDeviceAvailability;
    ? syncServer;
    ? pushServiceObserver;
    ? accountStatusObserver;
    ? metricIdentifierStore;
    ? metricRecorderBroker;
    ? metricSystem;
    ? metricListener;
    ? assetPurgeListener;
    ? keyDeliveryDataStore;
    ? keyRequestBagConsumer;
    ? keyProvider;
    ? keyDeliverySystem;
    ? keyDeliveryListener;
    ? contentAvailabilityListener;
    ? contentAvailabilitySystem;
    ? contentAvailabilityObserver;
    ? contentAvailabilityScriptClient;
    ? contentRestrictionObserver;
    ? storefrontObserver;
    ? engagementDataStore;
    ? engagementListener;
    ? engagementNotificationCoordinator;
    ? engagementPushHandler;
    ? engagementPushCoordinator;
    ? engagementSystem;
    ? engagementScriptClient;
    ? serviceSubscriptionListener;
    ? serviceSubscriptionObserver;
    ? serviceSubscriptionProviderBroker;
    ? serviceSubscriptionSystem;
    ? remoteBrowsingGuestPairingAuthenticator;
    ? remoteBrowsingGuestPairingVerifier;
    ? remoteBrowsingConfirmationCoordinator;
    ? remoteBrowsingListener;
    ? remoteBrowsingSystem;
    ? participantConnectionBrokerProvider;
    ? siriSystem;
    ? siriListener;
    ? siriScriptClient;
    ? sigTermHandler;
    ? _appleMediaServicesHARLoggingEnabled;
}






@end


#endif