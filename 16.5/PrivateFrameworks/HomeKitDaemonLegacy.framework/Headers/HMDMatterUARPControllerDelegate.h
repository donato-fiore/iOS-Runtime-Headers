// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMATTERUARPCONTROLLERDELEGATE_H
#define HMDMATTERUARPCONTROLLERDELEGATE_H

@class HMFObject, NSString;
@protocol HMFLogging, UARPControllerDelegateProtocol;


#import "HMDAccessoryFirmwareUpdateManager.h"

@interface HMDMatterUARPControllerDelegate : HMFObject <HMFLogging, UARPControllerDelegateProtocol>



@property (readonly, weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager; // ivar: _accessoryFirmwareUpdateManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(id)initWithAccessoryFirmwareUpdateManager:(id)arg0 ;
-(id)newUploader;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;


@end


#endif