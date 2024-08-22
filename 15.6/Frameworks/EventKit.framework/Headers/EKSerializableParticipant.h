// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKSERIALIZABLEPARTICIPANT_H
#define EKSERIALIZABLEPARTICIPANT_H

@class NSString, NSURL;


#import "EKSerializableObject.h"

@interface EKSerializableParticipant : EKSerializableObject

@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger participantRole; // ivar: _participantRole
@property (nonatomic) NSInteger participantStatus; // ivar: _participantStatus
@property (nonatomic) NSInteger participantType; // ivar: _participantType
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)classesForKey;
-(id)createAttendee:(*id)arg0 ;
-(id)initWithParticipant:(id)arg0 ;


@end


#endif