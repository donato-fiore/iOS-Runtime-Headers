// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef W5BLUETOOTHDEVICE_H
#define W5BLUETOOTHDEVICE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5BluetoothDevice : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (copy, nonatomic) NSString *afhMap; // ivar: _afhMap
@property (nonatomic) NSInteger connectionMode; // ivar: _connectionMode
@property (nonatomic) NSUInteger connectionModeInterval; // ivar: _connectionModeInterval
@property (nonatomic) BOOL isAppleDevice; // ivar: _isAppleDevice
@property (nonatomic) BOOL isCloudPaired; // ivar: _isCloudPaired
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (nonatomic) BOOL isLowEnergy; // ivar: _isLowEnergy
@property (nonatomic) BOOL isPaired; // ivar: _isPaired
@property (nonatomic) NSUInteger lmpSubversion; // ivar: _lmpSubversion
@property (nonatomic) NSUInteger lmpVersion; // ivar: _lmpVersion
@property (nonatomic) NSUInteger majorClass; // ivar: _majorClass
@property (nonatomic) NSInteger manufacturer; // ivar: _manufacturer
@property (nonatomic) NSUInteger minorClass; // ivar: _minorClass
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger role; // ivar: _role
@property (nonatomic) NSInteger rssi; // ivar: _rssi


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBluetoothDevice:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif