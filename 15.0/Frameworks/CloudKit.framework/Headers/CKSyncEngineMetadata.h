// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSYNCENGINEMETADATA_H
#define CKSYNCENGINEMETADATA_H

@class NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSArray;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKServerChangeToken.h"

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableDictionary *_zonesToSaveDictionary;
    NSMutableOrderedSet *_zoneIDsToDeleteSet;
    NSMutableOrderedSet *_pendingModificationsSet;
    NSMutableOrderedSet *_inFlightModificationsSet;
    NSUInteger _internalChangeCount;
}


@property (readonly, nonatomic) NSUInteger changeCount;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToDeleteForSerializationTests; // ivar: _fakeRecordIDsToDeleteForSerializationTests
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToSaveForSerializationTests; // ivar: _fakeRecordIDsToSaveForSerializationTests
@property (readonly, nonatomic) NSArray *inFlightRecordModifications;
@property (nonatomic) BOOL needsToFetchDatabaseChanges; // ivar: _needsToFetchDatabaseChanges
@property (nonatomic) BOOL needsToSaveDatabaseSubscription; // ivar: _needsToSaveDatabaseSubscription
@property (readonly, nonatomic) NSArray *pendingRecordModifications;
@property (retain, nonatomic) CKServerChangeToken *serverChangeTokenForDatabase; // ivar: _serverChangeTokenForDatabase
@property (retain, nonatomic) NSMutableDictionary *serverChangeTokensByZoneID; // ivar: _serverChangeTokensByZoneID
@property (readonly, nonatomic) NSArray *zoneIDsNeedingToFetchChanges;
@property (readonly, nonatomic) NSArray *zoneIDsToDelete;
@property (readonly, nonatomic) NSArray *zonesToSave;


+(BOOL)supportsSecureCoding;
-(BOOL)needsToDeleteZoneID:(id)arg0 ;
-(BOOL)needsToFetchChangesForZoneID:(id)arg0 ;
-(BOOL)needsToSaveZone:(id)arg0 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)pendingRecordIDsWithModificationType:(NSInteger)arg0 ;
-(id)recordIDsToDelete;
-(id)recordIDsToSave;
-(id)serverChangeTokenForRecordZoneID:(id)arg0 ;
-(void)addPendingRecordModifications:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getDataRepresentation:(id)arg0 ;
-(void)markRecordModifications:(id)arg0 inFlight:(BOOL)arg1 ;
-(void)removeInFlightRecordModifications:(id)arg0 ;
-(void)removePendingRecordModifications:(id)arg0 ;
-(void)setNeedsToDelete:(BOOL)arg0 zoneIDs:(id)arg1 ;
-(void)setNeedsToFetchChanges:(BOOL)arg0 forRecordZoneID:(id)arg1 ;
-(void)setNeedsToSave:(BOOL)arg0 zones:(id)arg1 ;
-(void)setServerChangeToken:(id)arg0 forRecordZoneID:(id)arg1 ;


@end


#endif