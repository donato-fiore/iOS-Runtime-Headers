// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDNANOSYNCCONTROLSERVER_H
#define HDNANOSYNCCONTROLSERVER_H

@class NSString;
@protocol HKNanoSyncControlServer;


#import "HDStandardTaskServer.h"
#import "HDNanoSyncManager.h"

@interface HDNanoSyncControlServer : HDStandardTaskServer <HKNanoSyncControlServer>

 {
    HDNanoSyncManager *_nanoSyncManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchNanoSyncPairedDevicesWithCompletion:(id)arg0 ;
-(void)remote_forceNanoSyncWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_resetNanoSyncWithCompletion:(id)arg0 ;
-(void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif