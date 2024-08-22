// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICEPAIRING_H
#define MTSDEVICEPAIRING_H

@class NSArray, NSString, NSNumber, MTRSetupPayload, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MTSDevicePairingFabric.h"

@interface MTSDevicePairing : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSNumber *deviceType; // ivar: _deviceType
@property (readonly, copy) MTSDevicePairingFabric *fabric; // ivar: _fabric
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) NSNumber *nodeID; // ivar: _nodeID
@property (readonly, copy) NSString *privateDescription;
@property (readonly) NSNumber *productID; // ivar: _productID
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) MTRSetupPayload *setupPayload; // ivar: _setupPayload
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSNumber *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
+(id)UUIDFromNodeID:(id)arg0 fabric:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNodeID:(id)arg0 fabric:(id)arg1 ;
-(id)initWithUUID:(id)arg0 nodeID:(id)arg1 serialNumber:(id)arg2 vendorID:(id)arg3 productID:(id)arg4 deviceType:(id)arg5 name:(id)arg6 setupPayload:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif