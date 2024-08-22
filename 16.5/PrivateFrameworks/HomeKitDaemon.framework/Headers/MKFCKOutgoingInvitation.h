// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKOUTGOINGINVITATION_H
#define MKFCKOUTGOINGINVITATION_H

@class NSString, NSUUID, NSDate, CKDeviceToDeviceShareInvitationToken;


#import "MKFCKHomeObject.h"
#import "MKFCKHome.h"
#import "MKFCKUser.h"

@interface MKFCKOutgoingInvitation : MKFCKHomeObject

@property (copy, nonatomic) NSString *accessCode;
@property (nonatomic) NSInteger announceAccessLevel;
@property (nonatomic) NSInteger cameraAccessLevel;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *flags;
@property (retain, nonatomic) MKFCKHome *home;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (nonatomic) NSInteger invitationState;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) MKFCKUser *pendingUser;
@property (nonatomic) NSInteger privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif