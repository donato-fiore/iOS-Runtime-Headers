// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEACCESSORYPAIRINGCONTROLLER_H
#define HMDAPPLEACCESSORYPAIRINGCONTROLLER_H

@class HMFObject, HAPPairingIdentity, NSString, NSMutableDictionary;
@protocol HMBCloudDatabaseDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver;


#import "HMDAppleAccessoryPairingControllerDataSource.h"
#import "HMDMutableHomeData.h"
#import "HMDHomeManager.h"
#import "HMDLegacyCloudDatabase.h"

@interface HMDAppleAccessoryPairingController : HMFObject <HMBCloudDatabaseDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver>



@property (retain) HAPPairingIdentity *controllerIdentity; // ivar: _controllerIdentity
@property (retain) HMDAppleAccessoryPairingControllerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMDMutableHomeData *homeData; // ivar: _homeData
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain) HMDLegacyCloudDatabase *legacyCloudDatabase; // ivar: _legacyCloudDatabase
@property (retain) NSMutableDictionary *legacyZones; // ivar: _legacyZones
@property (readonly) Class superclass;


-(id)initWithHomeManager:(id)arg0 dataSource:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 didCreateZoneWithID:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 didRemoveZoneWithID:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 encounteredError:(id)arg1 withOperation:(id)arg2 onContainer:(id)arg3 ;
-(void)cloudDatabase:(id)arg0 encounteredError:(id)arg1 withOperation:(id)arg2 onZone:(id)arg3 ;
-(void)pairAccessory:(id)arg0 configurationAppIdentifier:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif