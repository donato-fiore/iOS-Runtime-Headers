// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLTRANSPORTCONTROLLER_H
#define SCLTRANSPORTCONTROLLER_H

@class NSString, NRDevice, IDSDevice, NRPairedDeviceRegistry, IDSService;
@protocol SCLSettingsSyncTransport, SCLTransportControllerDelegate;

#import <Foundation/Foundation.h>

#import "SCLSettingsSyncCoordinator.h"
#import "SCLTransportService.h"

@interface SCLTransportController : NSObject <SCLSettingsSyncTransport>



@property (readonly, nonatomic) NSString *IDSDeviceIdentifier; // ivar: _IDSDeviceIdentifier
@property (readonly, nonatomic) NRDevice *NRDevice; // ivar: _NRDevice
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCLTransportControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IDSDevice *device;
@property (readonly, nonatomic) NRPairedDeviceRegistry *deviceRegistry; // ivar: _deviceRegistry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (weak, nonatomic) SCLSettingsSyncCoordinator *settingsSyncCoordinator; // ivar: _settingsSyncCoordinator
@property (readonly) Class superclass;
@property (weak, nonatomic) SCLTransportService *transportService; // ivar: _transportService


-(BOOL)sendSchedule:(id)arg0 identifier:(*id)arg1 error:(*id)arg2 ;
-(id)initWithNRDevice:(id)arg0 deviceRegistry:(id)arg1 service:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)addUnlockHistoryItem:(id)arg0 ;
-(void)applySchedule:(id)arg0 ;
-(void)handleIncomingHistoryItem:(id)arg0 ;
-(void)handleIncomingSchedule:(id)arg0 forType:(int)arg1 ;
-(void)handleRemoteScheduleSettingsRequest;
-(void)requestRemoteSettings;
-(void)service:(id)arg0 didDeliverMessageWithIdentifier:(id)arg1 ;
-(void)service:(id)arg0 identifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)service:(id)arg0 incomingProtobuf:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;


@end


#endif