// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILMESSAGE_H
#define MFMAILMESSAGE_H

@class MFMessage, NSURL, NSArray, NSData, NSDictionary, NSDate, NSString, NSUUID, ECMessageFlags, EMFollowUp, MFMessageHeaders, NSSet, ECAngleBracketIDHash, MFMessageStore<MFMailMessageStore>, EMMessageObjectID, EMReadLater, ECSubject;
@protocol EDBaseMessage, ECMimeBody;


#import "MailAccount.h"
#import "MFMailboxUid.h"

@interface MFMailMessage : MFMessage <EDBaseMessage>

 {
    NSUInteger _messageFlags;
    NSUInteger _modSequenceNumber;
    NSURL *_globalMessageURL;
    BOOL _useInternalSourceIsManaged;
    BOOL _sourceIsManaged;
}


@property (readonly, nonatomic) MailAccount *account;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, copy) NSArray *bccIfAvailable;
@property (readonly, nonatomic) NSData *brandIndicator; // ivar: brandIndicator
@property (readonly, nonatomic) NSURL *brandIndicatorLocation; // ivar: brandIndicatorLocation
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly, nonatomic) NSInteger conversationID;
@property (readonly, copy, nonatomic) NSDictionary *dataDetectionAttributes; // ivar: dataDetectionAttributes
@property (readonly) NSDate *date;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *displayDate;
@property (readonly, copy, nonatomic) NSUUID *documentID;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, nonatomic) EMFollowUp *followUp;
@property (readonly, copy, nonatomic) NSArray *from;
@property (nonatomic) NSInteger globalMessageID; // ivar: _globalMessageID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFMessageHeaders *headers;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly) NSSet *labels;
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (nonatomic) NSUInteger messageFlags;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (retain, nonatomic) MFMessageStore<MFMailMessageStore> *messageStore;
@property (readonly, nonatomic) NSObject<ECMimeBody> *mimeBody;
@property NSUInteger modSequenceNumber;
@property (readonly, nonatomic) NSUInteger numberOfAttachments;
@property (readonly, nonatomic) EMMessageObjectID *objectID;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, nonatomic) BOOL read;
@property (readonly) EMReadLater *readLater;
@property (readonly, copy, nonatomic) NSArray *references;
@property (readonly, copy, nonatomic) NSString *remoteID;
@property (readonly) NSDate *sendLaterDate;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (nonatomic) BOOL shouldUseMailDrop; // ivar: _shouldUseMailDrop
@property (nonatomic) BOOL sourceIsManaged;
@property (readonly, copy, nonatomic) ECSubject *subject;
@property (readonly, copy, nonatomic) ECSubject *subjectIfAvailable;
@property (retain, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *to;


+(id)forwardedMessagePrefixWithSpacer:(BOOL)arg0 ;
+(unsigned int)displayablePriorityForPriority:(int)arg0 ;
+(unsigned int)validatePriority:(int)arg0 ;
-(BOOL)answered;
-(BOOL)conversationMuted;
-(BOOL)conversationVIP;
-(BOOL)flagged;
-(BOOL)isSearchResultWithBogusRemoteId;
-(BOOL)junk;
-(BOOL)shouldSetSummary;
-(NSInteger)conversationHash;
-(NSInteger)libraryID;
-(NSUInteger)conversationFlags;
-(id)URL;
-(id)bestAlternativePart;
-(id)bestAlternativePart:(*BOOL)arg0 ;
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


@end


#endif