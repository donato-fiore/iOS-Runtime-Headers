// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILMESSAGE_H
#define MFMAILMESSAGE_H

@class MFMessage, NSURL, NSString;
@protocol MFBaseMessage, EFPubliclyDescribable;


#import "MFMessageInfo.h"
#import "MFMailboxUid.h"

@interface MFMailMessage : MFMessage <MFBaseMessage, EFPubliclyDescribable>

 {
    NSUInteger _messageFlags;
    NSUInteger _modSequenceNumber;
    MFMessageInfo *_info;
    NSURL *_globalMessageURL;
}


@property (readonly, nonatomic) NSInteger conversationHash;
@property (readonly, nonatomic) unsigned int dateReceivedInterval;
@property (readonly, nonatomic) unsigned int dateSentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) BOOL flagged;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (readonly, nonatomic) unsigned int libraryID;
@property (readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (readonly, nonatomic) unsigned int mailboxID;
@property (nonatomic) NSUInteger messageFlags;
@property (readonly, nonatomic) NSInteger messageIDHash;
@property NSUInteger modSequenceNumber;
@property (readonly, nonatomic) BOOL read;
@property (readonly, nonatomic) BOOL senderVIP;
@property (nonatomic) BOOL shouldUseMailDrop; // ivar: _shouldUseMailDrop
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int uid;


+(Class)dataMessageStoreToUse;
+(id)externalDataTypeIdentifiers;
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
-(NSUInteger)numberOfAttachments;
-(id)URL;
-(id)_privacySafeDescription;
-(id)account;
-(id)bestAlternativePart;
-(id)bestAlternativePart:(*BOOL)arg0 ;
-(id)copyMessageInfo;
-(id)externalConversationID;
-(id)from;
-(id)globalMessageURL;
-(id)listUnsubscribe;
-(id)loadMeetingData;
-(id)loadMeetingExternalID;
-(id)loadMeetingMetadata;
-(id)mailMessageStore;
-(id)messageStore;
-(id)originalMailboxURL;
-(id)remoteMailboxURL;
-(int)priority;
-(void)dealloc;
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