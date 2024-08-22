// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPBEACONMANAGERSIMPLEBEACONUPDATEINTERFACE_H
#define SPBEACONMANAGERSIMPLEBEACONUPDATEINTERFACE_H

@class NSString, FMXPCSession, NSArray;
@protocol SPSimpleBeaconUpdateClientXPCProtocol, SPBeaconManagerXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPSimpleBeaconContext.h"

@interface SPBeaconManagerSimpleBeaconUpdateInterface : NSObject <SPSimpleBeaconUpdateClientXPCProtocol>



@property (copy, nonatomic) id *collectionDifferenceBlock; // ivar: _collectionDifferenceBlock
@property (retain, nonatomic) SPSimpleBeaconContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SPBeaconManagerXPCProtocol> *proxy; // ivar: _proxy
@property (nonatomic) BOOL reconnectionUpdate; // ivar: _reconnectionUpdate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (copy, nonatomic) NSArray *simpleBeacons; // ivar: _simpleBeacons
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)remoteInterface;
-(id)init;
-(void)_processRemovals:(id)arg0 ;
-(void)dealloc;
-(void)handleReconnection;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)receivedSimpleBeaconRemovals:(id)arg0 ;
-(void)receivedSimpleBeaconUpdates:(id)arg0 ;
-(void)removeObservers;
-(void)setSimpleBeaconDifferenceBlock:(id)arg0 ;
-(void)startUpdatingSimpleBeaconsWithContext:(id)arg0 completion:(id)arg1 ;
-(void)stopUpdatingSimpleBeaconsWithCompletion:(id)arg0 ;


@end


#endif