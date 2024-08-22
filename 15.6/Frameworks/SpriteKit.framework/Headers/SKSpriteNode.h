// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSPRITENODE_H
#define SKSPRITENODE_H

@class NSDictionary, UIColor, NSString;
@protocol SKWarpable;


#import "SKNode.h"
#import "SKLightNode.h"
#import "SKTexture.h"
#import "SKShader.h"
#import "SKWarpGeometry.h"

@interface SKSpriteNode : SKNode <SKWarpable>

 {
    *void _skcSpriteNode;
    SKLightNode *_light;
}


@property (nonatomic) CGPoint anchorPoint;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) CGRect centerRect;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) CGFloat colorBlendFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int lightingBitMask;
@property (retain, nonatomic) SKTexture *normalTexture;
@property (nonatomic) CGSize repeatTextureSize;
@property (retain, nonatomic) SKShader *shader;
@property (nonatomic) unsigned int shadowCastBitMask;
@property (nonatomic) unsigned int shadowedBitMask;
@property (nonatomic) BOOL shouldRepeatTexture; // ivar: _shouldRepeatTexture
@property (nonatomic) CGSize size;
@property (nonatomic) NSInteger subdivisionLevels;
@property (readonly) Class superclass;
@property (retain, nonatomic) SKTexture *texture;
@property (retain, nonatomic) SKWarpGeometry *warpGeometry;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(id)spriteNodeWithColor:(id)arg0 size:(struct CGSize )arg1 ;
+(id)spriteNodeWithImageNamed:(id)arg0 ;
+(id)spriteNodeWithImageNamed:(id)arg0 normalMapped:(BOOL)arg1 ;
+(id)spriteNodeWithTexture:(id)arg0 ;
+(id)spriteNodeWithTexture:(id)arg0 normalMap:(id)arg1 ;
+(id)spriteNodeWithTexture:(id)arg0 size:(struct CGSize )arg1 ;
-(*void)_makeBackingNode;
-(BOOL)_pathFromTextureToPoints:(***NSUInteger)arg0 outSize:(float)arg1 accuracy;
-(BOOL)isEqualToNode:(id)arg0 ;
-(BOOL)repeatTexture;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithImageNamed:(id)arg0 ;
-(id)initWithTexture:(id)arg0 ;
-(id)initWithTexture:(id)arg0 color:(id)arg1 size:(struct CGSize )arg2 ;
-(id)valueForAttributeNamed:(id)arg0 ;
-(void)_didMakeBackingNode;
-(void)encodeWithCoder:(id)arg0 ;
-(void)scaleToSize:(struct CGSize )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setRepeatTexture:(BOOL)arg0 ;
-(void)setValue:(id)arg0 forAttributeNamed:(id)arg1 ;


@end


#endif