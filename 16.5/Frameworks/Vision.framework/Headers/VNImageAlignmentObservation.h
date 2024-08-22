// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGEALIGNMENTOBSERVATION_H
#define VNIMAGEALIGNMENTOBSERVATION_H



#import "VNObservation.h"
#import "VNImageRegistrationSignature.h"

@interface VNImageAlignmentObservation : VNObservation

@property (nonatomic) CGAffineTransform alignmentTransform;
@property (retain, nonatomic) VNImageRegistrationSignature *floatingImageSignature; // ivar: _floatingImageSignature
@property (retain, nonatomic) VNImageRegistrationSignature *referenceImageSignature; // ivar: _referenceImageSignature


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif