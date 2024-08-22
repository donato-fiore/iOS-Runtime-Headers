// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLNORMALMAPTEXTURE_H
#define MDLNORMALMAPTEXTURE_H



#import "MDLTexture.h"

@interface MDLNormalMapTexture : MDLTexture {
    float _smoothness;
    float _contrast;
    MDLTexture *_sourceTexture;
}




-(id)generateDataAtLevel:(NSInteger)arg0 selector:(SEL)arg1 ;
-(id)initByGeneratingNormalMapWithTexture:(id)arg0 name:(id)arg1 smoothness:(float)arg2 contrast:(float)arg3 ;


@end


#endif