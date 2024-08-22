// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTCLOUDSERVICESCLIENT_H
#define BTCLOUDSERVICESCLIENT_H

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BTCloudServicesClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint


-(BOOL)_ensureXPCStarted;
-(id)init;
-(void)_interrupted;
-(void)_invalidated;
-(void)accountInfoWithCompletion:(id)arg0 ;
-(void)cloudPairingIdentifierForPeripheral:(id)arg0 completion:(id)arg1 ;
-(void)createDeviceRecord:(id)arg0 completion:(id)arg1 ;
-(void)createDeviceSupportInformationRecord:(id)arg0 completion:(id)arg1 ;
-(void)createMagicSettingsRecord:(id)arg0 completion:(id)arg1 ;
-(void)createSoundProfileRecord:(id)arg0 completion:(id)arg1 ;
-(void)deleteDeviceRecord:(id)arg0 completion:(id)arg1 ;
-(void)deleteDeviceSupportInformationRecord:(id)arg0 completion:(id)arg1 ;
-(void)deleteMagicSettingsRecord:(id)arg0 completion:(id)arg1 ;
-(void)deleteSoundProfileRecordWithCompletion:(id)arg0 ;
-(void)deviceRecord:(id)arg0 completion:(id)arg1 ;
-(void)deviceRecordsWithCompletion:(id)arg0 ;
-(void)deviceSupportInformationRecord:(id)arg0 completion:(id)arg1 ;
-(void)deviceSupportInformationRecordsWithCompletion:(id)arg0 ;
-(void)fetchSoundProfileRecordWithCompletion:(id)arg0 ;
-(void)forceCloudPairingForIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)magicSettingsRecord:(id)arg0 completion:(id)arg1 ;
-(void)magicSettingsRecordsWithCompletion:(id)arg0 ;
-(void)modifyDeviceRecord:(id)arg0 completion:(id)arg1 ;
-(void)modifyDeviceSupportInformationRecord:(id)arg0 completion:(id)arg1 ;
-(void)modifyMagicSettingsRecord:(id)arg0 completion:(id)arg1 ;
-(void)modifySoundProfileRecord:(id)arg0 completion:(id)arg1 ;


@end


#endif