// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKUTILITIES_H
#define CKUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKUtilities : NSObject



+(BOOL)deviceHasMultipleSubscriptions;
+(BOOL)isIpad;
+(BOOL)isMessagePromotionsNotificationDisabled;
+(BOOL)isMessageTransactionsNotificationDisabled;
+(BOOL)isMessageUnknownSenderNotificationDisabled;
+(BOOL)userDefaultBoolForKey:(id)arg0 ;
+(NSUInteger)daysUntilDeletionForDate:(id)arg0 ;
+(NSUInteger)indexOfChatItem:(id)arg0 inChatItemsArray:(id)arg1 ;
+(NSUInteger)messageJunkStatus;
+(id)deviceSpecificNameForKey:(id)arg0 ;
+(id)imDefaultsSharedInstance;
+(id)imMessageForIMMessageItem:(id)arg0 ;
+(id)nsUserDefaultsStandardUserDefaults;
// +(id)quickSaveConfirmationAlertForMediaObjects:(id)arg0 momentShareURL:(id)arg1 popoverSource:(id)arg2 metricsSource:(id)arg3 cancelHandler:(id)arg4 preSaveHandler:(unk)arg5 postSaveHandler:(id)arg6  ;
// +(id)quickSaveConfirmationAlertForMediaObjects:(id)arg0 momentShareURL:(id)arg1 popoverSource:(id)arg2 metricsSource:(id)arg3 cancelHandler:(id)arg4 preSaveHandler:(unk)arg5 postSaveHandler:(id)arg6 postAnyActionHandler:(unk)arg7  ;
// +(id)quickSaveConfirmationAlertWithPhotoCount:(NSUInteger)arg0 videoCount:(NSUInteger)arg1 otherCount:(NSUInteger)arg2 alreadySavedCount:(NSUInteger)arg3 popoverSource:(id)arg4 cancelHandler:(id)arg5 saveHandler:(unk)arg6 navigationHandler:(id)arg7  ;
+(id)threadIdentifierForMessagePart:(id)arg0 ;
+(id)threadOriginatorForMessagePart:(id)arg0 ;
+(void)onboardRecentlyDeletedIfNeeded:(id)arg0 actionHandler:(id)arg1 ;


@end


#endif