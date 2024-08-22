// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMGROUPEDSENDER_H
#define EMGROUPEDSENDER_H

@class NSURL, NSArray, NSDate, NSString, EFFuture, ECEmailAddress, NSIndexSet, ECMessageFlags, ECSubject;
@protocol EMMessageListItem, NSSecureCoding, NSCopying, EMCollectionItemID;


#import "EMRepositoryObject.h"
#import "EMObjectID.h"
#import "EMFollowUp.h"
#import "EMGroupedSenderObjectID.h"
#import "EMMessage.h"
#import "EMReadLater.h"

@interface EMGroupedSender : EMRepositoryObject <EMMessageListItem, NSSecureCoding, NSCopying>

 {
    NSUInteger _isEditable;
}


@property (readonly, nonatomic) NSURL *brandIndicatorLocation;
@property (readonly, copy) NSArray *ccList;
@property (readonly) NSInteger conversationID;
@property (readonly) NSInteger conversationNotificationLevel;
@property (readonly) NSUInteger count;
@property (readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *displayDate;
@property (readonly) EFFuture *displayMessage;
@property (readonly) NSObject<EMCollectionItemID> *displayMessageItemID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (retain, nonatomic) ECEmailAddress *emailAddress; // ivar: _emailAddress
@property (readonly, copy) NSIndexSet *flagColors;
@property (readonly) ECMessageFlags *flags;
@property (readonly) EMFollowUp *followUp;
@property (readonly, copy, nonatomic) EMGroupedSenderObjectID *groupedSenderObjectID;
@property (readonly) BOOL hasAttachments;
@property (readonly) BOOL hasUnflagged;
@property (readonly) BOOL hasUnscreenedSender;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isBlocked;
@property (readonly) BOOL isCCMe; // ivar: _isCCMe
@property (readonly) BOOL isEditable;
@property (readonly) BOOL isToMe; // ivar: _isToMe
@property (readonly) BOOL isVIP;
@property (readonly, nonatomic) NSObject<EMCollectionItemID> *itemID;
@property (readonly, copy) NSArray *mailboxObjectIDs;
@property (readonly, copy) NSArray *mailboxes;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly, copy, nonatomic) NSArray *messages; // ivar: _messages
@property (readonly, nonatomic) EMMessage *newestMessage;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly) EMReadLater *readLater;
@property (readonly) NSDate *sendLaterDate;
@property (readonly) NSInteger senderBucket;
@property (readonly, copy) NSArray *senderList;
@property (readonly) BOOL shouldArchiveByDefault;
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) ECSubject *subject;
@property (readonly, copy) NSString *summary;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsArchiving;
@property (readonly, copy) NSArray *toList;
@property (readonly) NSInteger unsubscribeType;


+(BOOL)supportsSecureCoding;
-(id)addMessages:(id)arg0 ;
-(id)changeKeyPaths:(id)arg0 forMessages:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 emailAddress:(id)arg1 messages:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)initWithSimpleAddress:(id)arg0 messages:(id)arg1 originatingQuery:(id)arg2 ;
-(id)removeMessages:(id)arg0 isGroupEmpty:(*BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif