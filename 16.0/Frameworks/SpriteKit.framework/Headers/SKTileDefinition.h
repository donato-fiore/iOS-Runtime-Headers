// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKTILEDEFINITION_H
#define SKTILEDEFINITION_H

@class NSMutableArray, NSString, NSArray, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKTileGroupRule.h"

@interface SKTileDefinition : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_textures;
    NSMutableArray *_normals;
    NSUInteger _orientation;
}


@property (nonatomic) unsigned short currentFrameIndex; // ivar: _currentFrameIndex
@property (nonatomic) float currentFrameTime; // ivar: _currentFrameTime
@property (nonatomic) BOOL flipHorizontally;
@property (nonatomic) BOOL flipVertically;
@property (nonatomic) BOOL frameDidChange; // ivar: _frameDidChange
@property (nonatomic) CGFloat lastTargetTime; // ivar: _lastTargetTime
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL nextFrameAffectsVertexBuffer; // ivar: _nextFrameAffectsVertexBuffer
@property (copy, nonatomic) NSArray *normalTextures;
@property (weak, nonatomic) SKTileGroupRule *parentRule; // ivar: _parentRule
@property (nonatomic) NSUInteger placementWeight; // ivar: _placementWeight
@property (nonatomic) NSUInteger rotation;
@property (nonatomic) CGSize size; // ivar: _size
@property (copy, nonatomic) NSArray *textures;
@property (nonatomic) CGFloat timePerFrame; // ivar: _timePerFrame
@property (retain, nonatomic) NSString *uid; // ivar: _uid
@property (retain, nonatomic) NSMutableDictionary *userData; // ivar: _userData


+(BOOL)supportsSecureCoding;
+(id)tileDefinitionWithTexture:(id)arg0 ;
+(id)tileDefinitionWithTexture:(id)arg0 normalTexture:(id)arg1 size:(struct CGSize )arg2 ;
+(id)tileDefinitionWithTexture:(id)arg0 size:(struct CGSize )arg1 ;
+(id)tileDefinitionWithTextures:(id)arg0 normalTextures:(id)arg1 size:(struct CGSize )arg2 timePerFrame:(CGFloat)arg3 ;
+(id)tileDefinitionWithTextures:(id)arg0 size:(struct CGSize )arg1 timePerFrame:(CGFloat)arg2 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTexture:(id)arg0 ;
-(id)initWithTexture:(id)arg0 normalTexture:(id)arg1 size:(struct CGSize )arg2 ;
-(id)initWithTexture:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithTextures:(id)arg0 normalTextures:(id)arg1 size:(struct CGSize )arg2 timePerFrame:(CGFloat)arg3 ;
-(id)initWithTextures:(id)arg0 size:(struct CGSize )arg1 timePerFrame:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataWithTexture:(id)arg0 normalTexture:(id)arg1 tileName:(id)arg2 size:(struct CGSize )arg3 ;
-(void)setDataWithTextures:(id)arg0 normalTextures:(id)arg1 timePerFrame:(CGFloat)arg2 tileName:(id)arg3 size:(struct CGSize )arg4 ;


@end


#endif