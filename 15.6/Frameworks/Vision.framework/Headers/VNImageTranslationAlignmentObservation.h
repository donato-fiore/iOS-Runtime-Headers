// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNIMAGETRANSLATIONALIGNMENTOBSERVATION_H
#define VNIMAGETRANSLATIONALIGNMENTOBSERVATION_H



#import "VNImageAlignmentObservation.h"

@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) CGAffineTransform alignmentTransform; // ivar: _alignmentTransform


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif