// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(NSUInteger)globalLevelStatus;
-(NSUInteger)workflowLevelStatus;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedAccessResourceErrorString;
-(id)localizedErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)localizedImportErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)unavailableAccessResourceError;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)makeSettingsClientIfNecessary;


@end


#endif