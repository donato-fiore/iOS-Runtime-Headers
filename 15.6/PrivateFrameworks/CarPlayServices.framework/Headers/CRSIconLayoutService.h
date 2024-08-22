// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSICONLAYOUTSERVICE_H
#define CRSICONLAYOUTSERVICE_H

@class NSHashTable, NSString, BSServiceConnectionListener;
@protocol BSServiceConnectionListenerDelegate, CRSIconLayoutClientToServerInterface, BSInvalidatable, OS_dispatch_queue, CRSIconLayoutServiceDelegate;

#import <Foundation/Foundation.h>


@interface CRSIconLayoutService : NSObject <BSServiceConnectionListenerDelegate, CRSIconLayoutClientToServerInterface, BSInvalidatable>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (retain, nonatomic) NSHashTable *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRSIconLayoutServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *temporaryWatchdogMonitoringAssertion; // ivar: _temporaryWatchdogMonitoringAssertion


-(id)_newInvalidRequestErrorDueToNilVehicleID;
-(id)initWithDelegate:(id)arg0 ;
-(void)_connectionQueue_addConnection:(id)arg0 ;
-(void)_connectionQueue_removeConnection:(id)arg0 ;
-(void)fetchApplicationIconInformationForBundleIdentifier:(id)arg0 vehicleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchIconStateForVehicleID:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)resetIconStateForVehicleID:(id)arg0 ;
-(void)setIconState:(id)arg0 forVehicleID:(id)arg1 ;


@end


#endif