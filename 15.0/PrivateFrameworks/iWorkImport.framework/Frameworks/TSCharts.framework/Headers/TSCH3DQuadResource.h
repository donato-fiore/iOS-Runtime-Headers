// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DQUADRESOURCE_H
#define TSCH3DQUADRESOURCE_H



#import "TSCH3DDataBufferResource.h"

@interface TSCH3DQuadResource : TSCH3DDataBufferResource



+(id)normalized2D;
+(id)normalized3D;
+(id)normalized4D;
+(id)normalizedCenteredCube;
+(id)normalizedCube;
+(id)resourceForBox2:(struct box<glm::detail::tvec2<float>> )arg0 ;


@end


#endif