// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARINPUTDEVICEMANAGER_H
#define CARINPUTDEVICEMANAGER_H

@class NSString, NSArray;
@protocol CARInputDeviceTouchpadDelegate;

#import <Foundation/Foundation.h>

#import "CARSession.h"

@interface CARInputDeviceManager : NSObject <CARInputDeviceTouchpadDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputDevices; // ivar: _inputDevices
@property (readonly, weak, nonatomic) CARSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)touchpadCharacterRecognitionSupported;
-(id)_generateInputDevicesWithEndpointInputDevices:(id)arg0 screenIDs:(id)arg1 vehicleInformation:(id)arg2 ;
-(id)_initWithInputDevices:(id)arg0 session:(id)arg1 ;
-(id)_inputDeviceWithSenderID:(NSUInteger)arg0 ;
-(id)_touchpadSettingsFromVehicleInformation:(id)arg0 ;
-(id)initWithEndpointInputDevices:(id)arg0 screenIDs:(id)arg1 vehicleInformation:(id)arg2 session:(id)arg3 ;
-(id)touchpadWithSenderID:(NSUInteger)arg0 ;
-(void)_enumerateTouchpadsUsingBlock:(id)arg0 ;
-(void)_updateTouchpadSettings:(id)arg0 ;
-(void)performHapticType:(NSUInteger)arg0 deviceUUID:(id)arg1 ;
-(void)vehicleInformationChanged:(id)arg0 ;


@end


#endif