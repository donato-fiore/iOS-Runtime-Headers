// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEACCESSORYPAIRINGCONTROLLER_H
#define HMDAPPLEACCESSORYPAIRINGCONTROLLER_H

@class HMFObject, HMBLocalZone, NSString, NSMutableDictionary;
@protocol HMBCloudDatabaseDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver, HMDAppleAccessoryPairingControllerDataSource;


#import "HMDMutableHomeData.h"
#import "HMDHomeManager.h"
#import "HMDLegacyCloudDatabase.h"

@interface HMDAppleAccessoryPairingController : HMFObject <HMBCloudDatabaseDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver>

 {
    os_unfair_lock_s _lock;
}


@property (retain) HMBLocalZone *blobZone; // ivar: _blobZone
@property (retain) NSObject<HMDAppleAccessoryPairingControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMDMutableHomeData *homeData; // ivar: _homeData
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain) HMBLocalZone *homeManagerZone; // ivar: _homeManagerZone
@property (retain) HMDLegacyCloudDatabase *legacyCloudDatabase; // ivar: _legacyCloudDatabase
@property (retain) NSMutableDictionary *pairingHomes; // ivar: _pairingHomes
@property (readonly) Class superclass;


-(BOOL)handleMessage:(id)arg0 from:(id)arg1 ;
-(BOOL)pairAccessory:(id)arg0 configurationAppIdentifier:(id)arg1 ;
-(id)cleanupBadHomeManagerRecordsForHomeManger:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 dataSource:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 didCreateZoneWithID:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 didRemoveZoneWithID:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 encounteredError:(id)arg1 withOperation:(id)arg2 onContainer:(id)arg3 ;
-(void)cloudDatabase:(id)arg0 encounteredError:(id)arg1 withOperation:(id)arg2 onZone:(id)arg3 ;
-(void)generateModelChangesForHomeManger:(id)arg0 homeName:(id)arg1 pairingHomeUUID:(id)arg2 defaultRoomUUID:(id)arg3 homeZoneUUID:(id)arg4 accessory:(id)arg5 configurationAppIdentifier:(id)arg6 outBlobChanges:(*id)arg7 outLegacyChanges:(*id)arg8 outHomeManagerChanges:(*id)arg9 ;
-(void)removeControllerForZone:(id)arg0 ;
-(void)start;


@end


#endif