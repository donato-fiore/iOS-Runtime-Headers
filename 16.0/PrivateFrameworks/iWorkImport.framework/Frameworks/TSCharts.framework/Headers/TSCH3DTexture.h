// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DTEXTURE_H
#define TSCH3DTEXTURE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DTextureResource.h"
#import "TSCH3DResource.h"

@interface TSCH3DTexture : NSObject <NSCopying>

 {
    TSCH3DTextureResource *_textureResource;
}


@property (readonly, nonatomic) TSCH3DResource *resource;


-(BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg0 ;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)optimizedMipmapBuffer;
-(id)representativeColorBuffer;
-(void)didInitFromSOS;


@end


#endif