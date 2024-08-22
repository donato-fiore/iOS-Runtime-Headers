// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVERSATIONCONFIRMATIONALERTSCONTROLLER_H
#define CKCONVERSATIONCONFIRMATIONALERTSCONTROLLER_H

@class NSArray, UIViewController;

#import <Foundation/Foundation.h>


@interface CKConversationConfirmationAlertsController : NSObject

@property (nonatomic) NSInteger alertControllerStyle; // ivar: _alertControllerStyle
@property (retain, nonatomic) NSArray *junkConversations; // ivar: _junkConversations
@property (retain, nonatomic) UIViewController *presentationViewController; // ivar: _presentationViewController
@property (retain, nonatomic) NSArray *selectedConversations; // ivar: _selectedConversations


-(BOOL)_hasChatSharingLocationInConversations:(id)arg0 ;
-(BOOL)_isStoredOnIcloud;
-(BOOL)_shouldConfirmStopSharingLocationForConversations:(id)arg0 ;
-(NSUInteger)_numberOfRecoverableMessagesInConversations:(id)arg0 ;
-(id)_conversationDeletionAlertMessageForConversationCount:(NSUInteger)arg0 ;
-(id)_identifyBusinessConversationToRemove:(id)arg0 ;
-(id)_identifySpamConversationsToRemove:(id)arg0 ;
-(id)_junkRecoveryAlertMessageForCount:(NSUInteger)arg0 ;
-(id)_junkRecoveryAlertTitleForCount:(NSUInteger)arg0 ;
-(id)_moveToRecentlyDeletedAlertMessageForMessagesCount:(NSUInteger)arg0 ;
-(id)_moveToRecentlyDeletedAlertTitleForConversationsCount:(NSUInteger)arg0 ;
-(id)_moveToRecentlyDeletedAlertTitleForMessagesCount:(NSUInteger)arg0 ;
-(id)_permanentDeletionAlertMessageForCount:(NSUInteger)arg0 ;
-(id)_permanentDeletionAlertTitleForCount:(NSUInteger)arg0 ;
-(id)_permanentJunkDeletionAlertTitleForCount:(NSUInteger)arg0 ;
-(id)_recoveryAlertMessageForCount:(NSUInteger)arg0 ;
-(id)_recoveryAlertTitleForCount:(NSUInteger)arg0 ;
-(id)_reportSpamConfirmationMessageForJunkConversations;
-(id)_spamReportDestinationsForJunkConversations;
-(void)_configureAppearanceForAlertController:(id)arg0 ;
-(void)_markConversationsAsSpam:(id)arg0 ;
-(void)_presentEndBusinessChatConfirmationForBusinessConversation:(id)arg0 actionCompletionBlock:(id)arg1 ;
// -(void)_presentRecoverableDeletionConfirmationWithConfirmedBlock:(id)arg0 cancelBlock:(unk)arg1  ;
-(void)_presentStopSharingLocationConfirmationWithActionCompletionBlock:(id)arg0 ;
-(void)_stopSharingLocationInConversations:(id)arg0 ;
-(void)_trackEvent:(NSInteger)arg0 forConversations:(id)arg1 ;
// -(void)presentPermanentDeletionConfirmationFromViewController:(id)arg0 forConversations:(id)arg1 alertControllerStyle:(NSInteger)arg2 alertsCompletedBlock:(id)arg3 cancelBlock:(unk)arg4  ;
// -(void)presentPermanentJunkDeletionConfirmationFromViewController:(id)arg0 forConversations:(id)arg1 alertControllerStyle:(NSInteger)arg2 alertsCompletedBlock:(id)arg3 cancelBlock:(unk)arg4  ;
// -(void)presentRecoverDeletedConversationsConfirmationFromViewController:(id)arg0 forConversations:(id)arg1 alertControllerStyle:(NSInteger)arg2 alertsCompletedBlock:(id)arg3 cancelBlock:(unk)arg4  ;
// -(void)presentRecoverJunkConversationsConfirmationFromViewController:(id)arg0 forConversations:(id)arg1 alertControllerStyle:(NSInteger)arg2 alertsCompletedBlock:(id)arg3 cancelBlock:(unk)arg4  ;
// -(void)presentRecoverableDeletionConfirmationsFromViewController:(id)arg0 forConversations:(id)arg1 alertControllerStyle:(NSInteger)arg2 alertsCompletedBlock:(id)arg3 cancelBlock:(unk)arg4  ;
// -(void)presentRecoverableDeletionConfirmationsFromViewController:(id)arg0 forMessagesCount:(NSUInteger)arg1 alertControllerStyle:(NSInteger)arg2 sender:(id)arg3 alertsCompletedBlock:(id)arg4 cancelBlock:(unk)arg5  ;


@end


#endif