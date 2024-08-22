// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAUXILIARYCAPABILITYREQUIREMENTKEYMATERIAL_H
#define PKAUXILIARYCAPABILITYREQUIREMENTKEYMATERIAL_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>


@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject

@property (retain, nonatomic) NSArray *attestation; // ivar: _attestation
@property (retain, nonatomic) NSData *authorization; // ivar: _authorization
@property (retain, nonatomic) NSArray *certificateChain; // ivar: _certificateChain
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (retain, nonatomic) NSArray *secondaryAttestation; // ivar: _secondaryAttestation
@property (retain, nonatomic) NSData *signature; // ivar: _signature


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;


@end


#endif