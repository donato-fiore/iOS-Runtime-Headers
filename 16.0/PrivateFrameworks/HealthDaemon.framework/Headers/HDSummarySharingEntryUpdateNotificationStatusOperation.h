// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSUMMARYSHARINGENTRYUPDATENOTIFICATIONSTATUSOPERATION_H
#define HDSUMMARYSHARINGENTRYUPDATENOTIFICATIONSTATUSOPERATION_H

@class NSDate, NSUUID, HKSummarySharingEntry;


#import "HDJournalableOperation.h"

@interface HDSummarySharingEntryUpdateNotificationStatusOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSDate *dateModified; // ivar: _dateModified
@property (readonly, copy, nonatomic) NSUUID *invitationUUID; // ivar: _invitationUUID
@property (readonly, nonatomic) NSInteger notificationStatus; // ivar: _notificationStatus
@property (readonly, nonatomic) HKSummarySharingEntry *sharingEntry; // ivar: _sharingEntry


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitationUUID:(id)arg0 notificationStatus:(NSInteger)arg1 dateModified:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif