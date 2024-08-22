// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPBLESERVICECACHE_H
#define HAPBLESERVICECACHE_H

@class HMFObject, NSMutableArray, NSArray, NSNumber, NSUUID;
@protocol NSSecureCoding;



@interface HAPBLEServiceCache : HMFObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *cachedCharacteristics; // ivar: _cachedCharacteristics
@property (retain, nonatomic) NSArray *linkedServices; // ivar: _linkedServices
@property (readonly, nonatomic) NSNumber *serviceInstanceId; // ivar: _serviceInstanceId
@property (nonatomic) NSUInteger serviceInstanceOrder; // ivar: _serviceInstanceOrder
@property (nonatomic) NSUInteger serviceProperties; // ivar: _serviceProperties
@property (readonly, nonatomic) NSUUID *serviceUUID; // ivar: _serviceUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceUUID:(id)arg0 instanceId:(id)arg1 instanceOrder:(NSUInteger)arg2 serviceProperties:(NSUInteger)arg3 linkedServices:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithCharacteristic:(id)arg0 ;
-(void)updateWithService:(id)arg0 ;


@end


#endif