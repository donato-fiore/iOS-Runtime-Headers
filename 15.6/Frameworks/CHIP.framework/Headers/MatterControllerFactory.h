// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MATTERCONTROLLERFACTORY_H
#define MATTERCONTROLLERFACTORY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MatterControllerFactory : NSObject

@property (readonly) *CHIPAttestationTrustStoreBridge attestationTrustStoreBridge; // ivar: _attestationTrustStoreBridge
@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue
@property (readonly) *DeviceControllerFactory controllerFactory; // ivar: _controllerFactory
@property (readonly) NSMutableArray *controllers; // ivar: _controllers
@property (readonly) *GroupDataProvider groupData;
@property (readonly) *void groupDataProvider; // ivar: _groupDataProvider
@property (readonly) *void groupStorageDelegate; // ivar: _groupStorageDelegate
@property (readonly, nonatomic) BOOL isRunning; // ivar: _isRunning
@property (readonly) *CHIPPersistentStorageDelegateBridge persistentStorageDelegateBridge; // ivar: _persistentStorageDelegateBridge
@property (readonly) *CHIPPersistentStorageDelegateBridge storageDelegateBridge;


+(id)sharedInstance;
-(BOOL)checkForInitError:(BOOL)arg0 logMsg:(id)arg1 ;
-(BOOL)startup:(id)arg0 ;
-(id)createController;
-(id)init;
-(id)startControllerOnExistingFabric:(id)arg0 ;
-(id)startControllerOnNewFabric:(id)arg0 ;
-(void)cleanupInitObjects;
-(void)cleanupStartupObjects;
-(void)controllerShuttingDown:(id)arg0 ;
-(void)dealloc;
-(void)shutdown;


@end


#endif