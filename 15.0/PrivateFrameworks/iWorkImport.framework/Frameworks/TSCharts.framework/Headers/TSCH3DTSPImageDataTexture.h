// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DTSPIMAGEDATATEXTURE_H
#define TSCH3DTSPIMAGEDATATEXTURE_H

@class NSNumber, TSDColorFill, NSString, TSUOnce, TSPData;


#import "TSCH3DTexture.h"
#import "TSCH3DTSPMipmapData.h"
#import "TSCH3DTSPImageData.h"

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture {
    TSCH3DTSPMipmapData *_optimizedMipmapData;
    NSNumber *_cachedHash;
    TSDColorFill *_colorFill;
    NSString *_textureSetId;
    NSString *_imageName;
    TSUOnce *_cachedHashOnce;
}


@property (readonly, nonatomic) TSCH3DTSPImageData *data; // ivar: _data
@property (readonly, nonatomic) TSPData *imageData;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)textureWithImageData:(id)arg0 colorFill:(id)arg1 optimizedMipmapData:(id)arg2 textureSetId:(id)arg3 imageName:(id)arg4 ;
+(id)textureWithImageData:(id)arg0 colorFill:(id)arg1 textureSetId:(id)arg2 imageName:(id)arg3 ;
+(id)textureWithImageData:(id)arg0 optimizedMipmapData:(id)arg1 textureSetId:(id)arg2 imageName:(id)arg3 ;
-(BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg0 ;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)databufferForDataCache:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithImageData:(id)arg0 colorFill:(id)arg1 optimizedMipmapData:(id)arg2 textureSetId:(id)arg3 imageName:(id)arg4 ;
-(id)optimizedMipmapBuffer;
-(id)representativeColorBuffer;
-(void)p_setOptimizedMipMapData:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setChanged:(BOOL)arg0 ;


@end


#endif