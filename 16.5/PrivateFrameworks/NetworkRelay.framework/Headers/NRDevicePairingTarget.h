// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRDEVICEPAIRINGTARGET_H
#define NRDEVICEPAIRINGTARGET_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NRDevicePairingCandidate.h"
#import "NRDeviceOperationalProperties.h"
#import "NRDevicePairingProperties.h"

@interface NRDevicePairingTarget : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *authData; // ivar: _authData
@property (nonatomic) NSUInteger authMethod; // ivar: _authMethod
@property (retain, nonatomic) NRDevicePairingCandidate *candidate; // ivar: _candidate
@property (copy, nonatomic) NRDeviceOperationalProperties *operationalProperties; // ivar: _operationalProperties
@property (copy, nonatomic) NRDevicePairingProperties *properties; // ivar: _properties


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif