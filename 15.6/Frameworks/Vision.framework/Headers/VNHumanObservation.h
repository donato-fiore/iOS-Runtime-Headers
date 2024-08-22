// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNHUMANOBSERVATION_H
#define VNHUMANOBSERVATION_H



#import "VNDetectedObjectObservation.h"
#import "VNTorsoprint.h"

@interface VNHumanObservation : VNDetectedObjectObservation

@property (readonly, nonatomic) VNTorsoprint *torsoprint; // ivar: _torsoprint
@property (readonly, nonatomic) BOOL upperBodyOnly; // ivar: _upperBodyOnly


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 boundingBox:(struct CGRect )arg1 upperBodyOnly:(BOOL)arg2 confidence:(float)arg3 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif