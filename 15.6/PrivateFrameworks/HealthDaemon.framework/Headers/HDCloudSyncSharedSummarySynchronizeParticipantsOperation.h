// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYSYNCHRONIZEPARTICIPANTSOPERATION_H
#define HDCLOUDSYNCSHAREDSUMMARYSYNCHRONIZEPARTICIPANTSOPERATION_H

@class NSMutableSet, NSMutableArray;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncCachedZone.h"

@interface HDCloudSyncSharedSummarySynchronizeParticipantsOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone *_privateMetadataZone;
    NSMutableSet *_updatedParticipantRecordIDs;
    NSMutableArray *_updatedAutorizationRecords;
    NSMutableArray *_updatedLocalEntries;
}




-(BOOL)_createProfileIfNecessaryForParticipant:(id)arg0 error:(*id)arg1 ;
-(BOOL)_createProfileIfNecessaryForSharingEntry:(id)arg0 error:(*id)arg1 ;
-(BOOL)_createProfileWithUUID:(id)arg0 contactIdentifier:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ownerParticipant:(id)arg4 error:(*id)arg5 ;
-(BOOL)_deleteLocalProfileIfNecessaryForParticipant:(id)arg0 error:(*id)arg1 ;
-(BOOL)_deleteProfilesForInactiveParticipants:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mergeLocalAndCloudParticipant:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mergeLocalAndCloudParticipants:(id)arg0 error:(*id)arg1 ;
-(id)_authorizationRecordForParticipant:(id)arg0 error:(*id)arg1 ;
-(id)_filterEntries:(id)arg0 active:(BOOL)arg1 ;
-(void)main;


@end


#endif