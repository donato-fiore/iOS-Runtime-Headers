// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTPARTICIPANT_H
#define EKPERSISTENTPARTICIPANT_H



#import "EKPersistentObject.h"

@interface EKPersistentParticipant : EKPersistentObject



+(id)defaultPropertiesToLoad;
+(id)propertyKeyForUniqueIdentifier;
-(BOOL)scheduleForceSend;
-(id)URLString;
-(id)UUID;
-(id)comment;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayName;
-(id)displayNameRaw;
-(id)emailAddress;
-(id)firstName;
-(id)inviterNameString;
-(id)lastName;
-(id)owner;
-(id)phoneNumber;
-(id)proposedStartDate;
-(id)url;
-(int)proposedStartDateStatus;
-(int)scheduleStatus;
-(void)setComment:(id)arg0 ;
-(void)setDisplayNameRaw:(id)arg0 ;
-(void)setEmailAddress:(id)arg0 ;
-(void)setFirstName:(id)arg0 ;
-(void)setInviterNameString:(id)arg0 ;
-(void)setLastName:(id)arg0 ;
-(void)setPhoneNumber:(id)arg0 ;
-(void)setProposedStartDate:(id)arg0 ;
-(void)setProposedStartDateStatus:(int)arg0 ;
-(void)setScheduleForceSend:(BOOL)arg0 ;
-(void)setScheduleStatus:(int)arg0 ;
-(void)setURLString:(id)arg0 ;
-(void)setUUID:(id)arg0 ;


@end


#endif