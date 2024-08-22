// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSORYPAIRINGREQUEST_H
#define HAPACCESSORYPAIRINGREQUEST_H

@class HMFObject, NSNumber, NSString, NSData;
@protocol NSCopying;


#import "HAPPairingIdentity.h"

@interface HAPAccessoryPairingRequest : HMFObject <NSCopying>



@property (copy) NSNumber *chipFabricIndex; // ivar: _chipFabricIndex
@property (copy) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (copy) NSData *ownershipToken; // ivar: _ownershipToken
@property (copy) HAPPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (copy) NSData *psk; // ivar: _psk
@property BOOL requiresUserConsent; // ivar: _requiresUserConsent
@property (copy) NSString *ssid; // ivar: _ssid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif