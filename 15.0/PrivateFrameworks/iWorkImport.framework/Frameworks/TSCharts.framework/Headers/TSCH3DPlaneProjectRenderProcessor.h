// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DPLANEPROJECTRENDERPROCESSOR_H
#define TSCH3DPLANEPROJECTRENDERPROCESSOR_H



#import "TSCH3DTransformGeometryRenderProcessor.h"

@interface TSCH3DPlaneProjectRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    plane<glm::detail::tvec3<float>> _plane;
    tvec3<float> _projPt;
}


@property (readonly, nonatomic) *void bounds; // ivar: _bounds


+(id)processorWithPlane:(*void)arg0 projPt:(*void)arg1 ;
-(id)initWithPlane:(*void)arg0 projPt:(*void)arg1 ;
-(void)submit:(id)arg0 ;


@end


#endif