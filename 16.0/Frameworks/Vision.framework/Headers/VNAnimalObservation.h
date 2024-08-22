// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNANIMALOBSERVATION_H
#define VNANIMALOBSERVATION_H

@protocol VNEntityIdentificationModelObservation;


#import "VNRecognizedObjectObservation.h"
#import "VNAnimalprint.h"

@interface VNAnimalObservation : VNRecognizedObjectObservation <VNEntityIdentificationModelObservation>

 {
    VNAnimalprint *_animalprint;
}


@property (readonly, nonatomic) VNAnimalprint *animalprint;


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithAnimalprint:(id)arg0 confidence:(float)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 boundingBox:(struct CGRect )arg1 confidence:(float)arg2 labels:(id)arg3 animalprint:(id)arg4 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif