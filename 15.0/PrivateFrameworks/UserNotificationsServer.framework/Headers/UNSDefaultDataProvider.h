// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSDEFAULTDATAPROVIDER_H
#define UNSDEFAULTDATAPROVIDER_H

@class BBSectionIcon, BBSectionInfo, NSMutableDictionary, BSCFBundle, NSString, BBDataProviderProxy;
@protocol UNSNotificationRepositoryObserver, UNSNotificationCategoryRepositoryObserver, UNSNotificationTopicRepositoryObserver, BBRemoteDataProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSNotificationSourceDescription.h"
#import "UNSApplicationLauncher.h"
#import "UNSDaemonLauncher.h"
#import "UNSNotificationRepository.h"
#import "UNSNotificationCategoryRepository.h"
#import "UNSNotificationTopicRepository.h"
#import "UNSAttachmentsService.h"
#import "UNSLocalizationService.h"

@interface UNSDefaultDataProvider : NSObject <UNSNotificationRepositoryObserver, UNSNotificationCategoryRepositoryObserver, UNSNotificationTopicRepositoryObserver, BBRemoteDataProvider>

 {
    BBSectionIcon *_sectionIcon;
    BBSectionInfo *_effectiveSectionInfo;
    BOOL _suppressUserAuthorizationPrompt;
    UNSNotificationSourceDescription *_notificationSourceDescription;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    UNSLocalizationService *_localizationService;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_categoryToParamSubType;
}


@property (retain, nonatomic) BSCFBundle *bundle; // ivar: _bundle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BBDataProviderProxy *proxy; // ivar: _proxy
@property (readonly) Class superclass;


-(BOOL)_isResourceValidForPath:(id)arg0 withContainerPath:(id)arg1 ;
-(BOOL)_isTCCUserAvailabilityGrantedForBundleId:(id)arg0 ;
-(BOOL)_queue_supportsCriticalAlertsForSubsectionIDs:(id)arg0 ;
-(BOOL)syncsBulletinDismissal;
-(NSUInteger)_bulletinInterruptionLevelForInterruptionLevel:(NSUInteger)arg0 ;
-(id)_actionFromActionRecord:(id)arg0 ;
-(id)_actionsFromActionRecords:(id)arg0 ;
-(id)_allBulletinsWithMaxCount:(NSUInteger)arg0 sinceDate:(id)arg1 ;
-(id)_allCategories;
-(id)_bbContactFromUNContact:(id)arg0 ;
-(id)_bbContentTypeFromUNContentType:(id)arg0 ;
-(id)_categoryForIdentifier:(id)arg0 ;
-(id)_defaultActionWithNotification:(id)arg0 ;
-(id)_dismissActionForCategory:(id)arg0 ;
-(id)_localizeClientString:(id)arg0 inBundle:(id)arg1 ;
-(id)_pathForSoundName:(id)arg0 ;
-(id)_queue_applicableSectionInfosForSubsectionIDs:(id)arg0 ;
-(id)_queue_bulletinForNotification:(id)arg0 ;
-(id)_sectionIconForNotificationSourceDescription:(id)arg0 ;
-(id)_sectionIconVariantForImageName:(id)arg0 bundlePath:(id)arg1 format:(NSInteger)arg2 precomposed:(BOOL)arg3 ;
-(id)_silenceActionForCategory:(id)arg0 ;
-(id)_soundsDirectoryPathForContainerBasePath:(id)arg0 ;
-(id)_supplementaryActionsForForCategoryRecord:(id)arg0 ;
-(id)_topicForIdentifier:(id)arg0 ;
-(id)_unarchiveNotificationFromData:(id)arg0 ;
-(id)_userAvailabilityTCCApprovedBundleIds;
-(id)bulletinsWithRequestParameters:(id)arg0 lastCleared:(id)arg1 ;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(NSUInteger)arg0 lastClearedInfo:(id)arg1 ;
-(id)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(id)arg1 ;
-(id)defaultSectionInfo;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg0 ;
-(id)initWithNotificationSourceDescription:(id)arg0 applicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 topicRepository:(id)arg5 attachmentsService:(id)arg6 localizationService:(id)arg7 queue:(id)arg8 ;
-(id)notificationRecords;
-(id)sectionBundlePath;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)sortDescriptors;
-(id)universalSectionIdentifier;
-(void)_addAttachments:(id)arg0 toBulletinRequest:(id)arg1 ;
-(void)_handleBulletinActionResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)_queue_addBulletinForNotification:(id)arg0 ;
-(void)_queue_modifyBulletinForNotification:(id)arg0 ;
-(void)_queue_notificationRepositoryDidPerformUpdates:(id)arg0 ;
-(void)_queue_withdrawBulletinForNotification:(id)arg0 ;
-(void)_setNotificationSourceDescription:(id)arg0 ;
-(void)categoryRepository:(id)arg0 didChangeCategoriesForBundleIdentifier:(id)arg1 ;
-(void)dataProviderDidLoad;
-(void)dealloc;
-(void)handleBulletinActionResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidate;
-(void)notificationRepository:(id)arg0 didDiscoverContentOnFirstUnlockForBundleIdentifier:(id)arg1 ;
-(void)notificationRepository:(id)arg0 didPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setEffectiveSectionInfo:(id)arg0 ;
-(void)setNotificationSourceDescription:(id)arg0 ;
-(void)topicRepository:(id)arg0 didChangeTopicsForBundleIdentifier:(id)arg1 ;
-(void)uninstall;
-(void)unloadBundle;


@end


#endif