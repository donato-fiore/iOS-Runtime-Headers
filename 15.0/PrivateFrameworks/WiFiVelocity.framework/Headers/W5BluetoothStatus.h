// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef W5BLUETOOTHSTATUS_H
#define W5BLUETOOTHSTATUS_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (nonatomic) BOOL isConnectable; // ivar: _isConnectable
@property (nonatomic) BOOL isDiscoverable; // ivar: _isDiscoverable
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (nonatomic) BOOL powerOn; // ivar: _powerOn


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBluetoothStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif