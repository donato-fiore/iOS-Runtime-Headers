// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPBLECHARACTERISTICCACHE_H
#define HAPBLECHARACTERISTICCACHE_H

@class HMFObject, NSNumber, NSUUID;
@protocol NSSecureCoding;


#import "HAPCharacteristicMetadata.h"

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *characteristicInstanceId; // ivar: _characteristicInstanceId
@property (retain, nonatomic) HAPCharacteristicMetadata *characteristicMetadata; // ivar: _characteristicMetadata
@property (nonatomic) NSUInteger characteristicProperties; // ivar: _characteristicProperties
@property (readonly, nonatomic) NSUUID *characteristicUUID; // ivar: _characteristicUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCharacteristicUUID:(id)arg0 instanceId:(id)arg1 characteristicProperties:(NSUInteger)arg2 characteristicMetadata:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithCharacteristic:(id)arg0 ;


@end


#endif