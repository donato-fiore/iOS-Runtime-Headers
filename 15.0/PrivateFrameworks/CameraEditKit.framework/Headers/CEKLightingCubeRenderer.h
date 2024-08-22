// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEKLIGHTINGCUBERENDERER_H
#define CEKLIGHTINGCUBERENDERER_H


#import <Foundation/Foundation.h>

#import "CEKLightingCube.h"
#import "CEKLightingCubeAppearance.h"

@interface CEKLightingCubeRenderer : NSObject {
    CEKLightingCube *_cube;
    CEKLightingCubeAppearance *_appearance;
    NSInteger _components;
}




-(id)initWithCube:(id)arg0 appearance:(id)arg1 components:(NSInteger)arg2 ;
-(void)renderInContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 stroke:(CGFloat)arg4 ;


@end


#endif