// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTSHADOWSPROPERTIESINTERNAL_H
#define TSCH3DCHARTSHADOWSPROPERTIESINTERNAL_H

@protocol TSCH3DShadowsRenderer;

#import <Foundation/Foundation.h>

#import "TSCH3DCamera.h"
#import "TSCH3DDataBufferResource.h"

@interface TSCH3DChartShadowsPropertiesInternal : NSObject {
    box<glm::detail::tvec3<float>> _shadowPlanePadding;
}


@property (retain, nonatomic) TSCH3DCamera *camera; // ivar: _camera
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) TSCH3DDataBufferResource *fadecoords; // ivar: _fadecoords
@property (retain, nonatomic) TSCH3DDataBufferResource *quad; // ivar: _quad
@property (readonly, nonatomic) NSObject<TSCH3DShadowsRenderer> *renderer; // ivar: _renderer
@property (readonly, nonatomic) BOOL shadowPlaneValid;
@property (retain, nonatomic) TSCH3DDataBufferResource *texcoords; // ivar: _texcoords


-(id)initWithCamera:(id)arg0 renderer:(id)arg1 ;
-(void)invalidate;
-(void)setupResources;


@end


#endif