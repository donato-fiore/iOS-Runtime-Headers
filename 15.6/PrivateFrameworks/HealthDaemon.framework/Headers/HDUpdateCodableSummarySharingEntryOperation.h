// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUPDATECODABLESUMMARYSHARINGENTRYOPERATION_H
#define HDUPDATECODABLESUMMARYSHARINGENTRYOPERATION_H

@class NSDate, NSUUID, CKShareParticipant, HKSummarySharingEntry;


#import "HDJournalableOperation.h"

@interface HDUpdateCodableSummarySharingEntryOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSDate *dateAccepted; // ivar: _dateAccepted
@property (readonly, copy, nonatomic) NSDate *dateModified; // ivar: _dateModified
@property (readonly, copy, nonatomic) NSUUID *invitationUUID; // ivar: _invitationUUID
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant; // ivar: _ownerParticipant
@property (readonly, nonatomic) HKSummarySharingEntry *sharingEntry; // ivar: _sharingEntry
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitationUUID:(id)arg0 status:(NSInteger)arg1 dateModified:(id)arg2 dateAccepted:(id)arg3 ownerParticipant:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif