// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIEVENTNOTIFICATIONREPRESENTATION_H
#define EKUIEVENTNOTIFICATIONREPRESENTATION_H

@class NSDate, NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "EKUITextAndHeaderItem.h"

@interface EKUIEventNotificationRepresentation : NSObject

@property (nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSString *externalURLString; // ivar: _externalURLString
@property (retain, nonatomic) NSString *notes; // ivar: _notes
@property (readonly, nonatomic) NSDictionary *organizerContactDictionary; // ivar: _organizerContactDictionary
@property (retain, nonatomic) NSArray *potentialConflictDates; // ivar: _potentialConflictDates
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (retain, nonatomic) EKUITextAndHeaderItem *subtitleItem; // ivar: _subtitleItem
@property (retain, nonatomic) NSArray *supplementaryItems; // ivar: _supplementaryItems
@property (retain, nonatomic) EKUITextAndHeaderItem *titleItem; // ivar: _titleItem
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSDictionary *userActivityUserInfo; // ivar: _userActivityUserInfo


+(BOOL)_invitationNotificationHasResourceChanges:(id)arg0 changesString:(*id)arg1 ;
+(id)_fromLocalizedString;
+(id)_whenLocalizedString;
+(id)_whereLocalizedString;
+(id)defaultEventNotificationRepresentationWithTitle:(id)arg0 message:(id)arg1 notes:(id)arg2 ;
+(id)invitationNotificationRepresentationWithNotification:(id)arg0 event:(id)arg1 date:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 ;
+(id)previewForNotes:(id)arg0 ;
+(id)resourceChangeNotificationWithNotification:(id)arg0 message:(id)arg1 date:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 ;
+(id)responseNotificationWithTitle:(id)arg0 message:(id)arg1 ;
+(id)timeToLeaveNotificationRepresentationWithHypothesisMessage:(id)arg0 event:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3 ;
+(id)upcomingEventNotificationRepresentationWithEvent:(id)arg0 date:(id)arg1 displayTimeZone:(id)arg2 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(void)_setOwnerForContactDictionary:(id)arg0 ;
-(void)setOrganizerForContactDictionary:(id)arg0 ;
-(void)updateUpcomingEventNotificationWithHypothesisMessage:(id)arg0 ;


@end


#endif