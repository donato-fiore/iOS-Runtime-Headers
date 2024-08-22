// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDCACHE_H
#define HMDCLOUDCACHE_H

@class HMFObject, CKServerChangeToken, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "HMDBackingStore.h"
#import "HMDCloudZone.h"
#import "HMDCloudHomeManagerZone.h"
#import "HMDCloudLegacyZone.h"
#import "HMDCloudMetadataZone.h"

@interface HMDCloudCache : HMFObject {
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) HMDBackingStore *backingStore; // ivar: _backingStore
@property (retain, nonatomic) CKServerChangeToken *databaseServerChangeToken;
@property (retain, nonatomic) HMDCloudZone *homeDataInformation; // ivar: _homeDataInformation
@property (retain, nonatomic) HMDCloudHomeManagerZone *homeManagerZone; // ivar: _homeManagerZone
@property (retain, nonatomic) NSMutableDictionary *homeZones; // ivar: _homeZones
@property (retain, nonatomic) HMDCloudLegacyZone *legacyZone; // ivar: _legacyZone
@property (retain, nonatomic) HMDCloudMetadataZone *metadataZone; // ivar: _metadataZone
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)homeZoneExists:(id)arg0 ;
-(id)_findStoreCacheZone:(id)arg0 byName:(id)arg1 ;
-(id)allHomeZones;
-(id)init;
-(id)initWithBackingStore:(id)arg0 workQueue:(id)arg1 ;
-(void)_createZones:(id)arg0 completion:(id)arg1 ;
-(void)createAndFetchZonesFromBackingStore:(id)arg0 ;
-(void)deleteAllZones;
-(void)deleteHomeZoneWithName:(id)arg0 ;
-(void)homeZoneWithName:(id)arg0 owner:(id)arg1 completion:(id)arg2 ;
-(void)persistDatabaseServerChangeToken;


@end


#endif