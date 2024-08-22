// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DTEXTURERESOURCE_H
#define TSCH3DTEXTURERESOURCE_H

@class NSNumber, TSUOnce;
@protocol TSCH3DOptimizedTextureResource;


#import "TSCH3DResource.h"
#import "TSCH3DTexture.h"

@interface TSCH3DTextureResource : TSCH3DResource <TSCH3DOptimizedTextureResource>

 {
    TSCH3DTexture *_parent;
    NSNumber *_cachedHash;
    TSUOnce *_cachedHashOnce;
}




-(BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)databufferForDataCache:(id)arg0 ;
-(id)get;
-(id)initWithParent:(id)arg0 ;
-(id)optimizedMipmapBuffer;
-(id)p_parent;
-(id)representativeColorBuffer;


@end


#endif