// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYSYNCHRONIZECLOUDSTATEOPERATION_H
#define HDCLOUDSYNCSHAREDSUMMARYSYNCHRONIZECLOUDSTATEOPERATION_H

@class NSArray, NSDictionary, NSMutableSet;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncCachedZone.h"

@interface HDCloudSyncSharedSummarySynchronizeCloudStateOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone *_privateMetadataZone;
    NSArray *_participantRecords;
    NSDictionary *_participantRecordsByUUID;
    NSMutableSet *_updatedParticipantRecordIDs;
    NSMutableSet *_sharesToDelete;
}




-(BOOL)_isActiveParticipant:(id)arg0 ;
-(BOOL)_updateOwnerParticipantForParticipantRecord:(id)arg0 zone:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updateShareForAllNonOwnerParticipantsInZone:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateCloudStateForParticipantRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateParticipantRecordCloudStateWithError:(*id)arg0 ;
-(id)_currentZoneStateForParticipant:(id)arg0 zone:(id)arg1 error:(*id)arg2 ;
-(id)_deleteInvalidZonesOperationWithError:(*id)arg0 ;
-(id)_removeInvalidSharesOperationWithError:(*id)arg0 ;
-(id)_zoneIdentifierForParticipant:(id)arg0 ;
-(id)_zonesForParticipant:(id)arg0 error:(*id)arg1 ;
-(void)main;


@end


#endif