// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCLOUDKITSTORECOMPARER_H
#define PFCLOUDKITSTORECOMPARER_H


#import <Foundation/Foundation.h>

#import "PFCloudKitArchivingUtilities.h"
#import "PFCloudKitStoreComparisonCache.h"

@interface PFCloudKitStoreComparer : NSObject

@property (readonly, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities; // ivar: _archivingUtilities
@property (readonly, nonatomic) PFCloudKitStoreComparisonCache *cache; // ivar: _cache
@property (nonatomic) BOOL onlyCompareSharedZones; // ivar: _onlyCompareSharedZones


+(id)trimExcessiveValuesForLog:(id)arg0 ;
-(BOOL)compareAttributesOnObject:(id)arg0 toObject:(id)arg1 error:(*id)arg2 ;
-(BOOL)compareCloudKitMetadataOfStore:(id)arg0 toStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)compareContentOfStore:(id)arg0 toStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)compareDatabaseScopeAndIdentityInStore:(id)arg0 toStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)compareObjectsInStore:(id)arg0 toStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)compareRelationshipsOfRecordID:(id)arg0 withStoreObject:(id)arg1 andOtherObject:(id)arg2 error:(*id)arg3 ;
-(BOOL)ensureContentsMatch:(*id)arg0 ;
-(BOOL)ensureContentsOfStore:(id)arg0 matchContentsOfStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)ensureMirroredRelationshipsMatchForStore:(id)arg0 otherStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)ensureMoveReceiptsMatchForStore:(id)arg0 otherStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)ensureStoresAgreeOnCloudKitTables:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValue:(id)arg0 equalToValue:(id)arg1 forAttribute:(id)arg2 ;
-(BOOL)validateValue:(id)arg0 againstOtherValue:(id)arg1 forIgnoredAttribute:(id)arg2 ;
-(id)getObjectMatchingRecordID:(id)arg0 fromStore:(id)arg1 withManagedObjectContext:(id)arg2 ;
-(id)getRecordIDsForRelationship:(id)arg0 onObject:(id)arg1 ;
-(id)initWithStore:(id)arg0 otherStore:(id)arg1 ;
-(void)dealloc;


@end


#endif