// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLDCLOUDKITSYNCWRITER_H
#define SLDCLOUDKITSYNCWRITER_H

@class NSMutableDictionary;
@protocol OS_dispatch_source;


#import "SLDCloudKitSyncBase.h"

@interface SLDCloudKitSyncWriter : SLDCloudKitSyncBase {
    BOOL _freshHighlightsGenerated;
    BOOL _appChangesCheckScheduled;
    NSMutableDictionary *_recordsToUpload;
    NSObject<OS_dispatch_source> *_invalidateHighlightsCoalescingTimer;
}




+(id)sharedInstance;
-(BOOL)_didHandleSyncError:(id)arg0 retryBlock:(id)arg1 ;
-(BOOL)syncEngine:(id)arg0 shouldFetchChangesForZoneID:(id)arg1 ;
-(NSUInteger)_batchNumberOfRecordIDString:(id)arg0 ;
-(NSUInteger)versionOfSavedIDString:(id)arg0 ;
-(id)_idForRecordIDString:(id)arg0 ;
-(id)_recordIDsFromStrings:(id)arg0 ;
-(id)recordIDStringOfSavedIDString:(id)arg0 ;
-(id)recordZoneID;
-(id)syncEngine:(id)arg0 recordToSaveForRecordID:(id)arg1 ;
-(void)_savedRecord:(id)arg0 ;
-(void)accountStatusChanged;
-(void)checkForAppChanges;
-(void)checkForAppChangesNow;
-(void)dealloc;
-(void)fetchAndProcessFreshHighlights;
-(void)handleMetadataSizeBecomingEligibleForSync;
-(void)initializeState;
-(void)invalidateHighlights;
-(void)invalidateHighlightsInternal;
-(void)nextTask;
-(void)reset;
-(void)syncEngine:(id)arg0 didDeleteRecordWithID:(id)arg1 ;
-(void)syncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecordZone:(id)arg1 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToFetchChangesForRecordZoneID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecord:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecordZone:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 recordType:(id)arg2 ;


@end


#endif