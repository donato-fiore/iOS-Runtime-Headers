// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGUNIFORMALIAS_H
#define PXGUNIFORMALIAS_H



#import "PXGUniform.h"

@interface PXGUniformAlias : PXGUniform

@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) PXGUniform *original; // ivar: _original


-(*void)bytes;
-(BOOL)isEquivalentToUniform:(id)arg0 ;
-(NSInteger)bytesLength;
-(float)floatValue;
-(id)cachedTexture;
-(id)description;
-(id)float2Value;
-(id)float3Value;
-(id)float4Value;
-(id)initWithIndex:(NSInteger)arg0 aliasing:(id)arg1 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 ;
-(id)name;
-(id)textureProvider:(SEL)arg0 ;
-(struct CGImage *)image;
-(void)setCachedTexture:(id)arg0 ;


@end


#endif