// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCPENDINGCHANGESSTREAM_H
#define BRCPENDINGCHANGESSTREAM_H

@class NSURL, NSError, CKServerChangeToken;

#import <Foundation/Foundation.h>

#import "BRCPQLConnection.h"
#import "BRCClientZone.h"

@interface BRCPendingChangesStream : NSObject {
    NSURL *_databaseURL;
    NSError *_error;
    BRCPQLConnection *_db;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
}




-(BOOL)enumerateRecordsOfType:(NSInteger)arg0 block:(id)arg1 ;
-(BOOL)saveEditedRecords:(id)arg0 deletedRecordIDs:(id)arg1 deletedShareIDs:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(NSInteger)arg4 syncStatus:(NSInteger)arg5 ;
-(NSInteger)_recordTypeFromRecordID:(id)arg0 isShare:(BOOL)arg1 isDelete:(BOOL)arg2 ;
-(id)initWithServerZone:(id)arg0 ;
-(id)saveError;
-(void)_createSchemaIfNecessary;
-(void)_dbBecameCorrupted;
-(void)_destroyDatabase;
-(void)_openDB;
-(void)dealloc;
-(void)destroyDatabase;
-(void)destroyDatabaseOnQueue:(BOOL)arg0 ;
-(void)fetchTokenState:(id)arg0 ;


@end


#endif