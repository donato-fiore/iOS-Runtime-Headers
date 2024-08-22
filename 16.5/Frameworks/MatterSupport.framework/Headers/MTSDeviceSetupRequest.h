// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPREQUEST_H
#define MTSDEVICESETUPREQUEST_H

@class NSDictionary, NSString, MTRSetupPayload;
@protocol NSCopying, NSSecureCoding, MTDeviceSetupRequestSwiftWrapper;

#import <Foundation/Foundation.h>

#import "MTSDeviceSetupTopology.h"

@interface MTSDeviceSetupRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSString *ecosystemName;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly) BOOL shouldScanNetworks;
@property (readonly) MTSDeviceSetupTopology *topology;
@property (readonly) NSObject<MTDeviceSetupRequestSwiftWrapper> *wrappedRequest; // ivar: _wrappedRequest


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldShowDeviceWithUUID:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 serialNumber:(id)arg3 ;
-(BOOL)shouldShowDeviceWithUUID:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 serialNumber:(id)arg3 rootPublicKey:(id)arg4 nodeID:(id)arg5 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithEcosystemName:(id)arg0 homeNames:(id)arg1 blockedDevicePairings:(id)arg2 ;
-(id)initWithSerializedRequest:(id)arg0 ;
-(id)initWithWrappedRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif