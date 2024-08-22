// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMDREGISTEREDIDENTITY_H
#define __HMDREGISTEREDIDENTITY_H

@class HMFObject, HMFPairingIdentity, NSMutableArray;



@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity; // ivar: _identity
@property (readonly) NSMutableArray *registeredObjects; // ivar: _registeredObjects


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithIdentity:(id)arg0 ;


@end


#endif