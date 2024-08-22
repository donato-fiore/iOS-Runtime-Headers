// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGVIRTUALGARAGESERVER_H
#define VGVIRTUALGARAGESERVER_H

@class NSMutableArray, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, VGVirtualGarageDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions, OS_dispatch_queue, VGVirtualGaragePersisting, VGVirtualGarageObserver;

#import <Foundation/Foundation.h>

#import "VGVirtualGarage.h"

@interface VGVirtualGarageServer : NSObject <NSXPCListenerDelegate, VGVirtualGarageDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions>

 {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id<VGVirtualGaragePersisting> *_persister;
}


@property (retain, nonatomic) NSMutableArray *activeConnections; // ivar: _activeConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VGVirtualGarage *garage; // ivar: _garage
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hostsVirtualGarage; // ivar: _hostsVirtualGarage
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (weak, nonatomic) NSObject<VGVirtualGarageObserver> *observer; // ivar: _observer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (readonly) Class superclass;


+(BOOL)canUseVirtualGarageXPCService;
+(id)sharedServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_cleanUp;
-(void)_setupVirtualGarageHostingIfNeeded;
-(void)dealloc;
-(void)startWithPersister:(id)arg0 ;
-(void)stop;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;
-(void)virtualGarage:(id)arg0 didUpdateUnpairedVehicles:(id)arg1 ;
-(void)virtualGarageAddVehicle:(id)arg0 ;
-(void)virtualGarageDidUpdate:(id)arg0 ;
-(void)virtualGarageEndContinuousUpdates;
-(void)virtualGarageGetGarageWithReply:(id)arg0 ;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg0 syncAcrossDevices:(BOOL)arg1 withReply:(id)arg2 ;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id)arg0 ;
-(void)virtualGarageOnboardVehicle:(id)arg0 ;
-(void)virtualGarageRemoveVehicle:(id)arg0 ;
-(void)virtualGarageSaveVehicle:(id)arg0 ;
-(void)virtualGarageSelectVehicle:(id)arg0 ;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg0 ;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;


@end


#endif