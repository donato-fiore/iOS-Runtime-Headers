// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSECONDARYDEVICEPAIRINGAGENT_H
#define HKSECONDARYDEVICEPAIRINGAGENT_H

@class NSUUID, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable>

 {
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg0 completion:(id)arg1 ;
-(void)fetchSharingStatusWithPairedGuardianWithCompletion:(id)arg0 ;
-(void)performEndToEndCloudSyncWithNRDeviceUUID:(id)arg0 syncParticipantFirst:(BOOL)arg1 completion:(id)arg2 ;
-(void)requestTinkerSharingOptInWithGuardianDisplayName:(id)arg0 NRDeviceUUID:(id)arg1 completion:(id)arg2 ;
-(void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)tearDownHealthSharingWithPairedGuardianWithCompletion:(id)arg0 ;
-(void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg0 completion:(id)arg1 ;


@end


#endif