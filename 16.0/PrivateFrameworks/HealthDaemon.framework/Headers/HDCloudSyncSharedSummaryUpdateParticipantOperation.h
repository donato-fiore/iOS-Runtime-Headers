// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYUPDATEPARTICIPANTOPERATION_H
#define HDCLOUDSYNCSHAREDSUMMARYUPDATEPARTICIPANTOPERATION_H

@class NSArray;


#import "HDCloudSyncOperation.h"
#import "HDCodableSummarySharingEntry.h"

@interface HDCloudSyncSharedSummaryUpdateParticipantOperation : HDCloudSyncOperation {
    NSArray *_authorizationIdentifiersToAdd;
    NSArray *_authorizationIdentifiersToDelete;
}


@property (copy, nonatomic) HDCodableSummarySharingEntry *entry; // ivar: _entry


-(BOOL)_containsOnlyCategoriesToAddWithError:(*id)arg0 ;
-(id)_createOrUpdateAuthorizationRecordInZone:(id)arg0 participantRecord:(id)arg1 error:(*id)arg2 ;
-(id)_createOrUpdateParticipantRecordInZone:(id)arg0 entry:(id)arg1 error:(*id)arg2 ;
-(id)initWithConfiguration:(id)arg0 codableEntry:(id)arg1 authorizationIdentifiersToAdd:(id)arg2 authorizationIdentifiersToDelete:(id)arg3 ;
-(void)main;


@end


#endif