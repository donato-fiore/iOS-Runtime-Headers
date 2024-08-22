// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLISTENINGMODEDEVICEACCESSRESOURCE_H
#define WFLISTENINGMODEDEVICEACCESSRESOURCE_H

@class WFAccessResource, NSArray;


#import "WFBluetoothSettingsClient.h"

@interface WFListeningModeDeviceAccessResource : WFAccessResource

@property (copy, nonatomic) id *availabilityCompletion; // ivar: _availabilityCompletion
@property (readonly, nonatomic) WFBluetoothSettingsClient *bluetoothClient; // ivar: _bluetoothClient
@property (readonly, nonatomic) NSArray *supportedDevices; // ivar: _supportedDevices
@property (readonly, nonatomic) os_unfair_lock_s supportedDevicesLock; // ivar: _supportedDevicesLock


+(BOOL)isSingleton;
-(NSUInteger)status;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedAccessResourceErrorString;
-(id)localizedErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)localizedImportErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)unavailableAccessResourceError;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)makeSettingsClientIfNecessary;


@end


#endif