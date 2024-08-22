// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTIONPRINTOBSERVATION_H
#define VNDETECTIONPRINTOBSERVATION_H



#import "VNObservation.h"
#import "VNDetectionprint.h"

@interface VNDetectionprintObservation : VNObservation

@property (readonly, copy) VNDetectionprint *detectionprint; // ivar: _detectionprint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 detectionprint:(id)arg1 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif