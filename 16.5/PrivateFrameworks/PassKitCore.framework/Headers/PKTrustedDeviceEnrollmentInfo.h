// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRUSTEDDEVICEENROLLMENTINFO_H
#define PKTRUSTEDDEVICEENROLLMENTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTrustedDeviceEnrollmentInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSString *deviceSerialNumber; // ivar: _deviceSerialNumber
@property (retain, nonatomic) NSString *deviceUDID; // ivar: _deviceUDID
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier
@property (nonatomic) BOOL supportsAccessExpressMode; // ivar: _supportsAccessExpressMode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif