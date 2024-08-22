// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTCLOUDDEVICESUPPORTINFORMATION_H
#define BTCLOUDDEVICESUPPORTINFORMATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BTCloudDeviceSupportInformation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *ancAssetVersion; // ivar: _ancAssetVersion
@property (retain, nonatomic) NSString *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) NSString *budsFirmwareVersion; // ivar: _budsFirmwareVersion
@property (retain, nonatomic) NSString *caseFirmwareVersion; // ivar: _caseFirmwareVersion
@property (retain, nonatomic) NSString *caseName; // ivar: _caseName
@property (retain, nonatomic) NSString *caseSerialNumber; // ivar: _caseSerialNumber
@property (retain, nonatomic) NSString *hardwareVersion; // ivar: _hardwareVersion
@property (retain, nonatomic) NSString *leftBudSerialNumber; // ivar: _leftBudSerialNumber
@property (retain, nonatomic) NSString *rightBudSerialNumber; // ivar: _rightBudSerialNumber


+(BOOL)supportsSecureCoding;
+(id)deviceSupportInformationWithBluetoothAddress:(id)arg0 ;
-(id)description;
-(id)initWithBluetoothAddress:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif