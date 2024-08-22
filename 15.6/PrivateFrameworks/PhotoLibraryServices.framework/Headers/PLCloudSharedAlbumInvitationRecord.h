// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDSHAREDALBUMINVITATIONRECORD_H
#define PLCLOUDSHAREDALBUMINVITATIONRECORD_H

@class NSString, NSNumber, NSArray, NSDate;


#import "PLManagedObject.h"
#import "PLCloudSharedAlbum.h"

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (retain, nonatomic) PLCloudSharedAlbum *album;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSNumber *invitationState;
@property (retain, nonatomic) NSNumber *invitationStateLocal;
@property (retain, nonatomic) NSNumber *inviteeEmailKey;
@property (readonly, weak, nonatomic) NSArray *inviteeEmails;
@property (retain, nonatomic) NSString *inviteeFirstName;
@property (retain, nonatomic) NSString *inviteeFullName;
@property (retain, nonatomic) NSString *inviteeHashedPersonID;
@property (retain, nonatomic) NSString *inviteeLastName;
@property (readonly, weak, nonatomic) NSArray *inviteePhones;
@property (retain, nonatomic) NSDate *inviteeSubscriptionDate;
@property (nonatomic) BOOL isMine;


+(id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg0 inLibrary:(id)arg1 ;
+(id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg0 inLibrary:(id)arg1 ;
+(id)entityName;
+(id)insertNewInvitationRecordIntoAlbum:(id)arg0 withFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emails:(id)arg4 phones:(id)arg5 inLibrary:(id)arg6 ;
-(id)init;
-(id)inviteeDisplayNameIncludingEmail:(BOOL)arg0 ;
-(void)awakeFromInsert;
-(void)delete;
-(void)prepareForDeletion;
-(void)willSave;


@end


#endif