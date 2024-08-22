// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMTHREAD_H
#define EMTHREAD_H

@class NSArray, NSDate, NSString, EFFuture, NSIndexSet, ECMessageFlags, EFQuery, ECSubject;
@protocol EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem, EMMailboxTypeResolver, EMCollectionItemID;


#import "EMCollection.h"
#import "EMMailboxScope.h"
#import "EMObjectID.h"
#import "EMThreadObjectID.h"
#import "EMMessageRepository.h"

@interface EMThread : EMCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem>

 {
    NSUInteger _isEditable;
    EMMailboxScope *_mailboxScope;
    id<EMMailboxTypeResolver> *_mailboxTypeResolver;
    NSArray *_mailboxes;
    os_unfair_lock_s _mailboxScopeLock;
    os_unfair_lock_s _mailboxTypeResolverLock;
    os_unfair_lock_s _mailboxesLock;
}


@property NSInteger _internalID;
@property (copy) NSArray *ccList; // ivar: _ccList
@property NSInteger conversationID;
@property NSInteger conversationNotificationLevel; // ivar: _conversationNotificationLevel
@property NSUInteger count; // ivar: _count
@property (retain) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly, copy) NSString *description;
@property (readonly) EFFuture *displayMessage;
@property (retain) NSObject<EMCollectionItemID> *displayMessageItemID; // ivar: _displayMessageItemID
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (copy) NSIndexSet *flagColors; // ivar: _flagColors
@property (retain) ECMessageFlags *flags; // ivar: _flags
@property BOOL hasAttachments; // ivar: _hasAttachments
@property BOOL hasUnflagged; // ivar: _hasUnflagged
@property (readonly) NSUInteger hash;
@property BOOL isBlocked; // ivar: _isBocked
@property BOOL isCCMe; // ivar: _isCCMe
@property (readonly) BOOL isEditable;
@property BOOL isToMe; // ivar: _isToMe
@property BOOL isVIP; // ivar: _isVIP
@property (readonly, nonatomic) NSObject<EMCollectionItemID> *itemID;
@property (copy) NSArray *mailboxObjectIDs; // ivar: _mailboxObjectIDs
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (retain) NSObject<EMMailboxTypeResolver> *mailboxTypeResolver;
@property (copy) NSArray *mailboxes;
@property (readonly, copy, nonatomic) EMThreadObjectID *objectID;
@property (readonly, nonatomic) EFQuery *originatingQuery; // ivar: _originatingQuery
@property (readonly, nonatomic) EMMessageRepository *repository;
@property (copy) NSArray *senderList; // ivar: _senderList
@property (readonly) BOOL shouldArchiveByDefault;
@property (retain) ECSubject *subject; // ivar: _subject
@property (copy) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (readonly) BOOL supportsArchiving;
@property (copy) NSArray *toList; // ivar: _toList


+(BOOL)supportsSecureCoding;
+(id)log;
-(BOOL)objectIDBelongsToCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 originatingQuery:(id)arg1 builder:(id)arg2 ;
-(id)itemIDForObjectID:(id)arg0 ;
-(id)objectIDForItemID:(id)arg0 ;
-(id)query;
-(void)_commonInitWithOriginatingQuery:(id)arg0 builder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg0 ;


@end


#endif