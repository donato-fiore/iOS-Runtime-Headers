// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC23MAPSSYNCHISTORYANALYZER_H
#define _TTC8MAPSSYNC23MAPSSYNCHISTORYANALYZER_H

@class SwiftObject;



@interface _TtC8MapsSync23MapsSyncHistoryAnalyzer : SwiftObject {
    ? _context;
    ? _contextsToMerge;
    ? _historyStartDate;
    ? _historyToken;
    ? _notificationContextDidSaveToken;
    ? _callbackData;
    ? kMaxHistoryDatabaseSizeMegabytes;
    ? kHistoryChangesPurgeChunk;
    ? kMaxHistoryChangesCount;
    ? kMaxHistoryDatabasePercentage;
    ? kHistoryExpirationDays;
    ? kHistoryExpirationSeconds;
    ? kMaxHistoryDatabaseSizeBytes;
}




-(void)notificationPersistentStoreRemoteChange:(id)arg0 ;


@end


#endif