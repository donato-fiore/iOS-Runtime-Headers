// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEFAULTUARPCONTROLLERDELEGATE_H
#define HMDDEFAULTUARPCONTROLLERDELEGATE_H

@class HMFObject, NSString;
@protocol HMFLogging, UARPControllerDelegateProtocol;


#import "HMDAccessoryFirmwareUpdateManager.h"

@interface HMDDefaultUARPControllerDelegate : HMFObject <HMFLogging, UARPControllerDelegateProtocol>



@property (readonly, weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager; // ivar: _accessoryFirmwareUpdateManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(id)initWithAccessoryFirmwareUpdateManager:(id)arg0 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)assetSolicitationComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)assetSolicitationProgress:(id)arg0 assetID:(id)arg1 bytesReceived:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)firmwareStagingComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)firmwareStagingProgress:(id)arg0 assetID:(id)arg1 bytesSent:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)firmwareUpdateResult:(id)arg0 vendorSpecificStatus:(unsigned int)arg1 error:(id)arg2 ;
-(void)stagedFirmwareApplicationComplete:(id)arg0 withStatus:(NSUInteger)arg1 ;


@end


#endif