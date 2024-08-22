// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPDISCOVEREDACCESSORY_H
#define SPDISCOVEREDACCESSORY_H

@class NSUUID, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPDiscoveredAccessoryMetadata.h"
#import "SPDiscoveredAccessoryProductInformation.h"

@interface SPDiscoveredAccessory : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *discoveredMetadata; // ivar: _discoveredMetadata
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isBatteryTooLow; // ivar: _isBatteryTooLow
@property (copy, nonatomic) NSData *macAddress; // ivar: _macAddress
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation; // ivar: _productInformation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif