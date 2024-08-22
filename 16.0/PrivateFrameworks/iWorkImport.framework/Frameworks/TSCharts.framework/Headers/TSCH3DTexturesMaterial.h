// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DTEXTURESMATERIAL_H
#define TSCH3DTEXTURESMATERIAL_H

@class NSArray;


#import "TSCH3DMaterial.h"
#import "TSCH3DVector.h"

@interface TSCH3DTexturesMaterial : TSCH3DMaterial {
    TSCH3DVector *_color;
    NSArray *_textures;
    NSArray *_tilings;
}


@property (nonatomic) tvec4<float> color;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)textureCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstTexture;
-(id)firstTiling;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)textureEnumerator;
-(id)textures;
-(id)tilings;
-(id)variableTexture;
-(void)addTexture:(id)arg0 tiling:(id)arg1 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif