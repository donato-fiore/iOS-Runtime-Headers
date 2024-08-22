// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRECOGNIZEDOBJECTOBSERVATION_H
#define VNRECOGNIZEDOBJECTOBSERVATION_H

@class NSArray;


#import "VNDetectedObjectObservation.h"
#import "VNPixelBufferObservation.h"

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation

@property (readonly, copy, nonatomic) NSArray *labels; // ivar: _labels
@property (readonly) VNPixelBufferObservation *segmentationMask; // ivar: _segmentationMask


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 boundingBox:(struct CGRect )arg1 confidence:(float)arg2 labels:(id)arg3 segmentationMask:(id)arg4 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 confidence:(float)arg2 labels:(id)arg3 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif