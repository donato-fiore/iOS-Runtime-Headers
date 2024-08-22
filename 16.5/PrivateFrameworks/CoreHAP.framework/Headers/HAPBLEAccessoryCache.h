// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPBLEACCESSORYCACHE_H
#define HAPBLEACCESSORYCACHE_H

@class HMFObject, NSMutableArray, NSNumber, NSString;
@protocol NSSecureCoding;


#import "HAPBLEPeripheralInfo.h"

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableArray *cachedServices; // ivar: _cachedServices
@property (nonatomic) NSInteger discoveryVersion; // ivar: _discoveryVersion
@property (retain, nonatomic) NSNumber *lastKeyBagIdentityIndexFailingPV; // ivar: _lastKeyBagIdentityIndexFailingPV
@property (readonly, nonatomic) NSNumber *metadataVersion; // ivar: _metadataVersion
@property (readonly, nonatomic) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // ivar: _peripheralInfo
@property (copy, nonatomic) id *saveBlock; // ivar: _saveBlock


+(BOOL)supportsSecureCoding;
+(NSInteger)currentDiscoveryVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)getCachedServiceWithUUID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairingIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)save;
-(void)updateCurrentPairingIdentityIndexIfNeededForKeyBag:(id)arg0 ;
-(void)updateWithPeripheralInfo:(id)arg0 ;
-(void)updateWithSaveBlock:(id)arg0 ;
-(void)updateWithService:(id)arg0 ;


@end


#endif