// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXREMOTEHEARINGAIDDEVICE_H
#define AXREMOTEHEARINGAIDDEVICE_H

@class NSString, NSDate, NSArray, NSMutableArray;
@protocol AXHADeviceProtocol, AXHARemoteUpdateProtocol;

#import <Foundation/Foundation.h>

#import "AXHearingAidMode.h"

@interface AXRemoteHearingAidDevice : NSObject <AXHADeviceProtocol>

 {
    BOOL _delayWritePending;
}


@property (nonatomic) int availableEars; // ivar: availableEars
@property (nonatomic) int availableInputEars; // ivar: _availableInputEars
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSString *deviceUUID; // ivar: _deviceUUID
@property (nonatomic) int earsSupportingWatch; // ivar: _earsSupportingWatch
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBluetoothPaired; // ivar: _isBluetoothPaired
@property (nonatomic) BOOL isConnecting; // ivar: _isConnecting
@property (nonatomic) BOOL isPaired; // ivar: _isPaired
@property (nonatomic) BOOL keepInSync; // ivar: _keepInSync
@property (nonatomic) NSUInteger leftAvailableProperties; // ivar: _leftAvailableProperties
@property (nonatomic) char leftBass; // ivar: _leftBass
@property (nonatomic) CGFloat leftBatteryLevel; // ivar: _leftBatteryLevel
@property (retain, nonatomic) NSDate *leftBatteryLowDate; // ivar: _leftBatteryLowDate
@property (nonatomic) BOOL leftConnected; // ivar: _leftConnected
@property (retain, nonatomic) NSString *leftFirmwareVersion; // ivar: _leftFirmwareVersion
@property (retain, nonatomic) NSString *leftHardwareVersion; // ivar: _leftHardwareVersion
@property (nonatomic) CGFloat leftMicrophoneVolume; // ivar: _leftMicrophoneVolume
@property (nonatomic) short leftMicrophoneVolumeSteps; // ivar: _leftMicrophoneVolumeSteps
@property (nonatomic) CGFloat leftMixedVolume; // ivar: _leftMixedVolume
@property (nonatomic) short leftMixedVolumeSteps; // ivar: _leftMixedVolumeSteps
@property (retain, nonatomic) NSString *leftPeripheralUUID; // ivar: _leftPeripheralUUID
@property (copy, nonatomic) NSArray *leftPrograms; // ivar: _leftPrograms
@property (retain, nonatomic) AXHearingAidMode *leftSelectedProgram; // ivar: _leftSelectedProgram
@property (retain, nonatomic) AXHearingAidMode *leftSelectedStreamingProgram; // ivar: _leftSelectedStreamingProgram
@property (nonatomic) CGFloat leftSensitivity; // ivar: _leftSensitivity
@property (nonatomic) short leftSensitivitySteps; // ivar: _leftSensitivitySteps
@property (nonatomic) CGFloat leftStreamVolume; // ivar: _leftStreamVolume
@property (nonatomic) short leftStreamVolumeSteps; // ivar: _leftStreamVolumeSteps
@property (nonatomic) char leftTreble; // ivar: _leftTreble
@property (retain, nonatomic) NSString *leftUUID; // ivar: _leftUUID
@property (nonatomic) NSUInteger loadedProperties; // ivar: _loadedProperties
@property (retain, nonatomic) NSMutableArray *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSMutableArray *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger pendingPropertyWrites; // ivar: _pendingPropertyWrites
@property (nonatomic) NSUInteger requiredProperties; // ivar: _requiredProperties
@property (nonatomic) BOOL requiresBinauralStreaming; // ivar: _requiresBinauralStreaming
@property (nonatomic) BOOL requiresCombinedPresets; // ivar: _requiresCombinedPresets
@property (nonatomic) BOOL requiresCombinedVolumes; // ivar: _requiresCombinedVolumes
@property (nonatomic) NSUInteger rightAvailableProperties; // ivar: _rightAvailableProperties
@property (nonatomic) char rightBass; // ivar: _rightBass
@property (nonatomic) CGFloat rightBatteryLevel; // ivar: _rightBatteryLevel
@property (retain, nonatomic) NSDate *rightBatteryLowDate; // ivar: _rightBatteryLowDate
@property (nonatomic) BOOL rightConnected; // ivar: _rightConnected
@property (retain, nonatomic) NSString *rightFirmwareVersion; // ivar: _rightFirmwareVersion
@property (retain, nonatomic) NSString *rightHardwareVersion; // ivar: _rightHardwareVersion
@property (nonatomic) CGFloat rightMicrophoneVolume; // ivar: _rightMicrophoneVolume
@property (nonatomic) short rightMicrophoneVolumeSteps; // ivar: _rightMicrophoneVolumeSteps
@property (nonatomic) CGFloat rightMixedVolume; // ivar: _rightMixedVolume
@property (nonatomic) short rightMixedVolumeSteps; // ivar: _rightMixedVolumeSteps
@property (retain, nonatomic) NSString *rightPeripheralUUID; // ivar: _rightPeripheralUUID
@property (copy, nonatomic) NSArray *rightPrograms; // ivar: _rightPrograms
@property (retain, nonatomic) AXHearingAidMode *rightSelectedProgram; // ivar: _rightSelectedProgram
@property (retain, nonatomic) AXHearingAidMode *rightSelectedStreamingProgram; // ivar: _rightSelectedStreamingProgram
@property (nonatomic) CGFloat rightSensitivity; // ivar: _rightSensitivity
@property (nonatomic) short rightSensitivitySteps; // ivar: _rightSensitivitySteps
@property (nonatomic) CGFloat rightStreamVolume; // ivar: _rightStreamVolume
@property (nonatomic) short rightStreamVolumeSteps; // ivar: _rightStreamVolumeSteps
@property (nonatomic) char rightTreble; // ivar: _rightTreble
@property (retain, nonatomic) NSString *rightUUID; // ivar: _rightUUID
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBinauralStreaming; // ivar: _supportsBinauralStreaming
@property (nonatomic) BOOL supportsCombinedPresets; // ivar: _supportsCombinedPresets
@property (nonatomic) BOOL supportsCombinedVolumes; // ivar: _supportsCombinedVolumes
@property (weak, nonatomic) NSObject<AXHARemoteUpdateProtocol> *updateDelegate; // ivar: _updateDelegate


-(BOOL)checkDidLoadProperties:(NSUInteger)arg0 ;
-(BOOL)containsPeripheralWithUUID:(id)arg0 ;
-(BOOL)didLoadBasicProperties;
-(BOOL)didLoadProperty:(NSUInteger)arg0 ;
-(BOOL)didLoadRequiredPeerProperties;
-(BOOL)didLoadRequiredProperties;
-(BOOL)hasConnection;
-(BOOL)isConnected;
-(BOOL)isLeftConnected;
-(BOOL)isRightConnected;
-(BOOL)leftAvailable;
-(BOOL)programsListsAreEqual;
-(BOOL)propertyIsAvailable:(NSUInteger)arg0 forEar:(int)arg1 ;
-(BOOL)rightAvailable;
-(BOOL)shouldDisplayCombinedVolume;
-(BOOL)shouldOnlyShowIndividualVolumesForProperty:(NSUInteger)arg0 ;
-(BOOL)showCombinedPrograms;
-(BOOL)supportsCombinedVolumesForProperty:(NSUInteger)arg0 ;
-(CGFloat)combinedVolumeForProperty:(NSUInteger)arg0 ;
-(id)_valueForProperty:(NSUInteger)arg0 ;
-(id)combinedPrograms;
-(id)init;
-(id)initWithPersistentRepresentation:(id)arg0 ;
-(id)initWithRemoteRepresentation:(id)arg0 andDeviceID:(id)arg1 ;
-(id)programAtIndex:(unsigned char)arg0 forEar:(int)arg1 ;
-(id)programs;
-(id)selectedProgramIndexes;
-(id)selectedPrograms;
-(id)valueForProperty:(NSUInteger)arg0 ;
-(void)_delayWriteProperties;
-(void)_updateSelectedProgramsProperties;
-(void)_writeAllProgramSelectionsToPeripheral;
-(void)connect;
-(void)dealloc;
-(void)disconnectAndUnpair:(BOOL)arg0 ;
-(void)loadRequiredProperties;
-(void)selectProgram:(id)arg0 forEar:(int)arg1 ;
-(void)setValue:(id)arg0 forProperty:(NSUInteger)arg1 ;
-(void)writeVolumesForProperty:(NSUInteger)arg0 ;


@end


#endif