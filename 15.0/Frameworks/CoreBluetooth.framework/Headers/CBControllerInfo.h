// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBCONTROLLERINFO_H
#define CBCONTROLLERINFO_H

@class NSArray, NSString, NSData;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBControllerInfo : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSArray *audioLinkQualityArray; // ivar: _audioLinkQualityArray
@property (nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) NSString *chipsetID; // ivar: _chipsetID
@property (nonatomic) int discoverableState; // ivar: _discoverableState
@property (copy, nonatomic) NSString *firmwareName; // ivar: _firmwareName
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (copy, nonatomic) NSData *hardwareAddressData; // ivar: _hardwareAddressData
@property (nonatomic) char hciTransportType; // ivar: _hciTransportType
@property (nonatomic) int inquiryState; // ivar: _inquiryState
@property (nonatomic) unsigned char lmpVersion; // ivar: _lmpVersion
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (nonatomic) unsigned int supportedServices; // ivar: _supportedServices
@property (nonatomic) unsigned short vendorID; // ivar: _vendorID
@property (nonatomic) unsigned char vendorIDSource; // ivar: _vendorIDSource


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif