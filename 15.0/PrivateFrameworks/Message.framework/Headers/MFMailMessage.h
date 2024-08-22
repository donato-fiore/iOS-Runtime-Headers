// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILMESSAGE_H
#define MFMAILMESSAGE_H

@class MFMessage, NSURL, NSArray, NSDate, NSString, NSUUID, ECMessageFlags, MFMessageHeaders, NSDictionary, NSSet, ECAngleBracketIDHash, EMMessageObjectID, ECSubject;
@protocol EDIndexableMessage, MFBaseMessage, ECMimePart;


#import "MFMessageInfo.h"
#import "MailAccount.h"
#import "MFMailboxUid.h"

@interface MFMailMessage : MFMessage <EDIndexableMessage, MFBaseMessage>

 {
    NSUInteger _messageFlags;
    NSUInteger _modSequenceNumber;
    MFMessageInfo *_info;
    NSURL *_globalMessageURL;
    BOOL _useInternalSourceIsManaged;
    BOOL _sourceIsManaged;
}


@property (readonly, nonatomic) MailAccount *account;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, nonatomic) NSObject<ECMimePart> *bodyPart;
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly, nonatomic) NSInteger conversationHash;
@property (readonly, nonatomic) NSInteger conversationID;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) unsigned int dateReceivedInterval;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, nonatomic) unsigned int dateSentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSUUID *documentID;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic) BOOL flagged;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, copy, nonatomic) NSArray *from;
@property (nonatomic) NSInteger globalMessageID; // ivar: _globalMessageID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFMessageHeaders *headers;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (readonly) NSSet *labels;
@property (readonly, nonatomic) NSInteger libraryID;
@property (readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (readonly, nonatomic) NSInteger mailboxID;
@property (nonatomic) NSUInteger messageFlags;
@property (readonly, nonatomic) NSInteger messageIDHash;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property NSUInteger modSequenceNumber;
@property (readonly, nonatomic) NSUInteger numberOfAttachments;
@property (readonly, nonatomic) EMMessageObjectID *objectID;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, nonatomic) BOOL read;
@property (readonly, copy, nonatomic) NSArray *references;
@property (readonly, copy, nonatomic) NSString *remoteID;
@property (readonly, nonatomic) BOOL senderVIP;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (nonatomic) BOOL shouldUseMailDrop; // ivar: _shouldUseMailDrop
@property (nonatomic) BOOL sourceIsManaged;
@property (readonly, copy, nonatomic) ECSubject *subject;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *to;
@property (readonly, nonatomic) unsigned int uid;


+(id)forwardedMessagePrefixWithSpacer:(BOOL)arg0 ;
+(unsigned int)displayablePriorityForPriority:(int)arg0 ;
+(unsigned int)validatePriority:(int)arg0 ;
-(BOOL)answered;
-(BOOL)conversationMuted;
-(BOOL)conversationVIP;
-(BOOL)isSearchResultWithBogusRemoteId;
-(BOOL)junk;
-(BOOL)shouldSetSummary;
-(NSUInteger)conversationFlags;
-(id)URL;
-(id)bestAlternativePart;
-(id)bestAlternativePart:(*BOOL)arg0 ;
-(id)copyMessageInfo;
-(id)externalConversationID;
-(id)globalMessageURL;
-(id)loadMeetingData;
-(id)loadMeetingExternalID;
-(id)loadMeetingMetadata;
-(id)originalMailboxURL;
-(id)preferredEmailAddressToReplyWith;
-(id)remoteMailboxURL;
-(id)storageLocationForAttachment:(id)arg0 ;
-(int)priority;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg0 ;
-(void)markAsFlagged;
-(void)markAsForwarded;
-(void)markAsNotFlagged;
-(void)markAsNotViewed;
-(void)markAsReplied;
-(void)markAsViewed;
-(void)setConversationFlags:(NSUInteger)arg0 ;
-(void)setMutableInfoFromMessage:(id)arg0 ;
-(void)setPriorityFromHeaders:(id)arg0 ;
-(void)setSummary:(id)arg0 ;


@end


#endif