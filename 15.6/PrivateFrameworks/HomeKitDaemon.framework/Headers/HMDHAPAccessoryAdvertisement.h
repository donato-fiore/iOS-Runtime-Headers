// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPACCESSORYADVERTISEMENT_H
#define HMDHAPACCESSORYADVERTISEMENT_H

@class NSData;


#import "HMDAccessoryAdvertisement.h"

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement

@property (readonly, nonatomic) BOOL pairingPresent; // ivar: _pairingPresent
@property (retain, nonatomic) NSData *setupHash; // ivar: _setupHash


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 categoryIdentifier:(id)arg2 pairingPresent:(BOOL)arg3 setupHash:(id)arg4 ;


@end


#endif