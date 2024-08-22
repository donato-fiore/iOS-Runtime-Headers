// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKANALYTICS_H
#define NNMKANALYTICS_H


#import <Foundation/Foundation.h>


@interface NNMKAnalytics : NSObject



+(BOOL)_reportingEnabled;
+(id)sharedInstance;
-(NSInteger)_delayInMSFromDate:(id)arg0 ;
-(id)stringForAction:(NSUInteger)arg0 ;
-(id)stringForDeviceMode:(NSUInteger)arg0 ;
-(id)stringForDeviceSource:(NSUInteger)arg0 ;
-(id)stringForFetchType:(NSUInteger)arg0 ;
-(id)stringForMailboxType:(NSUInteger)arg0 ;
-(id)stringForSendingType:(NSUInteger)arg0 ;
-(id)stringForSource:(NSUInteger)arg0 ;
-(void)NNMKSendEventLazyWithKey:(id)arg0 metadataBuilder:(id)arg1 ;
-(void)reportAction:(NSUInteger)arg0 source:(NSUInteger)arg1 ;
-(void)reportAppBackgroundRefreshed;
-(void)reportAppLaunched;
-(void)reportAppResumed;
-(void)reportAttachmentDownloadFailedInMode:(NSUInteger)arg0 ;
-(void)reportAttachmentDownloadedForMessageWithId:(id)arg0 contentId:(id)arg1 sizeInBytes:(NSUInteger)arg2 startTime:(id)arg3 ;
-(void)reportAttachmentReceivedForMessageWithId:(id)arg0 contentId:(id)arg1 sizeInBytes:(NSUInteger)arg2 fullSyncVersion:(NSUInteger)arg3 dateSynced:(id)arg4 ;
-(void)reportCellRighSwipeActionChanged:(id)arg0 ;
-(void)reportContentDisplayedForMessageWithId:(id)arg0 hasMainAlternative:(BOOL)arg1 hasTextAlternative:(BOOL)arg2 ;
-(void)reportContentDownloadFailedInMode:(NSUInteger)arg0 ;
-(void)reportContentDownloadedForMessageWithId:(id)arg0 textSizeInBytes:(NSUInteger)arg1 htmlSizeInBytes:(NSUInteger)arg2 startTime:(id)arg3 ;
-(void)reportContentSyncedForMessageWithId:(id)arg0 textSizeInBytes:(NSUInteger)arg1 htmlSizeInBytes:(NSUInteger)arg2 fullSyncVersion:(NSUInteger)arg3 dateSynced:(id)arg4 ;
-(void)reportCredentialsExpired;
-(void)reportDisplayingHtmlMessageWithStartTime:(id)arg0 ;
-(void)reportDisplayingTextMessageWithStartTime:(id)arg0 ;
-(void)reportFailedFetchWithType:(NSUInteger)arg0 inMode:(NSUInteger)arg1 ;
-(void)reportFetch:(NSUInteger)arg0 inMode:(NSUInteger)arg1 ;
-(void)reportFullSyncRequestedFromDevice:(NSUInteger)arg0 corruptionDetected:(BOOL)arg1 migrationRelated:(BOOL)arg2 idsFailureRelated:(BOOL)arg3 fullSyncVersionMatchRelated:(BOOL)arg4 ;
-(void)reportHaltSyncRequestedFromSource:(NSUInteger)arg0 ;
-(void)reportMailboxSelectionChanged:(id)arg0 source:(NSUInteger)arg1 ;
-(void)reportMessageDeletionReceivedForMessageWithId:(id)arg0 fullSyncVersion:(NSUInteger)arg1 dateSynced:(id)arg2 ;
-(void)reportMessageDeliveryDurationWithStartDate:(id)arg0 inMode:(NSUInteger)arg1 ;
-(void)reportMessageDeliveryFailedInMode:(NSUInteger)arg0 ;
-(void)reportMessageReceivedWithId:(id)arg0 willGenerateNotification:(BOOL)arg1 fullSyncVersion:(NSUInteger)arg2 dateSynced:(id)arg3 ;
-(void)reportMessageSentFromApp:(BOOL)arg0 mailto:(BOOL)arg1 sendingType:(NSUInteger)arg2 sizeInBytes:(NSUInteger)arg3 ;
-(void)reportMessageUpdateReceivedForMessageWithId:(id)arg0 fullSyncVersion:(NSUInteger)arg1 dateSynced:(id)arg2 ;
-(void)reportMoreMessagesReceivedConversationSpecific:(BOOL)arg0 fullSyncVersion:(NSUInteger)arg1 dateSynced:(id)arg2 ;
-(void)reportNotificationReceivedInMode:(NSUInteger)arg0 ;
-(void)reportOriginalMessageContentSizeInBytes:(NSUInteger)arg0 source:(NSUInteger)arg1 ;
-(void)reportRenderedNotificationUsingLocalContent:(BOOL)arg0 mailboxSynced:(BOOL)arg1 messageSynced:(BOOL)arg2 contentDownloaded:(BOOL)arg3 ;
-(void)reportWebKitLinkTapped;
-(void)reportWebKitRenderingProcessCrash;


@end


#endif