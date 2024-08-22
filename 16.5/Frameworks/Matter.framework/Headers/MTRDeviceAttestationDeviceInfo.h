// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICEATTESTATIONDEVICEINFO_H
#define MTRDEVICEATTESTATIONDEVICEINFO_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDeviceAttestationDeviceInfo : NSObject

@property (readonly, nonatomic) NSData *certificateDeclaration; // ivar: _certificateDeclaration
@property (readonly, nonatomic) NSData *dacCertificate; // ivar: _dacCertificate
@property (readonly, nonatomic) NSData *dacPAICertificate; // ivar: _dacPAICertificate
@property (readonly, nonatomic) NSNumber *productID; // ivar: _productID
@property (readonly, nonatomic) NSNumber *vendorID; // ivar: _vendorID


-(id)initWithDACCertificate:(id)arg0 dacPAICertificate:(id)arg1 certificateDeclaration:(id)arg2 ;


@end


#endif