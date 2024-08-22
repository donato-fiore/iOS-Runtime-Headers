// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPBTLECHARACTERISTICSIGNATURE_H
#define HAPBTLECHARACTERISTICSIGNATURE_H

@class HMFObject, NSUUID, NSNumber;


#import "HAPCharacteristicMetadata.h"

@interface HAPBTLECharacteristicSignature : HMFObject

@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (readonly, nonatomic) HAPCharacteristicMetadata *characteristicMetadata; // ivar: _characteristicMetadata
@property (readonly, nonatomic) NSUInteger characteristicProperties; // ivar: _characteristicProperties
@property (readonly, copy, nonatomic) NSUUID *characteristicType; // ivar: _characteristicType
@property (readonly, copy, nonatomic) NSNumber *serviceInstanceID; // ivar: _serviceInstanceID
@property (readonly, copy, nonatomic) NSUUID *serviceType; // ivar: _serviceType


-(id)initWithCharacteristicType:(id)arg0 serviceInstanceID:(id)arg1 serviceType:(id)arg2 characteristicProperties:(NSUInteger)arg3 characteristicMetadata:(id)arg4 authenticated:(BOOL)arg5 ;


@end


#endif