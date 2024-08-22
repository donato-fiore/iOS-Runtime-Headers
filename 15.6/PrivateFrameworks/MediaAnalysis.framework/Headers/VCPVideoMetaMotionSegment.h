// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOMETAMOTIONSEGMENT_H
#define VCPVIDEOMETAMOTIONSEGMENT_H



#import "VCPMetaSegment.h"

@interface VCPVideoMetaMotionSegment : VCPMetaSegment

@property float absMotion; // ivar: _absMotion
@property float stabilityScore; // ivar: _stabilityScore


-(id)initWithAbsMotion:(float)arg0 atTime:(struct ? )arg1 ;
-(void)finalizeAtTime:(struct ? )arg0 ;
-(void)mergeSegment:(id)arg0 ;
-(void)resetSegment:(float)arg0 atTime:(struct ? )arg1 ;
-(void)updateSegment:(float)arg0 atTime:(struct ? )arg1 ;


@end


#endif