// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLTEXTURESAMPLER_H
#define MDLTEXTURESAMPLER_H


#import <Foundation/Foundation.h>

#import "MDLTextureFilter.h"
#import "MDLTexture.h"
#import "MDLTransform.h"

@interface MDLTextureSampler : NSObject

@property (retain, nonatomic) MDLTextureFilter *hardwareFilter; // ivar: hardwareFilter
@property (nonatomic) NSUInteger mappingChannel; // ivar: mappingChannel
@property (retain, nonatomic) MDLTexture *texture; // ivar: texture
@property (nonatomic) NSInteger textureComponents; // ivar: textureComponents
@property (retain, nonatomic) MDLTransform *transform; // ivar: transform


-(id)init;


@end


#endif