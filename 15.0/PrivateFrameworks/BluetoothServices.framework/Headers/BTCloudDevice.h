// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BTCLOUDDEVICE_H
#define BTCLOUDDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BTCloudDevice : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (retain, nonatomic) NSString *productID; // ivar: _productID
@property (retain, nonatomic) NSString *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
+(id)deviceWithBluetoothAddress:(id)arg0 ;
-(id)description;
-(id)initWithBluetoothAddress:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif