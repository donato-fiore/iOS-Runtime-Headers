// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFLIBRARYMESSAGE_H
#define MFLIBRARYMESSAGE_H

@class NSString, NSURL, NSArray, NSData, NSDictionary, NSDate, NSUUID, ECMessageFlags, EMFollowUp, MFMessageHeaders, NSSet, ECAngleBracketIDHash, EMReadLater, ECSubject;
@protocol EDPersistedMessage, MFIMAPMessage, EDAccount, ECMimeBody;


#import "MFMailMessage.h"
#import "MailAccount.h"
#import "MFMailboxUid.h"
#import "MFLibraryStore.h"

@interface MFLibraryMessage : MFMailMessage <EDPersistedMessage, MFIMAPMessage>

 {
    NSInteger _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    NSUInteger _uniqueRemoteId;
    NSUInteger _size;
    NSInteger _mailboxID;
    NSInteger _originalMailboxID;
    NSString *_messageID;
    uint8_t _conversationFlags;
    uint8_t _senderBucket;
    uint8_t _unsubscribeType;
}


@property (readonly, nonatomic) MailAccount *account;
@property (readonly, nonatomic) NSObject<EDAccount> *accountForSender;
@property (readonly, nonatomic) NSURL *basePath;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, copy) NSArray *bccIfAvailable;
@property (readonly, nonatomic) NSData *brandIndicator; // ivar: _brandIndicator
@property (retain, nonatomic) NSURL *brandIndicatorLocation; // ivar: _brandIndicatorLocation
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly) NSUInteger conversationFlags;
@property (readonly, nonatomic) NSInteger conversationID;
@property (readonly, copy, nonatomic) NSDictionary *dataDetectionAttributes; // ivar: _dataDetectionAttributes
@property (readonly) NSDate *date;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *displayDate; // ivar: _displayDate
@property (readonly, copy, nonatomic) NSUUID *documentID;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (retain, nonatomic) EMFollowUp *followUp; // ivar: _followUp
@property (readonly, copy, nonatomic) NSArray *from;
@property (readonly, nonatomic) NSInteger globalMessageID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFMessageHeaders *headers;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (nonatomic) BOOL isPartial;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly) NSSet *labels;
@property (readonly, nonatomic) NSInteger libraryID;
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (nonatomic) NSInteger mailboxID;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (retain, nonatomic) MFLibraryStore *messageStore;
@property (readonly, nonatomic) NSObject<ECMimeBody> *mimeBody;
@property (readonly, nonatomic) NSUInteger numberOfAttachments;
@property (nonatomic) NSInteger originalMailboxID;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, nonatomic) NSInteger persistedMessageID;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (retain) EMReadLater *readLater; // ivar: _readLater
@property (copy, nonatomic) NSArray *references; // ivar: _references
@property (copy) NSArray *remoteContentLinks; // ivar: _remoteContentLinks
@property (copy, nonatomic) NSString *remoteID;
@property (retain) NSDate *sendLaterDate; // ivar: _sendLaterDate
@property (nonatomic) NSInteger senderBucket;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, copy, nonatomic) ECSubject *subject;
@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *to;
@property (nonatomic) unsigned int uid;
@property (nonatomic) NSUInteger uniqueRemoteId;
@property (readonly, nonatomic) NSInteger unsubscribeType;


+(id)log;
+(id)messageWithLibraryID:(NSInteger)arg0 ;
-(BOOL)hasTemporaryUid;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLibraryMessage;
-(BOOL)isMessageContentsLocallyAvailable;
-(NSInteger)compareByUidWithMessage:(id)arg0 ;
-(NSUInteger)messageSize;
-(id)_privacySafeDescription;
-(id)dataConsumerForMimePart:(id)arg0 ;
-(id)dataPathForMimePart:(id)arg0 ;
-(id)initWithLibraryID:(NSInteger)arg0 ;
-(id)library;
-(id)messageID;
-(id)originalMailboxURL;
-(id)path;
-(id)storageLocationForAttachment:(id)arg0 ;
-(void)commit;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg0 ;
-(void)markAsFlagged;
-(void)markAsForwarded;
-(void)markAsNotFlagged;
-(void)markAsNotViewed;
-(void)markAsReplied;
-(void)markAsViewed;
-(void)setHasTemporaryUid:(BOOL)arg0 ;
-(void)setMessageData:(id)arg0 isPartial:(BOOL)arg1 ;
-(void)setMessageFlags:(NSUInteger)arg0 ;
-(void)setMessageFlagsWithoutCommitting:(NSUInteger)arg0 ;
-(void)setMessageSize:(NSUInteger)arg0 ;
-(void)setMutableInfoFromMessage:(id)arg0 ;
-(void)setPreferredEncoding:(unsigned int)arg0 ;


@end


#endif