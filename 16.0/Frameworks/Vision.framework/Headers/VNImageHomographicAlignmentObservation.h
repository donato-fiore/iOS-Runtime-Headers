// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEHOMOGRAPHICALIGNMENTOBSERVATION_H
#define VNIMAGEHOMOGRAPHICALIGNMENTOBSERVATION_H



#import "VNImageAlignmentObservation.h"

@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) ? warpTransform; // ivar: _warpTransform


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif