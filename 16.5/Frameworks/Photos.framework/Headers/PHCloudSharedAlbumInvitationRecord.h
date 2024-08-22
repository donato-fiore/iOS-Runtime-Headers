// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCLOUDSHAREDALBUMINVITATIONRECORD_H
#define PHCLOUDSHAREDALBUMINVITATIONRECORD_H

@class NSString, NSArray;


#import "PHObject.h"

@interface PHCloudSharedAlbumInvitationRecord : PHObject

@property (retain, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (retain, nonatomic) NSString *cloudGUID; // ivar: _cloudGUID
@property (readonly, weak, nonatomic) NSString *inviteeEmail;
@property (readonly, weak, nonatomic) NSArray *inviteeEmails;
@property (readonly, nonatomic) NSString *inviteeFirstName; // ivar: _inviteeFirstName
@property (retain, nonatomic) NSString *inviteeHashedPersonID; // ivar: _inviteeHashedPersonID
@property (readonly, nonatomic) NSString *inviteeLastName; // ivar: _inviteeLastName
@property (readonly, weak, nonatomic) NSString *inviteePhone;
@property (readonly, weak, nonatomic) NSArray *inviteePhones;


+(id)entityKeyMap;
+(id)fetchAllInvitationRecordsWithOptions:(id)arg0 ;
+(id)fetchInvitationRecordsForSharedAlbum:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif