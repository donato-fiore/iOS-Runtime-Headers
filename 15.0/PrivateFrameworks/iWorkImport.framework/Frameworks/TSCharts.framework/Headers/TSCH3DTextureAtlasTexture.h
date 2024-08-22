// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DTEXTUREATLASTEXTURE_H
#define TSCH3DTEXTUREATLASTEXTURE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSCH3DTextureAtlasTextureResource.h"

@interface TSCH3DTextureAtlasTexture : NSObject {
    float _samples;
    NSMutableArray *_labels;
    vector<glm::detail::tvec2<int>, std::allocator<glm::detail::tvec2<int>>> _positions;
    NSInteger _currentxpos;
    NSInteger _currentypos;
    NSInteger _currentheight;
    TSCH3DTextureAtlasTextureResource *_resource;
}


@property (readonly, nonatomic) tvec2<int> size; // ivar: _size


-(id)getTextureDataBuffer;
-(id)initWithSize:(struct tvec2<int> )arg0 ;
-(id)resource;
-(struct tvec2<int> )addLabel:(id)arg0 ;
-(void)p_invalidateResource;


@end


#endif