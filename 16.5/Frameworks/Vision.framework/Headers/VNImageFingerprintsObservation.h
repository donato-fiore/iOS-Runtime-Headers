// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGEFINGERPRINTSOBSERVATION_H
#define VNIMAGEFINGERPRINTSOBSERVATION_H

@class NSArray;


#import "VNObservation.h"

@interface VNImageFingerprintsObservation : VNObservation

@property (readonly, copy) NSArray *fingerprintHashes; // ivar: _fingerprintHashes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 fingerprintHashes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif