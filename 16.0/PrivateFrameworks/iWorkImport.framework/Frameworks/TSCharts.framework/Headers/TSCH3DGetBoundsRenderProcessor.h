// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DGETBOUNDSRENDERPROCESSOR_H
#define TSCH3DGETBOUNDSRENDERPROCESSOR_H



#import "TSCH3DTransformGeometryRenderProcessor.h"

@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    ObjectBounds _bounds;
}


@property (readonly, nonatomic) *void bounds;
@property (nonatomic) int mode; // ivar: _mode


-(id)init;
-(void)extend2DProjectedBounds:(*void)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif