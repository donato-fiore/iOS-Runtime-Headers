// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGENEURALHASHPRINTOBSERVATION_H
#define VNIMAGENEURALHASHPRINTOBSERVATION_H



#import "VNObservation.h"
#import "VN6Ac6Cyl5O5oK19HboyMBR.h"

@interface VNImageNeuralHashprintObservation : VNObservation

@property (readonly) VN6Ac6Cyl5O5oK19HboyMBR *imageNeuralHashprint; // ivar: _imageNeuralHashprint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 imageNeuralHashprint:(id)arg1 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif