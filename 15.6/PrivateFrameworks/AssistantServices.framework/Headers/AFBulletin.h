// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFBULLETIN_H
#define AFBULLETIN_H

@class NSDictionary, NSArray, BBBulletin, NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AFBulletin : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *actionsByIdentifier; // ivar: _actionsByIdentifier
@property (retain, nonatomic) NSArray *actionsStore; // ivar: _actionsStore
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (nonatomic) NSInteger announcementType; // ivar: _announcementType
@property (nonatomic) BOOL availableOnLockScreen; // ivar: _availableOnLockScreen
@property (readonly, nonatomic) BBBulletin *bbBulletin; // ivar: _bbBulletin
@property (readonly, copy, nonatomic) NSString *bulletinID; // ivar: _bulletinID
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger feed; // ivar: _feed
@property (readonly, copy, nonatomic) NSArray *intentIDs; // ivar: _intentIDs
@property (readonly, copy, nonatomic) NSString *internalID; // ivar: _internalID
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *modalAlertContentMessage; // ivar: _modalAlertContentMessage
@property (readonly, nonatomic) BOOL previewRestricted; // ivar: _previewRestricted
@property (readonly, copy, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (nonatomic, getter=isRead) BOOL read; // ivar: _read
@property (readonly, copy, nonatomic) NSDate *recencyDate; // ivar: _recencyDate
@property (readonly, copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (readonly, copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (readonly, nonatomic) NSInteger sectionSubtype; // ivar: _sectionSubtype
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) BOOL supportsSpokenNotification; // ivar: _supportsSpokenNotification
@property (readonly, copy, nonatomic) NSString *threadID; // ivar: _threadID
@property (readonly, copy, nonatomic) NSString *timeZone; // ivar: _timeZone
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_createAssistantActionsForBulletin:(id)arg0 ;
+(id)internalIDForBBBulletinID:(id)arg0 ;
-(id)_displayNameForBulletin:(id)arg0 ;
-(id)actionForIdentifier:(id)arg0 ;
-(id)actions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBulletin:(id)arg0 ;
-(void)setBulletin:(id)arg0 forFeed:(NSUInteger)arg1 ;
-(void)setNotification:(id)arg0 fromSourceApp:(id)arg1 ;
-(void)wasRemovedFromFeed:(NSUInteger)arg0 ;


@end


#endif