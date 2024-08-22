// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPARTICIPANT_H
#define EKPARTICIPANT_H

@class NSURL, NSString, NSPredicate;
@protocol EKIdentityProtocol, NSCopying;


#import "EKObject.h"
#import "EKCalendarItem.h"

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *comment;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly, nonatomic, getter=isCurrentUser) BOOL currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *firstName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *inviterNameString;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL needsResponse;
@property (readonly, nonatomic) EKCalendarItem *owner; // ivar: _owner
@property (readonly, nonatomic) NSInteger participantRole;
@property (readonly, nonatomic) NSInteger participantStatus;
@property (readonly, nonatomic) NSInteger participantType;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL scheduleForceSend;
@property (readonly, nonatomic) int scheduleStatus;
@property (readonly) Class superclass;


+(BOOL)canonicalizedEqualityTestValue1:(id)arg0 value2:(id)arg1 key:(id)arg2 object1:(id)arg3 object2:(id)arg4 ;
+(BOOL)doesParticipantURLString:(id)arg0 email:(id)arg1 andPhoneNumber:(id)arg2 matchParticipantURLString:(id)arg3 email:(id)arg4 andPhoneNumber:(id)arg5 ;
+(BOOL)needsResponseForParticipantStatus:(NSInteger)arg0 ;
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
+(id)participantWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 url:(id)arg3 ;
+(id)participantWithName:(id)arg0 url:(id)arg1 ;
-(*void)ABRecordWithAddressBook:(*void)arg0 ;
-(BOOL)isEqualToParticipant:(id)arg0 ;
-(BOOL)isLocationRoom;
-(id)displayName;
-(id)displayNameRaw;
-(id)displayString;
-(id)existingContact;
-(id)generateSemanticIdentifier;
-(id)initWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 url:(id)arg3 ;
-(id)newContact;
-(id)url;
-(void)setDisplayName:(id)arg0 ;
-(void)setDisplayNameRaw:(id)arg0 ;


@end


#endif