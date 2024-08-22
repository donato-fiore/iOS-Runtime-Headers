// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DTEXTUREATLAS_H
#define TSCH3DTEXTUREATLAS_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCH3DTextureAtlas : NSObject {
    NSMutableDictionary *_cachedLabels;
    NSMutableArray *_textures;
}


@property (readonly, nonatomic) float samples; // ivar: _samples


+(id)atlas;
+(id)atlasWithSamples:(float)arg0 ;
-(id)initWithSamples:(float)arg0 ;
-(id)textureAtIndex:(NSInteger)arg0 ;
-(struct tvec2<int> )textureSizeAtIndex:(NSInteger)arg0 ;
-(struct tvec3<int> )p_addLabel:(id)arg0 ;
-(struct tvec3<int> )positionForLabel:(id)arg0 ;


@end


#endif