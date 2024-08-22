// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKATTENDEECHANGE_H
#define EKATTENDEECHANGE_H

@class NSString;
@protocol EKOwnerIDProviding;


#import "EKParticipantChange.h"
#import "EKObjectID.h"

@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding>



@property (readonly, nonatomic) NSString *attendeeEmailAddress; // ivar: _attendeeEmailAddress
@property (readonly, nonatomic) BOOL attendeeRole; // ivar: _attendeeRole
@property (readonly, nonatomic) BOOL attendeeStatus; // ivar: _attendeeStatus
@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchAttendeeChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchAttendeeChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchAttendeeChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif