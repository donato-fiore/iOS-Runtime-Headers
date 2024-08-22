// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPRIVATEDATABASETESTCONTEXT_H
#define FCCKPRIVATEDATABASETESTCONTEXT_H

@class NSArray, NSDictionary, CKDatabase, CKRecord, CKRecordID, CKRecordZone, CKRecordZoneID;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabase.h"
#import "TCKDatabase.h"

@interface FCCKPrivateDatabaseTestContext : NSObject

@property (readonly, nonatomic) NSArray *allClientRecordIDs; // ivar: _allClientRecordIDs
@property (readonly, nonatomic) NSArray *allClientRecords; // ivar: _allClientRecords
@property (readonly, nonatomic) NSDictionary *allClientRecordsByID; // ivar: _allClientRecordsByID
@property (readonly, nonatomic) NSArray *allClientZoneIDs; // ivar: _allClientZoneIDs
@property (readonly, nonatomic) NSArray *allClientZones; // ivar: _allClientZones
@property (readonly, nonatomic) NSDictionary *allClientZonesByID; // ivar: _allClientZonesByID
@property (readonly, nonatomic) NSArray *allDefaultZoneClientRecordIDs; // ivar: _allDefaultZoneClientRecordIDs
@property (readonly, nonatomic) NSArray *allDefaultZoneClientRecords; // ivar: _allDefaultZoneClientRecords
@property (readonly, nonatomic) NSDictionary *allDefaultZoneClientRecordsByID; // ivar: _allDefaultZoneClientRecordsByID
@property (readonly, nonatomic) NSArray *allServerRecordIDs; // ivar: _allServerRecordIDs
@property (readonly, nonatomic) NSArray *allServerRecords; // ivar: _allServerRecords
@property (readonly, nonatomic) NSArray *allServerZoneIDs; // ivar: _allServerZoneIDs
@property (readonly, nonatomic) NSArray *allServerZones; // ivar: _allServerZones
@property (readonly, nonatomic) CKDatabase *ckDatabase; // ivar: _ckDatabase
@property (readonly, nonatomic) CKDatabase *ckDatabaseWithZoneWidePCS; // ivar: _ckDatabaseWithZoneWidePCS
@property (readonly, nonatomic) CKDatabase *ckSecureDatabase; // ivar: _ckSecureDatabase
@property (readonly, nonatomic) CKRecord *clientRecord; // ivar: _clientRecord
@property (readonly, nonatomic) CKRecordID *clientRecordID; // ivar: _clientRecordID
@property (readonly, nonatomic) CKRecordID *clientRecordIDSecure; // ivar: _clientRecordIDSecure
@property (readonly, nonatomic) CKRecordID *clientRecordIDWithZoneWidePCS; // ivar: _clientRecordIDWithZoneWidePCS
@property (readonly, nonatomic) CKRecord *clientRecordSecure; // ivar: _clientRecordSecure
@property (readonly, nonatomic) CKRecord *clientRecordWithZoneWidePCS; // ivar: _clientRecordWithZoneWidePCS
@property (readonly, nonatomic) CKRecordZone *clientZone; // ivar: _clientZone
@property (readonly, nonatomic) CKRecordZoneID *clientZoneID; // ivar: _clientZoneID
@property (readonly, nonatomic) CKRecordZoneID *clientZoneIDSecure; // ivar: _clientZoneIDSecure
@property (readonly, nonatomic) CKRecordZoneID *clientZoneIDWithZoneWidePCS; // ivar: _clientZoneIDWithZoneWidePCS
@property (readonly, nonatomic) CKRecordZone *clientZoneSecure; // ivar: _clientZoneSecure
@property (readonly, nonatomic) CKRecordZone *clientZoneWithZoneWidePCS; // ivar: _clientZoneWithZoneWidePCS
@property (readonly, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (readonly, nonatomic) CKRecord *defaultZoneClientRecord; // ivar: _defaultZoneClientRecord
@property (readonly, nonatomic) CKRecordID *defaultZoneClientRecordID; // ivar: _defaultZoneClientRecordID
@property (readonly, nonatomic) CKRecordID *defaultZoneClientRecordIDSecure; // ivar: _defaultZoneClientRecordIDSecure
@property (readonly, nonatomic) CKRecord *defaultZoneClientRecordSecure; // ivar: _defaultZoneClientRecordSecure
@property (readonly, nonatomic) CKRecord *defaultZoneServerRecord; // ivar: _defaultZoneServerRecord
@property (readonly, nonatomic) CKRecordID *defaultZoneServerRecordID; // ivar: _defaultZoneServerRecordID
@property (readonly, nonatomic) CKRecordID *defaultZoneServerRecordIDSecure; // ivar: _defaultZoneServerRecordIDSecure
@property (readonly, nonatomic) CKRecord *defaultZoneServerRecordSecure; // ivar: _defaultZoneServerRecordSecure
@property (readonly, nonatomic) CKRecord *serverRecord; // ivar: _serverRecord
@property (readonly, nonatomic) CKRecordID *serverRecordID; // ivar: _serverRecordID
@property (readonly, nonatomic) CKRecordID *serverRecordIDSecure; // ivar: _serverRecordIDSecure
@property (readonly, nonatomic) CKRecordID *serverRecordIDWithZoneWidePCS; // ivar: _serverRecordIDWithZoneWidePCS
@property (readonly, nonatomic) CKRecord *serverRecordSecure; // ivar: _serverRecordSecure
@property (readonly, nonatomic) CKRecord *serverRecordWithZoneWidePCS; // ivar: _serverRecordWithZoneWidePCS
@property (readonly, nonatomic) CKRecordZone *serverZone; // ivar: _serverZone
@property (readonly, nonatomic) CKRecordZoneID *serverZoneID; // ivar: _serverZoneID
@property (readonly, nonatomic) CKRecordZoneID *serverZoneIDSecure; // ivar: _serverZoneIDSecure
@property (readonly, nonatomic) CKRecordZoneID *serverZoneIDWithZoneWidePCS; // ivar: _serverZoneIDWithZoneWidePCS
@property (readonly, nonatomic) CKRecordZone *serverZoneSecure; // ivar: _serverZoneSecure
@property (readonly, nonatomic) CKRecordZone *serverZoneWithZoneWidePCS; // ivar: _serverZoneWithZoneWidePCS
@property (readonly, nonatomic) TCKDatabase *tckDatabase; // ivar: _tckDatabase
@property (readonly, nonatomic) TCKDatabase *tckDatabaseWithZoneWidePCS; // ivar: _tckDatabaseWithZoneWidePCS
@property (readonly, nonatomic) TCKDatabase *tckSecureDatabase; // ivar: _tckSecureDatabase


-(id)init;


@end


#endif