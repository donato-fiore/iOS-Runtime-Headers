// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRPAIREDDEVICE_H
#define NRPAIREDDEVICE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NRDevicePairingTarget.h"
#import "NRDeviceIdentifier.h"

@interface NRPairedDevice : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NRDevicePairingTarget *device; // ivar: _device
@property (copy, nonatomic) NRDeviceIdentifier *nrDeviceIdentifier; // ivar: _nrDeviceIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif