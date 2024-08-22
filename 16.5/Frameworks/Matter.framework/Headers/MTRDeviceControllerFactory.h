// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICECONTROLLERFACTORY_H
#define MTRDEVICECONTROLLERFACTORY_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTRDeviceControllerFactory : NSObject

@property (readonly) *MTRAttestationTrustStoreBridge attestationTrustStoreBridge; // ivar: _attestationTrustStoreBridge
@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue
@property (readonly) *DeviceControllerFactory controllerFactory; // ivar: _controllerFactory
@property (readonly) NSMutableArray *controllers; // ivar: _controllers
@property (readonly) *DeviceAttestationVerifier deviceAttestationVerifier;
@property *DeviceAttestationVerifier deviceAttestationVerifier; // ivar: _deviceAttestationVerifier
@property (readonly) *GroupDataProvider groupData;
@property (readonly) *void groupDataProvider; // ivar: _groupDataProvider
@property (readonly) *void groupStorageDelegate; // ivar: _groupStorageDelegate
@property (readonly) *PersistentStorageOperationalKeystore keystore; // ivar: _keystore
@property (readonly, nonatomic) NSArray *knownFabrics;
@property (readonly) *void opCertStore; // ivar: _opCertStore
@property (readonly) *MTROperationalBrowser operationalBrowser; // ivar: _operationalBrowser
@property (readonly) *MTROTAProviderDelegateBridge otaProviderDelegateBridge; // ivar: _otaProviderDelegateBridge
@property (readonly) *MTRPersistentStorageDelegateBridge persistentStorageDelegateBridge; // ivar: _persistentStorageDelegateBridge
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly) *RawKeySessionKeystore sessionKeystore; // ivar: _sessionKeystore
@property (readonly) *MTRPersistentStorageDelegateBridge storageDelegateBridge;


+(id)sharedInstance;
+(void)initialize;
-(BOOL)checkForInitError:(BOOL)arg0 logMsg:(id)arg1 ;
-(BOOL)checkIsRunning:(*id)arg0 ;
-(BOOL)findMatchingFabric:(*void)arg0 params:(id)arg1 fabric:(struct FabricInfo **)arg2 ;
-(BOOL)startControllerFactory:(id)arg0 error:(*id)arg1 ;
-(id)createController;
-(id)createControllerOnExistingFabric:(id)arg0 error:(*id)arg1 ;
-(id)createControllerOnNewFabric:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)maybeInitializeOTAProvider:(id)arg0 ;
-(id)runningControllerForFabricIndex:(unsigned char)arg0 ;
-(void)cleanupInitObjects;
-(void)cleanupStartupObjects;
-(void)controllerShuttingDown:(id)arg0 ;
-(void)dealloc;
-(void)operationalInstanceAdded:(struct PeerId *)arg0 ;
-(void)stopControllerFactory;


@end


#endif