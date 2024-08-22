// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHCLOUDINVITATION_H
#define PHCLOUDINVITATION_H

@class NSString, NSNumber, NSArray, NSDate;


#import "PHObject.h"

@interface PHCloudInvitation : PHObject

@property (readonly, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (readonly, nonatomic) NSString *cloudGUID; // ivar: _cloudGUID
@property (readonly, nonatomic) int invitationState; // ivar: _invitationState
@property (readonly, nonatomic) NSString *invitationStateDescription;
@property (readonly, nonatomic) int invitationStateLocal; // ivar: _invitationStateLocal
@property (readonly, nonatomic) NSNumber *inviteeEmailKey; // ivar: _inviteeEmailKey
@property (readonly, nonatomic) NSArray *inviteeEmails;
@property (readonly, nonatomic) NSString *inviteeFirstName; // ivar: _inviteeFirstName
@property (readonly, nonatomic) NSString *inviteeFullName; // ivar: _inviteeFullName
@property (readonly, nonatomic) NSString *inviteeHashedPersonID; // ivar: _inviteeHashedPersonID
@property (readonly, nonatomic) NSString *inviteeLastName; // ivar: _inviteeLastName
@property (readonly, nonatomic) NSArray *inviteePhones;
@property (readonly, nonatomic) NSDate *inviteeSubscriptionDate; // ivar: _inviteeSubscriptionDate
@property (readonly, nonatomic) BOOL isMine; // ivar: _isMine


+(id)fetchType;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
-(Class)changeRequestClass;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)inviteeDisplayNameIncludingEmail:(BOOL)arg0 ;
-(id)personInfoManager;


@end


#endif