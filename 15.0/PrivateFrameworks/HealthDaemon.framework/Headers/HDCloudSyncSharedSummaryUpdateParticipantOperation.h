// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYUPDATEPARTICIPANTOPERATION_H
#define HDCLOUDSYNCSHAREDSUMMARYUPDATEPARTICIPANTOPERATION_H

@class NSArray;


#import "HDCloudSyncOperation.h"
#import "HDCodableSummarySharingEntry.h"

@interface HDCloudSyncSharedSummaryUpdateParticipantOperation : HDCloudSyncOperation {
    NSArray *_authorizationCategoriesToAdd;
    NSArray *_authorizationCategoriesToDelete;
}


@property (copy, nonatomic) HDCodableSummarySharingEntry *entry; // ivar: _entry


-(BOOL)_containsOnlyCategoriesToAddWithError:(*id)arg0 ;
-(id)_createOrUpdateAuthorizationRecordInZone:(id)arg0 relationshipRecord:(id)arg1 participantRecord:(id)arg2 error:(*id)arg3 ;
-(id)_createOrUpdateParticipantRecordInZone:(id)arg0 relationshipRecord:(id)arg1 entry:(id)arg2 error:(*id)arg3 ;
-(id)_lookupOrCreateRelationshipRecordInZone:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 codableEntry:(id)arg1 authorizationCategoriesToAdd:(id)arg2 authorizationCategoriesToDelete:(id)arg3 ;
-(void)main;


@end


#endif