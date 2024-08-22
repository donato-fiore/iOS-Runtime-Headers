// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHINGESTSHAREPARTICIPANTCONTAINER_H
#define PGGRAPHINGESTSHAREPARTICIPANTCONTAINER_H

@class NSDate, NSString, CLSPersonIdentity, NSDictionary, PHShareParticipant;
@protocol PGGraphIngestPerson;

#import <Foundation/Foundation.h>


@interface PGGraphIngestShareParticipantContainer : NSObject <PGGraphIngestPerson>



@property (readonly, nonatomic) NSUInteger ageCategory;
@property (readonly, nonatomic) NSDate *anniversaryDate;
@property (readonly, nonatomic) NSDate *birthdayDate;
@property (readonly, nonatomic) NSString *contactID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, nonatomic) BOOL isUserCreated;
@property (retain, nonatomic) CLSPersonIdentity *linkedPersonIdentity; // ivar: _linkedPersonIdentity
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSDictionary *locationsByAddressTypes;
@property BOOL personIdentityFound; // ivar: _personIdentityFound
@property (readonly, nonatomic) NSDate *potentialBirthdayDate;
@property (readonly, nonatomic) NSUInteger relationship;
@property (readonly, nonatomic) NSUInteger sex;
@property (retain, nonatomic) PHShareParticipant *shareParticipant; // ivar: _shareParticipant
@property (readonly, nonatomic) NSString *shareParticipantLocalIdentifier;
@property (readonly) Class superclass;


-(id)initWithShareParticipant:(id)arg0 library:(id)arg1 ;


@end


#endif