// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGELISTITEMCHANGE_H
#define EMMESSAGELISTITEMCHANGE_H

@class NSArray, NSNumber, NSDate, NSString, ECMessageFlags;
@protocol EFPubliclyDescribable, NSSecureCoding, EMCollectionItemID, EMMessageListItemChangeFlagColors, EMMessageListItemChangeFollowUp, EMMessageListItemChangeReadLater, EMMessageListItemChangeSendLaterDate, EMMessageListItemChangeSubject, EMMessageListItemChangeSummary;

#import <Foundation/Foundation.h>


@interface EMMessageListItemChange : NSObject <EFPubliclyDescribable, NSSecureCoding>

 {
    NSArray *_mailboxObjectIDs;
    NSArray *_mailboxes;
}


@property (copy, nonatomic) NSArray *ccList; // ivar: _ccList
@property (retain, nonatomic) NSNumber *conversationID; // ivar: _conversationID
@property (retain, nonatomic) NSNumber *conversationNotificationLevel; // ivar: _conversationNotificationLevel
@property (retain, nonatomic) NSNumber *count; // ivar: _count
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (retain, nonatomic) NSObject<EMCollectionItemID> *displayMessageItemID; // ivar: _displayMessageItemID
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (copy, nonatomic) NSObject<EMMessageListItemChangeFlagColors> *flagColors; // ivar: _flagColors
@property (retain, nonatomic) ECMessageFlags *flags; // ivar: _flags
@property (retain, nonatomic) NSObject<EMMessageListItemChangeFollowUp> *followUp; // ivar: _followUp
@property (retain, nonatomic) NSNumber *hasAttachments; // ivar: _hasAttachments
@property (retain, nonatomic) NSNumber *hasUnflagged; // ivar: _hasUnflagged
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *isBlocked; // ivar: _isBlocked
@property BOOL isCCMe; // ivar: _isCCMe
@property BOOL isToMe; // ivar: _isToMe
@property (retain, nonatomic) NSNumber *isVIP; // ivar: _isVIP
@property (copy, nonatomic) NSArray *mailboxObjectIDs;
@property (copy, nonatomic) NSArray *mailboxes;
@property (retain, nonatomic) NSObject<EMMessageListItemChangeReadLater> *readLater; // ivar: _readLater
@property (retain, nonatomic) NSObject<EMMessageListItemChangeSendLaterDate> *sendLaterDate; // ivar: _sendLaterDate
@property (retain, nonatomic) NSNumber *senderBucket; // ivar: _senderBucket
@property (copy, nonatomic) NSArray *senderList; // ivar: _senderList
@property (retain, nonatomic) NSObject<EMMessageListItemChangeSubject> *subject; // ivar: _subject
@property (copy, nonatomic) NSObject<EMMessageListItemChangeSummary> *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *toList; // ivar: _toList
@property (retain, nonatomic) NSNumber *unsubscribeType; // ivar: _unsubscribeType


+(BOOL)supportsSecureCoding;
+(id)changeForKeyPaths:(id)arg0 ofItem:(id)arg1 ;
+(id)changeFrom:(id)arg0 to:(id)arg1 ;
+(id)changesForKeyPaths:(id)arg0 ofItems:(id)arg1 ;
-(BOOL)applyToMessageListItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_changeDescriptionsForInternal:(BOOL)arg0 useDebugDescriptions:(BOOL)arg1 ;
-(id)_descriptionForInternal:(BOOL)arg0 useDebugDescriptions:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addChange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif