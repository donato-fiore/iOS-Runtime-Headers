// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTEDOBJECTOBSERVATION_H
#define VNDETECTEDOBJECTOBSERVATION_H

@class NSUUID;


#import "VNObservation.h"
#import "VNPixelBufferObservation.h"

@interface VNDetectedObjectObservation : VNObservation

@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) VNPixelBufferObservation *globalSegmentationMask; // ivar: _globalSegmentationMask
@property (copy) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)observationWithBoundingBox:(struct CGRect )arg0 ;
+(id)observationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 boundingBox:(struct CGRect )arg1 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif