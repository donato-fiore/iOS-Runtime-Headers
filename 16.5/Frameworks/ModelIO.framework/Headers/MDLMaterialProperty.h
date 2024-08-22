// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLMATERIALPROPERTY_H
#define MDLMATERIALPROPERTY_H

@class NSString, NSURL;
@protocol MDLNamed, NSCopying;

#import <Foundation/Foundation.h>

#import "MDLTextureSampler.h"
#import "MDLBufferView.h"
#import "MDLMaterialPropertyNode.h"
#import "MDLMaterialProperty.h"

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying>

 {
    NSString *_string;
    NSString *_name;
    NSURL *_url;
    MDLTextureSampler *_textureSampler;
    ? _float;
    ? _matrix;
    *CGColor _color;
    MDLBufferView *_buffer;
    NSUInteger _stride;
    NSUInteger _semantic;
    MDLMaterialPropertyNode *_node;
    MDLMaterialProperty *_overrider;
    MDLMaterialProperty *_overridee;
}


@property (copy, nonatomic) NSURL *URLValue;
@property (readonly, nonatomic) MDLBufferView *bufferData;
@property (nonatomic) *CGColor color;
@property ? float2Value;
@property ? float3Value;
@property ? float4Value;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL isDefaultValue; // ivar: _isDefaultValue
@property (nonatomic) float luminance;
@property (nonatomic) ? matrix4x4; // ivar: _matrix4x4
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSUInteger semantic;
@property (readonly, nonatomic) NSUInteger stride;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) MDLTextureSampler *textureSamplerValue;
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)_decodeVectorWithCoder:(id)arg0 forKey;
+(id)decodeMaterialPropertyWithCoder:(id)arg0 forKey:(id)arg1 allocator:(id)arg2 ;
+(struct ? )_decodeMatrixPropertyWithCoder:(id)arg0 forKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 buffer:(id)arg1 ;
-(id)initWithName:(id)arg0 buffer:(id)arg1 stride:(NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 ;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 URL:(id)arg2 ;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 color:(struct CGColor *)arg2 ;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 float2;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 float3;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 float4;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 float4WithSRGBA;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 float:(float)arg2 ;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 matrix4x4:(struct ? )arg2 ;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 string:(id)arg2 ;
-(id)initWithName:(id)arg0 semantic:(NSUInteger)arg1 textureSampler:(id)arg2 ;
-(void)_encodeMatrixPropertyWithCoder:(id)arg0 forKey:(id)arg1 ;
-(void)_encodeVector:(id)arg0 withCoder:(id)arg1 forKey;
-(void)encodeMaterialPropertyWithCoder:(id)arg0 forKey:(id)arg1 allocator:(id)arg2 ;


@end


#endif