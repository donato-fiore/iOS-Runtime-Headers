// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKMESSAGE_H
#define NNMKMESSAGE_H

@class NSString, NSArray, NSDate;
@protocol NNMKMailboxItem, NNMKBasicMessage, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NNMKMessage : NSObject <NNMKMailboxItem, NNMKBasicMessage, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountId; // ivar: _accountId
@property (copy, nonatomic) NSArray *bcc; // ivar: _bcc
@property (copy, nonatomic) NSArray *cc; // ivar: _cc
@property (copy, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (copy, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (copy, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *from; // ivar: _from
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger isSpecialMailboxSpecific; // ivar: _isSpecialMailboxSpecific
@property (nonatomic) BOOL isThreadSpecific; // ivar: _isThreadSpecific
@property (copy, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (copy, nonatomic) NSString *messageId; // ivar: _messageId
@property (copy, nonatomic) NSString *messageIdHeader; // ivar: _messageIdHeader
@property (copy, nonatomic) NSString *notificationMessageId; // ivar: _notificationMessageId
@property (retain, nonatomic) NSString *preview; // ivar: _preview
@property (copy, nonatomic) NSString *publisherBulletinId; // ivar: _publisherBulletinId
@property (nonatomic) BOOL replaceStandaloneNotification; // ivar: _replaceStandaloneNotification
@property (copy, nonatomic) NSString *serverId; // ivar: _serverId
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSUInteger statusVersion; // ivar: _statusVersion
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *to; // ivar: _to
@property (nonatomic) NSUInteger visibleStatus; // ivar: _visibleStatus


+(BOOL)checkStatus:(NSUInteger)arg0 stateToCheck:(NSUInteger)arg1 ;
+(BOOL)isMessageURL:(id)arg0 ;
+(BOOL)messageHasMultipleRecipients:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)addState:(NSUInteger)arg0 toStatus:(NSUInteger)arg1 ;
+(NSUInteger)removeState:(NSUInteger)arg0 fromStatus:(NSUInteger)arg1 ;
+(id)URLForMessageId:(id)arg0 ;
+(id)URLForMessageId:(id)arg0 attachmentID:(id)arg1 ;
+(id)attachmentIdForURL:(id)arg0 ;
+(id)generateConversationIdWithAccountId:(id)arg0 conversationId:(id)arg1 ;
+(id)generateMessageHashForMessage:(id)arg0 ;
+(id)generateNotificationIdWithFolderId:(id)arg0 remoteId:(id)arg1 ;
+(id)messageIdForURL:(id)arg0 ;
+(id)messageIdsFromMessages:(id)arg0 ;
+(id)serverIdsFromMessages:(id)arg0 ;
+(id)stringFromMailboxItemState:(NSUInteger)arg0 ;
-(BOOL)checkState:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addState:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeState:(NSUInteger)arg0 ;


@end


#endif