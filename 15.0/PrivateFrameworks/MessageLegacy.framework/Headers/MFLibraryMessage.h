// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFLIBRARYMESSAGE_H
#define MFLIBRARYMESSAGE_H

@class NSString, NSMutableDictionary, NSMutableSet, MFLock;


#import "MFMailMessage.h"

@interface MFLibraryMessage : MFMailMessage {
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    NSUInteger _uniqueRemoteId;
    NSUInteger _size;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
    NSUInteger _conversationFlags;
    NSMutableDictionary *_metadata;
    NSMutableSet *_metadataChangedKeys;
    MFLock *_metadataLock;
}




+(id)messageWithLibraryID:(unsigned int)arg0 ;
-(BOOL)hasTemporaryUid;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLibraryMessage;
-(BOOL)isMessageContentsLocallyAvailable;
-(BOOL)isPartial;
-(NSInteger)compareByUidWithMessage:(id)arg0 ;
-(NSUInteger)conversationFlags;
-(NSUInteger)hash;
-(NSUInteger)messageSize;
-(NSUInteger)uniqueRemoteId;
-(id)_attachmentStorageLocation;
-(id)_privacySafeDescription;
-(id)account;
-(id)attachmentStorageLocation;
-(id)copyMessageInfo;
-(id)dataConsumerForMimePart:(id)arg0 ;
-(id)dataPathForMimePart:(id)arg0 ;
-(id)initWithLibraryID:(unsigned int)arg0 ;
-(id)library;
-(id)mailbox;
-(id)mailboxName;
-(id)messageID;
-(id)messageStore;
-(id)metadataValueOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)originalMailboxURL;
-(id)path;
-(id)persistentID;
-(id)preferredEmailAddressToReplyWith;
-(id)remoteID;
-(unsigned int)libraryID;
-(unsigned int)mailboxID;
-(unsigned int)originalMailboxID;
-(unsigned int)uid;
-(void)_forceLoadOfMessageSummaryFromProtectedStore;
-(void)_initializeMetadata;
-(void)_updateUID;
-(void)commit;
-(void)dealloc;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg0 ;
-(void)markAsFlagged;
-(void)markAsForwarded;
-(void)markAsNotFlagged;
-(void)markAsNotViewed;
-(void)markAsReplied;
-(void)markAsViewed;
-(void)setConversationFlags:(NSUInteger)arg0 ;
-(void)setFlags:(NSUInteger)arg0 ;
-(void)setHasTemporaryUid:(BOOL)arg0 ;
-(void)setIsPartial:(BOOL)arg0 ;
-(void)setMailboxID:(unsigned int)arg0 ;
-(void)setMessageData:(id)arg0 isPartial:(BOOL)arg1 ;
-(void)setMessageFlags:(NSUInteger)arg0 ;
-(void)setMessageFlagsWithoutCommitting:(NSUInteger)arg0 ;
-(void)setMessageSize:(NSUInteger)arg0 ;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(void)setMutableInfoFromMessage:(id)arg0 ;
-(void)setOriginalMailboxID:(unsigned int)arg0 ;
-(void)setPreferredEncoding:(unsigned int)arg0 ;
-(void)setRemoteID:(char *)arg0 flags:(NSUInteger)arg1 size:(unsigned int)arg2 mailboxID:(unsigned int)arg3 originalMailboxID:(unsigned int)arg4 ;
-(void)setRemoteID:(id)arg0 ;
-(void)setSummary:(id)arg0 ;
-(void)setUid:(unsigned int)arg0 ;
-(void)setUniqueRemoteId:(NSUInteger)arg0 ;


@end


#endif