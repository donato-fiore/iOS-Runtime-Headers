// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKATTENDEE_H
#define EKATTENDEE_H

@class NSDate;


#import "EKParticipant.h"

@interface EKAttendee : EKParticipant

@property (nonatomic) BOOL commentChanged;
@property (readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
@property (nonatomic) NSInteger participantRole;
@property (nonatomic) NSInteger participantStatus;
@property (nonatomic) NSInteger participantType;
@property (nonatomic) NSInteger pendingStatus;
@property (nonatomic) BOOL proposedStartDateChanged;
@property (nonatomic) int proposedStartDateStatus;
@property (readonly, nonatomic) BOOL rsvpRequested;
@property (nonatomic) BOOL statusChanged;
@property (readonly, nonatomic) int statusRaw;


+(Class)frozenClass;
+(NSInteger)_ekParticipantStatusFromCalAttendeeStatus:(int)arg0 ;
+(id)attendeeWithEmailAddress:(id)arg0 name:(id)arg1 ;
+(id)attendeeWithName:(id)arg0 emailAddress:(id)arg1 ;
+(id)attendeeWithName:(id)arg0 emailAddress:(id)arg1 address:(id)arg2 ;
+(id)attendeeWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 url:(id)arg3 ;
+(id)attendeeWithName:(id)arg0 phoneNumber:(id)arg1 ;
+(id)attendeeWithName:(id)arg0 url:(id)arg1 ;
+(id)knownSingleValueKeysForComparison;
+(int)_calAttendeeStatusFromEKParticipantStatus:(NSInteger)arg0 ;
-(BOOL)_isParticipantStatusDirty;
-(BOOL)_valueForFlag:(unsigned int)arg0 ;
-(BOOL)hasProposedStartDate;
-(BOOL)isCurrentUser;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)owner;
-(id)proposedStartDate;
-(id)proposedStartDateForEvent:(id)arg0 ;
-(unsigned int)flags;
-(void)_setFlag:(unsigned int)arg0 value:(BOOL)arg1 ;
-(void)markAsForward;
-(void)setFlags:(unsigned int)arg0 ;
-(void)setProposedStartDate:(id)arg0 ;
-(void)setProposedStartDate:(id)arg0 forEvent:(id)arg1 ;


@end


#endif