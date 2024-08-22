// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUVENDORSPECIFICDEVICEMANAGER_H
#define MRUVENDORSPECIFICDEVICEMANAGER_H

@class NSArray, NSMutableDictionary, NSString, DADiscovery, NSMutableSet, DADeviceResolver;
@protocol MRUVendorSpecificDeviceManagerDelegate;

#import <Foundation/Foundation.h>


@interface MRUVendorSpecificDeviceManager : NSObject

@property (readonly, copy, nonatomic) NSArray *activatedDeviceIDs;
@property (retain, nonatomic) NSMutableDictionary *activatedDeviceMap; // ivar: _activatedDeviceMap
@property (readonly, copy, nonatomic) NSArray *activatingDeviceIDs;
@property (retain, nonatomic) NSMutableDictionary *activatingDeviceMap; // ivar: _activatingDeviceMap
@property (copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (retain, nonatomic) NSMutableDictionary *coalescedDeviceMap; // ivar: _coalescedDeviceMap
@property (readonly, copy, nonatomic) NSArray *coalescedDevices;
@property (weak, nonatomic) NSObject<MRUVendorSpecificDeviceManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *deviceMap; // ivar: _deviceMap
@property (readonly, copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) DADiscovery *discovery; // ivar: _discovery
@property (readonly, copy, nonatomic) NSArray *invalidatingDeviceIDs;
@property (retain, nonatomic) NSMutableDictionary *invalidatingDeviceMap; // ivar: _invalidatingDeviceMap
@property (retain, nonatomic) NSMutableSet *mutableResolverManagedAirPlayRouteIDs; // ivar: _mutableResolverManagedAirPlayRouteIDs
@property (readonly, copy, nonatomic) NSArray *pendingDeviceIDs;
@property (retain, nonatomic) DADeviceResolver *resolver; // ivar: _resolver
@property (readonly, copy, nonatomic) NSArray *resolverManagedAirPlayRouteIDs;
@property (copy, nonatomic) NSArray *serviceIdentifiers; // ivar: _serviceIdentifiers


-(BOOL)resolverAddNativeRoute:(id)arg0 forRouteUID:(id)arg1 ;
-(NSInteger)latestStateForDevice:(id)arg0 ;
-(id)initWithAppBundleID:(id)arg0 serviceIdentifiers:(id)arg1 ;
-(void)connectToDevice:(id)arg0 ;
-(void)dealloc;
-(void)disconnectAllDevices;
-(void)handleDiscoveryEvent:(id)arg0 ;
-(void)handleResolverEvent:(id)arg0 ;
-(void)resolverAddNativeRoutes:(id)arg0 ;
-(void)resolverAddVendorSpecificDevice:(id)arg0 ;
-(void)resolverRemoveNativeRouteforRouteUID:(id)arg0 ;
-(void)resolverRemoveNativeRoutes:(id)arg0 ;
-(void)resolverRemoveVendorSpecificRoute:(id)arg0 ;
-(void)resolverSetLastSelectedRoute:(id)arg0 ;
-(void)setDevice:(id)arg0 picked:(BOOL)arg1 ;
-(void)startDiscovery;
-(void)stopDiscovery;
-(void)updateLocalMapWith:(id)arg0 deviceIsLost:(BOOL)arg1 ;


@end


#endif