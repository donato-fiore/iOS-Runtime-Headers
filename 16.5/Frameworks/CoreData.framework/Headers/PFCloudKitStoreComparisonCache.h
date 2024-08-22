// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITSTORECOMPARISONCACHE_H
#define PFCLOUDKITSTORECOMPARISONCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSPersistentStore.h"
#import "NSManagedObjectContext.h"

@interface PFCloudKitStoreComparisonCache : NSObject {
    NSMutableDictionary *_storeUUIDToStoreCache;
}


@property (readonly, nonatomic) BOOL checkCloudKitMetadata; // ivar: _checkCloudKitMetadata
@property (readonly, nonatomic) NSPersistentStore *otherStore; // ivar: _otherStore
@property (readonly, nonatomic) NSManagedObjectContext *otherStoreMoc; // ivar: _otherStoreMoc
@property (readonly, nonatomic) NSPersistentStore *store; // ivar: _store
@property (readonly, nonatomic) NSManagedObjectContext *storeMoc; // ivar: _storeMoc


-(BOOL)populate:(*id)arg0 ;
-(NSInteger)databaseScopeForStoreWithIdentifier:(id)arg0 ;
-(id)deriveIdentifierForNonCloudObjectID:(id)arg0 ;
-(id)identifiersForStore:(id)arg0 ;
-(id)identityRecordNameForStoreWithIdentifier:(id)arg0 ;
-(id)initWithStore:(id)arg0 otherStore:(id)arg1 ;
-(id)metadataForObjectWithID:(id)arg0 ;
-(id)mirroredRelationshipForObject:(id)arg0 relatedToObject:(id)arg1 byRelationship:(id)arg2 ;
-(id)mtmKeysForRecordZone:(id)arg0 inStore:(id)arg1 ;
-(id)mtmKeysForStore:(id)arg0 ;
-(id)objectIDForIdentifier:(id)arg0 inStore:(id)arg1 ;
-(id)objectIDForRecordID:(id)arg0 inStore:(id)arg1 ;
-(id)recordIDForObjectID:(id)arg0 ;
-(id)recordIDsRelatedToRecordID:(id)arg0 byRelationshipNamed:(id)arg1 inStore:(id)arg2 ;
-(id)recordIdsForStore:(id)arg0 ;
-(id)sharedZoneIDsForStore:(id)arg0 ;
-(void)dealloc;


@end


#endif