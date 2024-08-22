// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCONTINUITYSCANMANAGER_H
#define SFCONTINUITYSCANMANAGER_H

@class NSString, NSMutableSet, NSHashTable;
@protocol SFContinuityScannerClient;


#import "SFXPCClient.h"

@interface SFContinuityScanManager : SFXPCClient <SFContinuityScannerClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableSet *foundDevices; // ivar: _foundDevices
@property (readonly) NSUInteger hash;
@property (retain) NSHashTable *observers; // ivar: _observers
@property NSUInteger scanTypes; // ivar: _scanTypes
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)init;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(void)_getRemoteObjectProxyOnQueue:(id)arg0 ;
-(void)activityPayloadFromDeviceUniqueID:(id)arg0 forAdvertisementPayload:(id)arg1 command:(id)arg2 timeout:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)addObserver:(id)arg0 ;
-(void)foundDeviceWithDevice:(id)arg0 ;
-(void)lostDeviceWithDevice:(id)arg0 ;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)pairedDevicesChanged:(id)arg0 ;
-(void)receivedAdvertisement:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)scanForTypes:(NSUInteger)arg0 ;


@end


#endif