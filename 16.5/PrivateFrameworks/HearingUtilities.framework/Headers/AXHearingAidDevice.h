// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXHEARINGAIDDEVICE_H
#define AXHEARINGAIDDEVICE_H

@class AXDispatchTimer, NSMutableDictionary, NSString, NSDate, CBPeripheral, NSArray, NSMutableArray;
@protocol CBPeripheralDelegate, AXHADeviceProtocol;

#import <Foundation/Foundation.h>

#import "AXHearingAidMode.h"

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate, AXHADeviceProtocol>

 {
    CGFloat _leftVolume;
    CGFloat _rightVolume;
    BOOL _finishedLoading;
    NSInteger initialLoadToken;
    AXDispatchTimer *_propertyWriteTimer;
    BOOL _isListeningForStreamingChanges;
    *OpaqueIOPSPowerSourceID _leftPowerSouceID;
    *OpaqueIOPSPowerSourceID _rightPowerSourceID;
    NSMutableDictionary *_leftPowerSouceDictionary;
    NSMutableDictionary *_rightPowerSourceDictionary;
}


@property (nonatomic) int availableEars; // ivar: _availableEars
@property (nonatomic) int availableInputEars; // ivar: _availableInputEars
@property (retain, nonatomic) AXHearingAidMode *currentLeftProgram; // ivar: currentLeftProgram
@property (retain, nonatomic) AXHearingAidMode *currentLeftStreamingProgram; // ivar: currentLeftStreamingProgram
@property (retain, nonatomic) AXHearingAidMode *currentRightProgram; // ivar: currentRightProgram
@property (retain, nonatomic) AXHearingAidMode *currentRightStreamingProgram; // ivar: currentRightStreamingProgram
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSString *deviceUUID;
@property (nonatomic) int earsSupportingWatch; // ivar: _earsSupportingWatch
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isConnecting; // ivar: isConnecting
@property (nonatomic) BOOL isPaired; // ivar: isPaired
@property (nonatomic) BOOL isPersistent; // ivar: isPersistent
@property (nonatomic) BOOL keepInSync; // ivar: _keepInSync
@property (nonatomic) char leftBass; // ivar: _leftBass
@property (nonatomic) CGFloat leftBatteryLevel; // ivar: leftBatteryLevel
@property (retain, nonatomic) NSDate *leftBatteryLowDate; // ivar: _leftBatteryLowDate
@property (retain, nonatomic) NSString *leftFirmwareVersion; // ivar: leftFirmwareVersion
@property (retain, nonatomic) NSString *leftHardwareVersion; // ivar: leftHardwareVersion
@property (nonatomic) NSUInteger leftLoadedProperties; // ivar: leftLoadedProperties
@property (nonatomic) CGFloat leftMicrophoneVolume; // ivar: _leftMicrophoneVolume
@property (nonatomic) short leftMicrophoneVolumeSteps; // ivar: _leftMicrophoneVolumeSteps
@property (nonatomic) CGFloat leftMixedVolume; // ivar: _leftMixedVolume
@property (nonatomic) short leftMixedVolumeSteps; // ivar: _leftMixedVolumeSteps
@property (retain, nonatomic) CBPeripheral *leftPeripheral; // ivar: leftPeripheral
@property (nonatomic) BOOL leftPeripheralPaired; // ivar: _leftPeripheralPaired
@property (retain, nonatomic) NSString *leftPeripheralUUID; // ivar: leftPeripheralUUID
@property (nonatomic) unsigned int leftPresetBitmask; // ivar: _leftPresetBitmask
@property (nonatomic) unsigned int leftProgramVersion; // ivar: leftProgramVersion
@property (copy, nonatomic) NSArray *leftPrograms; // ivar: leftPrograms
@property (retain, nonatomic) NSMutableDictionary *leftPropertiesLoadCount; // ivar: leftPropertiesLoadCount
@property (retain, nonatomic) AXHearingAidMode *leftSelectedProgram; // ivar: _leftSelectedProgram
@property (retain, nonatomic) AXHearingAidMode *leftSelectedStreamingProgram; // ivar: _leftSelectedStreamingProgram
@property (nonatomic) CGFloat leftSensitivity; // ivar: _leftSensitivity
@property (nonatomic) short leftSensitivitySteps; // ivar: _leftSensitivitySteps
@property (nonatomic) CGFloat leftStreamVolume; // ivar: _leftStreamVolume
@property (nonatomic) short leftStreamVolumeSteps; // ivar: _leftStreamVolumeSteps
@property (nonatomic) char leftTreble; // ivar: _leftTreble
@property (retain, nonatomic) NSString *leftUUID; // ivar: leftUUID
@property (nonatomic) NSUInteger leftWriteRequestProperties; // ivar: leftWriteRequestProperties
@property (nonatomic) NSUInteger leftWriteResponseProperties; // ivar: _leftWriteResponseProperties
@property (retain, nonatomic) NSMutableArray *manufacturer; // ivar: manufacturer
@property (retain, nonatomic) NSMutableArray *model; // ivar: model
@property (retain, nonatomic) NSString *name; // ivar: name
@property (nonatomic) BOOL requiresBinauralStreaming; // ivar: _requiresBinauralStreaming
@property (nonatomic) BOOL requiresCombinedPresets; // ivar: _requiresCombinedPresets
@property (nonatomic) BOOL requiresCombinedVolumes; // ivar: _requiresCombinedVolumes
@property (nonatomic) char rightBass; // ivar: _rightBass
@property (nonatomic) CGFloat rightBatteryLevel; // ivar: rightBatteryLevel
@property (retain, nonatomic) NSDate *rightBatteryLowDate; // ivar: _rightBatteryLowDate
@property (retain, nonatomic) NSString *rightFirmwareVersion; // ivar: rightFirmwareVersion
@property (retain, nonatomic) NSString *rightHardwareVersion; // ivar: rightHardwareVersion
@property (nonatomic) NSUInteger rightLoadedProperties; // ivar: rightLoadedProperties
@property (nonatomic) CGFloat rightMicrophoneVolume; // ivar: _rightMicrophoneVolume
@property (nonatomic) short rightMicrophoneVolumeSteps; // ivar: _rightMicrophoneVolumeSteps
@property (nonatomic) CGFloat rightMixedVolume; // ivar: _rightMixedVolume
@property (nonatomic) short rightMixedVolumeSteps; // ivar: _rightMixedVolumeSteps
@property (retain, nonatomic) CBPeripheral *rightPeripheral; // ivar: rightPeripheral
@property (nonatomic) BOOL rightPeripheralPaired; // ivar: _rightPeripheralPaired
@property (retain, nonatomic) NSString *rightPeripheralUUID; // ivar: rightPeripheralUUID
@property (nonatomic) unsigned int rightPresetBitmask; // ivar: _rightPresetBitmask
@property (nonatomic) unsigned int rightProgramVersion; // ivar: rightProgramVersion
@property (copy, nonatomic) NSArray *rightPrograms; // ivar: rightPrograms
@property (retain, nonatomic) NSMutableDictionary *rightPropertiesLoadCount; // ivar: rightPropertiesLoadCount
@property (retain, nonatomic) AXHearingAidMode *rightSelectedProgram; // ivar: _rightSelectedProgram
@property (retain, nonatomic) AXHearingAidMode *rightSelectedStreamingProgram; // ivar: _rightSelectedStreamingProgram
@property (nonatomic) CGFloat rightSensitivity; // ivar: _rightSensitivity
@property (nonatomic) short rightSensitivitySteps; // ivar: _rightSensitivitySteps
@property (nonatomic) CGFloat rightStreamVolume; // ivar: _rightStreamVolume
@property (nonatomic) short rightStreamVolumeSteps; // ivar: _rightStreamVolumeSteps
@property (nonatomic) char rightTreble; // ivar: _rightTreble
@property (retain, nonatomic) NSString *rightUUID; // ivar: rightUUID
@property (nonatomic) NSUInteger rightWriteRequestProperties; // ivar: rightWriteRequestProperties
@property (nonatomic) NSUInteger rightWriteResponseProperties; // ivar: _rightWriteResponseProperties
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBinauralStreaming; // ivar: _supportsBinauralStreaming
@property (nonatomic) BOOL supportsCombinedPresets; // ivar: _supportsCombinedPresets
@property (nonatomic) BOOL supportsCombinedVolumes; // ivar: _supportsCombinedVolumes


+(id)characteristicsUUIDs;
+(id)deviceIDFromLeftID:(id)arg0 andRightID:(id)arg1 ;
-(BOOL)addPeripheral:(id)arg0 ;
-(BOOL)addPeripheral:(id)arg0 asLeft:(BOOL)arg1 ;
-(BOOL)containsPeripheralWithUUID:(id)arg0 ;
-(BOOL)deviceSupportsProperty:(NSUInteger)arg0 ;
-(BOOL)didLoadBasicProperties;
-(BOOL)didLoadOptionalBasicProperties;
-(BOOL)didLoadPersistentProperties;
-(BOOL)didLoadRequiredProperties;
-(BOOL)hasConnection;
-(BOOL)isConnected;
-(BOOL)isFakeDevice;
-(BOOL)leftAvailable;
-(BOOL)peripheral:(id)arg0 didLoadProperty:(NSUInteger)arg1 ;
-(BOOL)readsWatchSupportCharacteristic;
-(BOOL)rightAvailable;
-(NSUInteger)availablePropertiesForPeripheral:(id)arg0 ;
-(NSUInteger)deviceType;
-(NSUInteger)peripheral:(id)arg0 propertyForCharacteristic:(id)arg1 ;
-(NSUInteger)requiredProperties;
-(char)signedValueForProperty:(NSUInteger)arg0 andPeripheral:(id)arg1 ;
-(id)deviceDescription;
-(id)initWithLeftDevice:(id)arg0 andRightDevice:(id)arg1 ;
-(id)initWithPeripheral:(id)arg0 ;
-(id)initWithPersistentRepresentation:(id)arg0 ;
-(id)peripheral:(id)arg0 characteristicForProperty:(NSUInteger)arg1 ;
-(id)peripheral:(id)arg0 characteristicForUUID:(id)arg1 ;
-(id)persistentRepresentation;
-(id)programs;
-(id)selectedProgramIndexes;
-(id)selectedPrograms;
-(id)serviceUUID;
-(id)valueForProperty:(NSUInteger)arg0 ;
-(int)connectedEars;
-(unsigned char)volumeValueForProperty:(NSUInteger)arg0 andPeripheral:(id)arg1 ;
-(void)_init;
-(void)_sendDelayedWrites;
-(void)checkPairingStatusWithCompletion:(id)arg0 ;
-(void)connect;
-(void)connectionDidChange;
-(void)dealloc;
-(void)delayWriteProperty:(NSUInteger)arg0 forPeripheral:(id)arg1 ;
-(void)disconnectAndUnpair:(BOOL)arg0 ;
-(void)loadBasicProperties;
-(void)loadFailedProperties;
-(void)loadProperties:(NSUInteger)arg0 forPeripheral:(id)arg1 withRetryPeriod:(CGFloat)arg2 ;
-(void)loadRequiredProperties;
-(void)mateWithDevice:(id)arg0 ;
-(void)pairingDidCompleteForPeripheral:(id)arg0 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didFinishPairingWithResult:(id)arg1 ;
-(void)peripheral:(id)arg0 didInvalidateServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didModifyServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateCharacteristic:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheralDidUnpair:(id)arg0 ;
-(void)peripheralDidUpdateName:(id)arg0 ;
-(void)readProperty:(NSUInteger)arg0 fromPeripheral:(id)arg1 ;
-(void)readValueForCharacteristic:(id)arg0 fromPeripheral:(id)arg1 ;
-(void)selectProgram:(id)arg0 forEar:(int)arg1 ;
-(void)setBass:(char)arg0 forLeft:(BOOL)arg1 ;
-(void)setMixedVolume:(CGFloat)arg0 forLeft:(BOOL)arg1 ;
-(void)setNotify:(BOOL)arg0 forPeripheral:(id)arg1 ;
-(void)setTreble:(char)arg0 forLeft:(BOOL)arg1 ;
-(void)setValue:(id)arg0 forProperty:(NSUInteger)arg1 ;
-(void)updateBatteryServiceForPeripheral:(id)arg0 ;
-(void)updateInputTagsAndReset:(BOOL)arg0 ;
-(void)updateName;
-(void)updateNameWithAdvertisingData:(id)arg0 ;
-(void)watchWristOrientationDidChange:(id)arg0 ;
-(void)writeInt:(unsigned char)arg0 toEar:(int)arg1 forProperty:(NSUInteger)arg2 ;
-(void)writeSignedInt:(char)arg0 toEar:(int)arg1 forProperty:(NSUInteger)arg2 ;
-(void)writeValueForProperty:(NSUInteger)arg0 ;


@end


#endif