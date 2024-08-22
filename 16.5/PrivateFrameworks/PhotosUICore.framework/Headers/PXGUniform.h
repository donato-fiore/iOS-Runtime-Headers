// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGUNIFORM_H
#define PXGUNIFORM_H

@class NSString;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface PXGUniform : NSObject {
    ? _float2Value;
    ? _float3Value;
    ? _float4Value;
}


@property (readonly, nonatomic) NSUInteger bindType;
@property (readonly, nonatomic) *void bytes; // ivar: _bytes
@property (readonly, nonatomic) NSInteger bytesLength; // ivar: _bytesLength
@property (retain, nonatomic) NSObject<MTLTexture> *cachedTexture; // ivar: _cachedTexture
@property (readonly, copy, nonatomic) NSString *declaration;
@property ? encodableValue;
@property ? float2Value;
@property ? float3Value;
@property ? float4Value;
@property (nonatomic) float floatValue; // ivar: _floatValue
@property (nonatomic) *CGImage image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) id *textureProvider; // ivar: _textureProvider
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEquivalentToUniform:(id)arg0 ;
-(id)bindableTextureForContext:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 ;
-(id)parameterDeclarationWithBindingIndex:(NSInteger)arg0 ;


@end


#endif