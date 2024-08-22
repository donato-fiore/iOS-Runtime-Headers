// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFLIBRARYMESSAGE_H
#define MFLIBRARYMESSAGE_H

@class NSString, NSArray, NSDate, NSUUID, ECMessageFlags, MFMessageHeaders, NSDictionary, NSSet, ECAngleBracketIDHash, ECSubject;
@protocol EDPersistedMessage, ECMimePart;


#import "MFMailMessage.h"
#import "MailAccount.h"
#import "MFMailboxUid.h"

@interface MFLibraryMessage : MFMailMessage <EDPersistedMessage>

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
}


@property (readonly, nonatomic) MailAccount *account;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, nonatomic) NSObject<ECMimePart> *bodyPart;
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly) NSUInteger conversationFlags;
@property (readonly, nonatomic) NSInteger conversationID;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSUUID *documentID;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, copy, nonatomic) NSArray *from;
@property (readonly, nonatomic) NSInteger globalMessageID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFMessageHeaders *headers;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly) NSSet *labels;
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (readonly, nonatomic) NSUInteger numberOfAttachments;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, nonatomic) NSInteger persistedMessageID;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSArray *references; // ivar: _references
@property (copy) NSArray *remoteContentLinks; // ivar: _remoteContentLinks
@property (readonly, copy, nonatomic) NSString *remoteID;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, copy, nonatomic) ECSubject *subject;
@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *to;


+(id)log;
+(id)messageWithLibraryID:(NSInteger)arg0 ;
-(BOOL)hasTemporaryUid;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLibraryMessage;
-(BOOL)isMessageContentsLocallyAvailable;
-(BOOL)isPartial;
-(NSInteger)compareByUidWithMessage:(id)arg0 ;
-(NSInteger)libraryID;
-(NSInteger)originalMailboxID;
-(NSUInteger)messageSize;
-(NSUInteger)uniqueRemoteId;
-(id)_privacySafeDescription;
-(id)copyMessageInfo;
-(id)dataConsumerForMimePart:(id)arg0 ;
-(id)dataPathForMimePart:(id)arg0 ;
-(id)initWithLibraryID:(NSInteger)arg0 ;
-(id)library;
-(id)messageID;
-(id)originalMailboxURL;
-(id)path;
-(id)storageLocationForAttachment:(id)arg0 ;
-(unsigned int)uid;
-(void)_updateUID;
-(void)commit;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg0 ;
-(void)markAsFlagged;
-(void)markAsForwarded;
-(void)markAsNotFlagged;
-(void)markAsNotViewed;
-(void)markAsReplied;
-(void)markAsViewed;
-(void)setHasTemporaryUid:(BOOL)arg0 ;
-(void)setIsPartial:(BOOL)arg0 ;
-(void)setMessageData:(id)arg0 isPartial:(BOOL)arg1 ;
-(void)setMessageFlags:(NSUInteger)arg0 ;
-(void)setMessageFlagsWithoutCommitting:(NSUInteger)arg0 ;
-(void)setMessageSize:(NSUInteger)arg0 ;
-(void)setMutableInfoFromMessage:(id)arg0 ;
-(void)setOriginalMailboxID:(NSInteger)arg0 ;
-(void)setPreferredEncoding:(unsigned int)arg0 ;
-(void)setUid:(unsigned int)arg0 ;
-(void)setUniqueRemoteId:(NSUInteger)arg0 ;


@end


#endif