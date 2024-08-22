// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDAVAILABILITYAUTOREPLIER_H
#define IMDAVAILABILITYAUTOREPLIER_H

@class CARAutomaticDNDStatus, NSString;
@protocol IMDAutoReplying, OS_dispatch_queue, IMDAutoReplyDelegate;

#import <Foundation/Foundation.h>


@interface IMDAvailabilityAutoReplier : NSObject <IMDAutoReplying>



@property (retain, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus; // ivar: _automaticDNDStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // ivar: _privateWorkQueue
@property (weak, nonatomic) NSObject<IMDAutoReplyDelegate> *replyDelegate; // ivar: _replyDelegate
@property (readonly) Class superclass;


-(BOOL)_audience:(NSUInteger)arg0 allowsRepliesToChat:(id)arg1 ;
-(BOOL)_chatEligibleForAvailabilityInformation:(id)arg0 ;
-(BOOL)_contactsContainsParticipants:(id)arg0 ;
-(BOOL)_deviceIsPhone;
-(BOOL)_deviceSupportsSMSAutoReplyForChat:(id)arg0 ;
-(BOOL)_deviceSupportsiMessageAutoReply;
-(BOOL)_favoritesContainsParticipants:(id)arg0 ;
-(BOOL)_hasRecentOutgoingMessagesInChat:(id)arg0 ;
-(BOOL)_haveRecentUrgentMessageInGracePeriodForChat:(id)arg0 ;
-(BOOL)_haveRecentlySentUnavailabilityAutoReplyMessageToChat:(id)arg0 ;
-(BOOL)_isInDrivingFocus;
-(BOOL)_isSMSChat:(id)arg0 ;
-(BOOL)_localDeviceHasSIMMatchingChat:(id)arg0 ;
-(BOOL)_messageHasLegacyUrgentTriggerMatchInText:(id)arg0 ;
-(BOOL)_messageIsSOS:(id)arg0 ;
-(BOOL)_messageItemSupportsAvailabilityReply:(id)arg0 ;
-(BOOL)_messageItemSupportsBreakthroughNotification:(id)arg0 ;
-(BOOL)_messageSenderEligibleToReceiveAvailabilityInformation:(id)arg0 ;
-(BOOL)_shouldIgnoreDoNotDisturbForMessages:(id)arg0 inChat:(id)arg1 ;
-(BOOL)_shouldSendTextAutoReplyForChat:(id)arg0 ;
-(BOOL)_sosTransportValidForMessage:(id)arg0 ;
-(BOOL)_sosURLMatchInText:(id)arg0 ;
-(BOOL)_userIsAvailableToHandle:(id)arg0 ;
-(NSUInteger)_autoReplyAudience;
-(id)_autoReplyMessageTextWithUrgentBreakthroughInstructions:(BOOL)arg0 ;
-(id)_customizedAutoReplyMessage;
-(id)_dndHandleForIMDHandle:(id)arg0 ;
-(id)_messageGuidsForMessages:(id)arg0 ;
-(id)_messageItemsSupportingAvailabilityReplyFromItems:(id)arg0 ;
-(id)_messageItemsSupportingBreakthroughNotifications:(id)arg0 ;
-(id)_stringForAutoReplyAudience:(NSUInteger)arg0 ;
-(id)init;
-(void)_processMessagesForAvailabilityAutoReply:(id)arg0 forIncomingMessageFromIDSID:(id)arg1 inChat:(id)arg2 ;
-(void)_sendDeliveredQuietelyForMessages:(id)arg0 forIncomingMessageFromIDSID:(id)arg1 inChat:(id)arg2 ;
-(void)_sendTextAutoReplyIfNecessaryForMessages:(id)arg0 withUrgentBreakthroughInstructions:(BOOL)arg1 inChat:(id)arg2 ;
-(void)_sendTextAutoReplyToChat:(id)arg0 withUrgentBreakthroughInstructions:(BOOL)arg1 ;
-(void)iterateRecentMessagesInChat:(id)arg0 withBlock:(id)arg1 ;
-(void)processMessages:(id)arg0 inChat:(id)arg1 fromIDSID:(id)arg2 ;


@end


#endif