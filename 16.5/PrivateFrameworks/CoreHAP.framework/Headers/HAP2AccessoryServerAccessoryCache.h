// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERACCESSORYCACHE_H
#define HAP2ACCESSORYSERVERACCESSORYCACHE_H

@class NSDictionary, NSNumber;
@protocol NSSecureCoding;


#import "HAP2LoggingObject.h"
#import "HAPBLEPeripheralInfo.h"

@interface HAP2AccessoryServerAccessoryCache : HAP2LoggingObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *accessoryCache; // ivar: _accessoryCache
@property (readonly, nonatomic) NSNumber *metadataVersion; // ivar: _metadataVersion
@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // ivar: _peripheralInfo
@property (retain, nonatomic) NSNumber *sleepInterval; // ivar: _sleepInterval


+(BOOL)supportsSecureCoding;
+(id)accessoryCacheForAccessories:(id)arg0 ;
+(id)peripheralInfoFromMetadata:(id)arg0 ;
-(id)initWithBLEPeripheralInfo:(id)arg0 cachedAccessories:(id)arg1 sleepInterval:(id)arg2 metadataVersion:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 discoveredAccessories:(id)arg1 sleepInterval:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateAccessoryCache;
-(void)updateWithMetadata:(id)arg0 discoveredAccessories:(id)arg1 ;


@end


#endif