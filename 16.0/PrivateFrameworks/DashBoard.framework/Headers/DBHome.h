// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBHOME_H
#define DBHOME_H

@class NSMutableSet, NSDictionary, NSString, NSArray, HMHome, NSMutableDictionary, CLLocation, CARObserverHashTable, NSUUID;
@protocol DBLocationManagerObserver, DBNetworkPathMonitorObserver, HMHomeDelegatePrivate, DBHomeKitEntity;

#import <Foundation/Foundation.h>

#import "DBGarageDoor.h"
#import "DBLocationManager.h"
#import "DBNetworkPathMonitor.h"

@interface DBHome : NSObject <DBLocationManagerObserver, DBNetworkPathMonitorObserver, HMHomeDelegatePrivate, DBHomeKitEntity>

 {
    NSMutableSet *_updatingLastUsedServiceTypes;
}


@property (retain, nonatomic) NSDictionary *cachedGarageDoors; // ivar: _cachedGarageDoors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distance;
@property (readonly, nonatomic) NSString *formattedUniqueIdentifier;
@property (nonatomic) BOOL garageDoorRefreshScheduled; // ivar: _garageDoorRefreshScheduled
@property (readonly, nonatomic) NSArray *garageDoors;
@property (readonly, nonatomic) BOOL hasCachedGarageDoors;
@property (readonly, nonatomic) BOOL hasGarageDoor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL inExtendedRange; // ivar: _inExtendedRange
@property (readonly, nonatomic) BOOL inRange;
@property (nonatomic) CGFloat lastLoggedDistance; // ivar: _lastLoggedDistance
@property (readonly, nonatomic) DBGarageDoor *lastUsedGarageDoor; // ivar: _lastUsedGarageDoor
@property (readonly, nonatomic) NSMutableDictionary *lastUsedIdentifiersByServiceType; // ivar: _lastUsedIdentifiersByServiceType
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) DBLocationManager *locationManager; // ivar: _locationManager
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) DBNetworkPathMonitor *networkPathMonitor; // ivar: _networkPathMonitor
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL previouslyInRange; // ivar: _previouslyInRange
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSMutableSet *updatingLastUsedServiceTypes;
@property (readonly, nonatomic) BOOL usable;


+(CGFloat)maxDistance;
-(BOOL)inHomeRange;
-(BOOL)inLocationRange;
-(id)initWithHome:(id)arg0 resourceProvider:(id)arg1 ;
-(void)_scheduleGarageDoorRefresh;
-(void)_setValue:(id)arg0 forCharacteristic:(id)arg1 completion:(id)arg2 ;
-(void)_updateCachedGarageDoors;
-(void)_updateInRangeIfNeeded;
-(void)_updateLastUsedServiceOfType:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)homeDidUpdateHomeLocationStatus:(id)arg0 ;
-(void)locationManager:(id)arg0 didEnterRegionIdentifier:(id)arg1 ;
-(void)locationManager:(id)arg0 didExitRegionIdentifier:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)networkPathMonitor:(id)arg0 didChangeNetworkReachable:(BOOL)arg1 ;
-(void)networkPathMonitorDidChangeNetworkPath:(id)arg0 ;
-(void)refreshGarageDoors;
-(void)removeObserver:(id)arg0 ;


@end


#endif