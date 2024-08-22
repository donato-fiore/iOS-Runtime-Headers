// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(struct CGAffineTransform )alignmentTransformInTopLeftOrigin:(BOOL)arg0 orientation:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif