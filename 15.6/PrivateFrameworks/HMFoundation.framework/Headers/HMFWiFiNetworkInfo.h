// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFWIFINETWORKINFO_H
#define HMFWIFINETWORKINFO_H

@class NSString, NSArray;
@protocol HMFObject, NSCopying, NSSecureCoding;


#import "HMFObject.h"
#import "HMFMACAddress.h"

@interface HMFWiFiNetworkInfo : HMFObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy) HMFMACAddress *MACAddress; // ivar: _MACAddress
@property (readonly, copy) NSString *SSID; // ivar: _SSID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNetworkInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMACAddress:(id)arg0 SSID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif