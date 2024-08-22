// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTATTENDEE_H
#define EKPERSISTENTATTENDEE_H

@class NSDate;


#import "EKPersistentParticipant.h"

@interface EKPersistentAttendee : EKPersistentParticipant

@property (nonatomic) BOOL commentChanged;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic) NSInteger participantRole;
@property (nonatomic) NSInteger participantType;
@property (nonatomic) int pendingStatus;
@property (nonatomic) BOOL proposedStartDateChanged;
@property (nonatomic) BOOL statusChanged;
@property (nonatomic) int statusRaw;


+(Class)meltedClass;
+(id)attendeeWithEmailAddress:(id)arg0 name:(id)arg1 ;
+(id)attendeeWithName:(id)arg0 emailAddress:(id)arg1 address:(id)arg2 ;
+(id)defaultPropertiesToLoad;
+(id)propertiesToUnloadOnCommit;
+(id)relations;
-(BOOL)isCurrentUser;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAddress:(id)arg0 name:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg0 name:(id)arg1 ;
-(id)initWithName:(id)arg0 emailAddress:(id)arg1 address:(id)arg2 ;
-(int)entityType;
-(unsigned int)flags;
-(void)setFlags:(unsigned int)arg0 ;


@end


#endif