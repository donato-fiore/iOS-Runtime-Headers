// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCOREMLFEATUREVALUEOBSERVATION_H
#define VNCOREMLFEATUREVALUEOBSERVATION_H

@class NSString, MLFeatureValue;


#import "VNObservation.h"

@interface VNCoreMLFeatureValueObservation : VNObservation

@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, copy, nonatomic) MLFeatureValue *featureValue; // ivar: _featureValue


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 featureName:(id)arg1 featureValue:(id)arg2 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif