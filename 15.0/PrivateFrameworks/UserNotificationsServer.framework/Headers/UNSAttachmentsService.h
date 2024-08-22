// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSATTACHMENTSSERVICE_H
#define UNSATTACHMENTSSERVICE_H

@class NSString;
@protocol UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSAttachmentsRepository.h"
#import "UNSNotificationRepository.h"
#import "UNSNotificationSchedulingService.h"
#import "UNSPendingNotificationRepository.h"

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    UNSAttachmentsRepository *_attachmentsRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_attachmentURLsRemovedByReplaceUpdate:(id)arg0 ;
+(id)_notificationIdentifiersForNotificationRecords:(id)arg0 ;
+(id)_stagingDirectory;
-(id)_queue_resolveAttachmentsForRequest:(id)arg0 bundleIdentifier:(id)arg1 bundleProxy:(id)arg2 continueOnFailure:(BOOL)arg3 error:(*id)arg4 ;
-(id)_queue_resolvedFileURLForNotificationAttachment:(id)arg0 request:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(*id)arg4 ;
-(id)_queue_resolvedURLForNotificationAttachment:(id)arg0 request:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(*id)arg4 ;
-(id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg0 request:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(*id)arg4 ;
-(id)_temporaryAttachmentFileURL;
-(id)initWithAttachmentsRepository:(id)arg0 notificationRepository:(id)arg1 notificationSchedulingService:(id)arg2 pendingNotificationRepository:(id)arg3 ;
-(id)resolveAttachmentsForRequest:(id)arg0 bundleIdentifier:(id)arg1 bundleProxy:(id)arg2 error:(*id)arg3 ;
-(id)resolveAttachmentsSkippingErrorsForRequest:(id)arg0 bundleIdentifier:(id)arg1 bundleProxy:(id)arg2 ;
-(void)_beginObservingNotificationChanges;
-(void)_notificationIdentifiersForBundleIdentifier:(id)arg0 replyOnQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_queue_applicationDidUninstall:(id)arg0 ;
-(void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)_queue_ensureIntegrityWithCompletionHandler:(id)arg0 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_repositoryDidPerformUpdates:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg0 ;
-(void)ensureIntegrityWithCompletionHandler:(id)arg0 ;
-(void)notificationRepository:(id)arg0 didPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)pendingNotificationRepository:(id)arg0 didPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2 ;


@end


#endif