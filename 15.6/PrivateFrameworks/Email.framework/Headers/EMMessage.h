// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMMESSAGE_H
#define EMMESSAGE_H

@class NSArray, NSString, NSDate, EFFuture, NSUUID, NSIndexSet, ECMessageFlags, ECSubject;
@protocol EFLoggable, EMMessageBuilder, EMExtendedContentItem, EMMutableMessageListItem, EMMessageListItem, EMContentItem, EMCollectionItemID, ECEmailAddressConvertible;


#import "EMRepositoryObject.h"
#import "EMObjectID.h"
#import "EMMailDropMetadata.h"
#import "EMMessageObjectID.h"
#import "EMMessageRepository.h"

@interface EMMessage : EMRepositoryObject <EFLoggable, EMMessageBuilder, EMExtendedContentItem, EMMutableMessageListItem, EMMessageListItem, EMContentItem>

 {
    NSUInteger _isEditable;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    os_unfair_lock_s _mailboxesLock;
}


@property (copy, nonatomic) NSString *UTType;
@property NSInteger _internalID; // ivar: __internalID
@property (copy, nonatomic) NSArray *availableRepresentations;
@property (copy, nonatomic) NSArray *bccList; // ivar: _bccList
@property (copy) NSArray *ccList; // ivar: _ccList
@property (copy, nonatomic) NSString *contentID;
@property NSInteger conversationID; // ivar: _conversationID
@property NSInteger conversationNotificationLevel; // ivar: _conversationNotificationLevel
@property NSUInteger count;
@property (nonatomic) NSInteger dataTransferByteCount; // ivar: _dataTransferByteCount
@property (retain) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly, copy) NSString *description;
@property (readonly) EFFuture *displayMessage;
@property (retain) NSObject<EMCollectionItemID> *displayMessageItemID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSUUID *documentID; // ivar: _documentID
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) int exchangeEventUID; // ivar: _exchangeEventUID
@property (copy) NSIndexSet *flagColors;
@property (retain) ECMessageFlags *flags; // ivar: _flags
@property BOOL hasAttachments; // ivar: _hasAttachments
@property BOOL hasUnflagged;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAvailableLocally; // ivar: _isAvailableLocally
@property BOOL isBlocked; // ivar: _isBlocked
@property BOOL isCCMe; // ivar: _isCCMe
@property (readonly) BOOL isEditable;
@property BOOL isToMe; // ivar: _isToMe
@property BOOL isVIP; // ivar: _isVIP
@property (readonly, nonatomic) NSObject<EMCollectionItemID> *itemID;
@property (copy, nonatomic) id *loaderBlock; // ivar: _loaderBlock
@property (copy, nonatomic) EMMailDropMetadata *mailDropMetadata; // ivar: _mailDropMetadata
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly, copy, nonatomic) EMMessageObjectID *objectID;
@property (readonly, nonatomic) EMMessageRepository *repository;
@property (retain, nonatomic) NSObject<ECEmailAddressConvertible> *senderAddress; // ivar: _senderAddress
@property (copy) NSArray *senderList;
@property (readonly) BOOL shouldArchiveByDefault;
@property (nonatomic) NSInteger storageByteCount; // ivar: _storageByteCount
@property (retain) ECSubject *subject; // ivar: _subject
@property (copy) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (readonly) BOOL supportsArchiving;
@property (copy) NSArray *toList; // ivar: _toList


+(BOOL)supportsSecureCoding;
+(id)_predicateForMessagesWithObjectIDConstantValue:(id)arg0 operatorType:(NSUInteger)arg1 ;
+(id)combinedFlagsForMessageListItemFlags:(id)arg0 forDisplay:(BOOL)arg1 ;
+(id)combinedFlagsForMessageListItems:(id)arg0 ;
+(id)combinedFlagsForMessageListItems:(id)arg0 forDisplay:(BOOL)arg1 ;
+(id)externalDataTypeIdentifiers;
+(id)log;
+(id)predicateForExcludingMessageWithObjectID:(id)arg0 ;
+(id)predicateForExcludingMessagesWithObjectIDs:(id)arg0 ;
+(id)predicateForMessageWithInternalID:(NSInteger)arg0 ;
+(id)predicateForMessageWithItemID:(id)arg0 mailboxPredicate:(id)arg1 mailboxTypeResolver:(id)arg2 ;
+(id)predicateForMessageWithObjectID:(id)arg0 ;
+(id)predicateForMessagesWithObjectIDs:(id)arg0 ;
-(BOOL)isInManagedAccountWithSourceMailboxScope:(id)arg0 ;
-(id)cachedMetadataOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 builder:(id)arg1 ;
-(id)requestRepresentationWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(id)requestRepresentationWithOptions:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)_commonInitWithBuilder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCachedMetadata:(id)arg0 forKey:(id)arg1 ;


@end


#endif