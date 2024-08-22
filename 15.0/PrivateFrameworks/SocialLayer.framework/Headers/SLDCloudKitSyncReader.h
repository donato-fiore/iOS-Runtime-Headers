// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLDCLOUDKITSYNCREADER_H
#define SLDCLOUDKITSYNCREADER_H



#import "SLDCloudKitSyncBase.h"

@interface SLDCloudKitSyncReader : SLDCloudKitSyncBase {
    BOOL _garbageCollectScheduled;
    id *_changeCallback;
    BOOL _changeCallbackScheduled;
}




+(id)sharedInstance;
-(BOOL)_validateRecordIDString:(id)arg0 ;
-(BOOL)syncEngine:(id)arg0 shouldFetchChangesForZoneID:(id)arg1 ;
-(id)_fetchAttributionInternal:(id)arg0 ;
-(id)_syncDirectory;
-(id)_syncDirectoryForWriter:(id)arg0 ;
-(id)apps;
-(id)fetchAttribution:(id)arg0 ;
-(id)getHighlightsForApplicationIdentifier:(id)arg0 ;
-(id)getHighlightsInternalForApplicationIdentifier:(id)arg0 ;
-(id)getSyncableHighlightsForApplicationIdentifier:(id)arg0 ;
-(id)recordForDevice:(id)arg0 fileName:(id)arg1 ;
-(id)syncEngine:(id)arg0 recordToSaveForRecordID:(id)arg1 ;
-(void)accountStatusChanged;
-(void)addApplicationIdentifier:(id)arg0 ;
-(void)addApplicationIdentifierInternal:(id)arg0 ;
-(void)deleteFromDevice:(id)arg0 fileName:(id)arg1 overrideRetained:(BOOL)arg2 ;
-(void)garbageCollect;
-(void)garbageCollectNow;
-(void)initializeState;
-(void)invalidateApps;
-(void)invalidateAppsInternal;
-(void)notifyChangeCallback;
-(void)reset;
-(void)setChangeCallback:(id)arg0 ;
-(void)syncEngine:(id)arg0 didDeleteRecordWithID:(id)arg1 ;
-(void)syncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecordZone:(id)arg1 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToFetchChangesForRecordZoneID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecord:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecordZone:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 recordType:(id)arg2 ;
-(void)updateServerAppsIfNecessary;


@end


#endif