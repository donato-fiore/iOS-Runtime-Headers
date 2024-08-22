// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCKDATABASE_H
#define TCKDATABASE_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface TCKDatabase : NSObject

@property (retain, nonatomic) NSMutableArray *tDeletedRecordIDs; // ivar: _tDeletedRecordIDs
@property (retain, nonatomic) NSMutableArray *tDeletedZoneIDs; // ivar: _tDeletedZoneIDs
@property (copy, nonatomic) id *tFetchDatabaseChangesHandler; // ivar: _tFetchDatabaseChangesHandler
@property (copy, nonatomic) id *tFetchRecordZoneChangesOperationHandler; // ivar: _tFetchRecordZoneChangesOperationHandler
@property (copy, nonatomic) id *tFetchRecordsHandler; // ivar: _tFetchRecordsHandler
@property (copy, nonatomic) id *tFetchZoneChangesHandler; // ivar: _tFetchZoneChangesHandler
@property (copy, nonatomic) id *tFetchZonesHandler; // ivar: _tFetchZonesHandler
@property (retain, nonatomic) NSMutableArray *tFetchedChangedRecordZoneNames; // ivar: _tFetchedChangedRecordZoneNames
@property (retain, nonatomic) NSMutableArray *tFetchedRecords; // ivar: _tFetchedRecords
@property (copy, nonatomic) id *tModifyRecordsHandler; // ivar: _tModifyRecordsHandler
@property (copy, nonatomic) id *tModifyRecordsOperationHandler; // ivar: _tModifyRecordsOperationHandler
@property (copy, nonatomic) id *tModifyZonesHandler; // ivar: _tModifyZonesHandler
@property (retain, nonatomic) NSMutableArray *tQueriedRecordTypes; // ivar: _tQueriedRecordTypes
@property (retain, nonatomic) NSMutableArray *tQueriedRecordZonesNames; // ivar: _tQueriedRecordZonesNames
@property (retain, nonatomic) NSMutableArray *tQueriedRecords; // ivar: _tQueriedRecords
@property (copy, nonatomic) id *tQueryHandler; // ivar: _tQueryHandler
@property (retain, nonatomic) NSMutableSet *tSavedRecordIDs; // ivar: _tSavedRecordIDs
@property (retain, nonatomic) NSMutableArray *tSavedRecords; // ivar: _tSavedRecords
@property (retain, nonatomic) NSMutableArray *tSavedSubscriptions; // ivar: _tSavedSubscriptions
@property (retain, nonatomic) NSMutableArray *tSavedZones; // ivar: _tSavedZones


+(id)tRecordsForQuery:(id)arg0 zoneID:(id)arg1 ;
-(void)addOperation:(id)arg0 ;
-(void)fetchRecordWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)performQuery:(id)arg0 inZoneWithID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif