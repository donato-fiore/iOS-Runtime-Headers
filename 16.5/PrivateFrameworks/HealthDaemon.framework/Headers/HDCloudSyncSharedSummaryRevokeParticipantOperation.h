// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYREVOKEPARTICIPANTOPERATION_H
#define HDCLOUDSYNCSHAREDSUMMARYREVOKEPARTICIPANTOPERATION_H



#import "HDCloudSyncOperation.h"
#import "HDCodableSummarySharingEntry.h"

@interface HDCloudSyncSharedSummaryRevokeParticipantOperation : HDCloudSyncOperation {
    HDCodableSummarySharingEntry *_codableEntry;
}




-(id)_deleteZonesOperationForParticipant:(id)arg0 error:(*id)arg1 ;
-(id)_updatedParticipantRecordInZone:(id)arg0 entry:(id)arg1 error:(*id)arg2 ;
-(id)initWithConfiguration:(id)arg0 codableEntry:(id)arg1 ;
-(void)main;


@end


#endif