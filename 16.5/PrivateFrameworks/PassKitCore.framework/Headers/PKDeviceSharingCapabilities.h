// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDEVICESHARINGCAPABILITIES_H
#define PKDEVICESHARINGCAPABILITIES_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirement.h"

@interface PKDeviceSharingCapabilities : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *deviceRegion; // ivar: _deviceRegion
@property (retain, nonatomic) PKOSVersionRequirement *fromDeviceVersion; // ivar: _fromDeviceVersion
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (nonatomic) BOOL supportsManatee; // ivar: _supportsManatee


+(BOOL)supportsSecureCoding;
+(id)deviceSharingCapbilitesRequestWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif