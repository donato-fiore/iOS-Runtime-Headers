// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERPROP_H
#define AVTSTICKERPROP_H

@class NSArray, NSString, SCNNode;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVTStickerProp : NSObject <NSCopying>

 {
    ? _position;
    ? _scale;
    ? _rotation;
}


@property (readonly, nonatomic) NSArray *adjustments; // ivar: _adjustments
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SCNNode *node; // ivar: _node
@property (readonly, nonatomic) NSString *nodeName;
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly, nonatomic) BOOL orientToCamera; // ivar: _orientToCamera
@property (copy, nonatomic) NSString *originalName; // ivar: _originalName
@property (readonly, nonatomic) NSArray *palettesDescriptions; // ivar: _palettesDescriptions
@property ? position;
@property (readonly, nonatomic) BOOL renderLast; // ivar: _renderLast
@property ? rotation;
@property ? scale;
@property (copy, nonatomic) NSArray *shaderModifiers; // ivar: _shaderModifiers
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(BOOL)getOrientToCameraInDictionary:(id)arg0 ;
+(BOOL)getRenderLastInDictionary:(id)arg0 ;
+(float)getOpacityInDictionary:(id)arg0 ;
+(id)cacheKeyForSize:(struct CGSize )arg0 position:(id)arg1 rotation:(id)arg2 scalepalettesDescriptionsfilePath;
+(id)getPositionInDictionary;
+(id)getRotationInDictionary;
+(id)getScaleInDictionary;
+(struct CGSize )getSizeInDictionary:(id)arg0 ;
+(void)applyPalettesForAvatar:(id)arg0 toNode:(id)arg1 palettesDescriptions:(id)arg2 ;
-(id)cloneWithShaderModifiers:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(BOOL)arg1 position:(BOOL)arg2 renderLast:(id)arg3 orientToCamera:(id)arg4 rotation:(id)arg5 palettesDescriptionsshaderModifiersadjustments;
-(void)applyCamera:(id)arg0 toNode:(id)arg1 distToHead:(CGFloat)arg2 ;
-(void)buildNodeForAvatar:(id)arg0 withCamera:(id)arg1 options:(id)arg2 forExport:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)updateNode:(id)arg0 withContentAtTime:(struct ? )arg1 ;


@end


#endif