// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXFAKEPSAPDEVICE_H
#define AXFAKEPSAPDEVICE_H

@class NSMutableArray, NSString, CBPeripheral, NSArray;


#import "AXPSAPDevice.h"

@interface AXFakePSAPDevice : AXPSAPDevice {
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    id *_writeBlock;
}


@property (nonatomic) BOOL connected; // ivar: _connected
@property (nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (nonatomic) NSUInteger excludedProperties; // ivar: _excludedProperties
@property (nonatomic) BOOL isConnecting; // ivar: _isConnecting
@property (retain, nonatomic) NSString *leftFirmwareVersion; // ivar: _leftFirmwareVersion
@property (retain, nonatomic) NSString *leftHardwareVersion; // ivar: _leftHardwareVersion
@property (retain, nonatomic) CBPeripheral *leftPeripheral; // ivar: leftPeripheral
@property (retain, nonatomic) NSString *leftUUID; // ivar: _leftUUID
@property (retain, nonatomic) NSArray *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSArray *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *rightFirmwareVersion; // ivar: _rightFirmwareVersion
@property (retain, nonatomic) NSString *rightHardwareVersion; // ivar: _rightHardwareVersion
@property (retain, nonatomic) CBPeripheral *rightPeripheral; // ivar: rightPeripheral
@property (retain, nonatomic) NSString *rightUUID; // ivar: _rightUUID
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)deviceSupportsProperty:(NSUInteger)arg0 ;
-(BOOL)didLoadBasicProperties;
-(BOOL)didLoadRequiredProperties;
-(BOOL)hasConnection;
-(BOOL)isConnected;
-(BOOL)isFakeDevice;
-(BOOL)isLeftConnected;
-(BOOL)isPersistent;
-(BOOL)isRightConnected;
-(BOOL)leftAvailable;
-(BOOL)programsListsAreEqual;
-(BOOL)propertyIsAvailable:(NSUInteger)arg0 forEar:(int)arg1 ;
-(BOOL)rightAvailable;
-(BOOL)showCombinedPrograms;
-(NSUInteger)availablePropertiesForPeripheral:(id)arg0 ;
-(id)initWithDeviceType:(NSUInteger)arg0 ;
-(id)leftPrograms;
-(id)persistentRepresentation;
-(id)rightPrograms;
-(id)valueForProperty:(NSUInteger)arg0 ;
-(void)connect;
-(void)createPrograms;
-(void)dealloc;
-(void)disconnect;
-(void)persist;
-(void)registerWriteBlock:(id)arg0 ;
-(void)setNewName:(id)arg0 ;
-(void)setValue:(id)arg0 forProperty:(NSUInteger)arg1 ;
-(void)writeInt:(unsigned char)arg0 toEar:(int)arg1 forProperty:(NSUInteger)arg2 ;
-(void)writeSignedInt:(char)arg0 toEar:(int)arg1 forProperty:(NSUInteger)arg2 ;


@end


#endif