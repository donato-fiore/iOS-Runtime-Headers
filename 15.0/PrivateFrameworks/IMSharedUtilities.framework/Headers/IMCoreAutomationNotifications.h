// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCOREAUTOMATIONNOTIFICATIONS_H
#define IMCOREAUTOMATIONNOTIFICATIONS_H


#import <Foundation/Foundation.h>


@interface IMCoreAutomationNotifications : NSObject

@property (readonly) NSInteger attachmentsWrittenCount; // ivar: _attachmentsWrittenCount
@property (readonly) NSInteger chatsWrittenCount; // ivar: _chatsWrittenCount
@property (readonly) NSInteger messagesWrittenCount; // ivar: _messagesWrittenCount


+(id)sharedInstance;
-(id)init;
-(void)addNewAttachmentsSyncedCount:(NSInteger)arg0 ;
-(void)addNewChatsSyncedCount:(NSInteger)arg0 ;
-(void)addNewMessagesSyncedCount:(NSInteger)arg0 ;
-(void)clearSyncCounts;
-(void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg0 chatsDidsync:(BOOL)arg1 messagesDidSync:(BOOL)arg2 attachmentsDidSync:(BOOL)arg3 ;
-(void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg0 withErrorString:(id)arg1 ;
-(void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg0 downloadedFromCloudKitSuccessfully:(BOOL)arg1 ;
-(void)postCoreAutomationNotificationPeriodicSyncUpdateNotification;
-(void)postCoreAutomationNotificationWithAction:(id)arg0 ;
-(void)postCoreAutomationNotificationWithDictionary:(id)arg0 withVerboseLogging:(BOOL)arg1 ;


@end


#endif