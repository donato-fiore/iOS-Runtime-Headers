// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKSYNCEDMESSAGE_H
#define NNMKSYNCEDMESSAGE_H

@class NSMutableSet, NSString, NSDate;
@protocol NNMKBasicMessage;

#import <Foundation/Foundation.h>


@interface NNMKSyncedMessage : NSObject <NNMKBasicMessage>



@property (retain, nonatomic) NSMutableSet *attachmentsContentIdsNotYetSynced; // ivar: _attachmentsContentIdsNotYetSynced
@property (nonatomic) BOOL contentRequestedByUser; // ivar: _contentRequestedByUser
@property (nonatomic) NSUInteger contentResendInterval; // ivar: _contentResendInterval
@property (nonatomic) BOOL contentSynced; // ivar: _contentSynced
@property (nonatomic) BOOL contentSyncedBecauseUserRequested; // ivar: _contentSyncedBecauseUserRequested
@property (nonatomic) BOOL contentSyncedUsingNotificationPriority; // ivar: _contentSyncedUsingNotificationPriority
@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (retain, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (nonatomic) NSUInteger isSpecialMailboxSpecific; // ivar: _isSpecialMailboxSpecific
@property (nonatomic) BOOL isThreadSpecific; // ivar: _isThreadSpecific
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (nonatomic) NSUInteger resendInterval; // ivar: _resendInterval
@property (nonatomic) BOOL resendRequested; // ivar: _resendRequested
@property (retain, nonatomic) NSString *sanitizedMessageId; // ivar: _sanitizedMessageId
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSUInteger statusVersion; // ivar: _statusVersion
@property (nonatomic) BOOL usedNotificationPriorityForMessageSync; // ivar: _usedNotificationPriorityForMessageSync
@property (nonatomic) BOOL usedProtectedChannelForMessageSync; // ivar: _usedProtectedChannelForMessageSync


-(BOOL)isContentCompletelySynced;
-(id)init;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithMessage:(id)arg0 useDefaultMailbox:(BOOL)arg1 ;


@end


#endif