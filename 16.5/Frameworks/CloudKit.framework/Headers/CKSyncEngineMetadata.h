// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSYNCENGINEMETADATA_H
#define CKSYNCENGINEMETADATA_H

@class NSMutableSet, NSMutableOrderedSet, NSOrderedSet, NSDictionary, NSArray, NSDate, NSMutableDictionary;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"
#import "CKServerChangeToken.h"

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableOrderedSet *_zoneIDsToSaveSet;
    NSMutableOrderedSet *_zoneIDsToDeleteSet;
    NSMutableOrderedSet *_pendingModificationsSet;
    NSMutableOrderedSet *_inFlightModificationsSet;
    NSUInteger _internalChangeCount;
}


@property (readonly, nonatomic) NSUInteger changeCount;
@property BOOL didPerformInitialUserRecordIDFetch; // ivar: _didPerformInitialUserRecordIDFetch
@property (copy) NSOrderedSet *fakeRecordIDsToDeleteForSerializationTests; // ivar: _fakeRecordIDsToDeleteForSerializationTests
@property (copy) NSOrderedSet *fakeRecordIDsToSaveForSerializationTests; // ivar: _fakeRecordIDsToSaveForSerializationTests
@property (copy) NSDictionary *fakeZonesToSaveForSerializationTests; // ivar: _fakeZonesToSaveForSerializationTests
@property BOOL hasInFlightAdopterTrackedModifications; // ivar: _hasInFlightAdopterTrackedModifications
@property BOOL hasPendingAdopterTrackedModifications; // ivar: _hasPendingAdopterTrackedModifications
@property (readonly, nonatomic) NSArray *inFlightRecordModifications;
@property (copy) NSDate *lastFetchDatabaseChangesDate; // ivar: _lastFetchDatabaseChangesDate
@property (copy) CKRecordID *lastKnownUserRecordID; // ivar: _lastKnownUserRecordID
@property (readonly, nonatomic) NSMutableDictionary *mServerChangeTokensByZoneID; // ivar: _mServerChangeTokensByZoneID
@property (copy) CKRecordID *mockNextKnownUserRecordID; // ivar: _mockNextKnownUserRecordID
@property BOOL needsToFetchDatabaseChanges; // ivar: _needsToFetchDatabaseChanges
@property BOOL needsToSaveDatabaseSubscription; // ivar: _needsToSaveDatabaseSubscription
@property (readonly, nonatomic) NSArray *pendingRecordModifications;
@property (retain) CKServerChangeToken *serverChangeTokenForDatabase; // ivar: _serverChangeTokenForDatabase
@property BOOL useMockNextKnownUserRecordID; // ivar: _useMockNextKnownUserRecordID
@property (readonly, nonatomic) NSArray *zoneIDsNeedingToFetchChanges;
@property (readonly, nonatomic) NSArray *zoneIDsToDelete;
@property (readonly, nonatomic) NSArray *zoneIDsToSave;


+(BOOL)supportsSecureCoding;
-(BOOL)needsToDeleteZoneID:(id)arg0 ;
-(BOOL)needsToFetchChangesForZoneID:(id)arg0 ;
-(BOOL)needsToSaveZoneID:(id)arg0 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)pendingRecordIDsWithModificationType:(NSInteger)arg0 ;
-(id)recordIDsToDelete;
-(id)recordIDsToSave;
-(id)serverChangeTokenForRecordZoneID:(id)arg0 ;
-(id)serverChangeTokensByZoneID;
-(void)addPendingRecordModifications:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getDataRepresentation:(id)arg0 ;
-(void)markRecordModifications:(id)arg0 inFlight:(BOOL)arg1 ;
-(void)removeInFlightRecordModifications:(id)arg0 ;
-(void)removePendingRecordModifications:(id)arg0 ;
-(void)setNeedsToDelete:(BOOL)arg0 zoneIDs:(id)arg1 ;
-(void)setNeedsToFetchChanges:(BOOL)arg0 forRecordZoneID:(id)arg1 ;
-(void)setNeedsToSave:(BOOL)arg0 zoneIDs:(id)arg1 ;
-(void)setServerChangeToken:(id)arg0 forRecordZoneID:(id)arg1 ;


@end


#endif