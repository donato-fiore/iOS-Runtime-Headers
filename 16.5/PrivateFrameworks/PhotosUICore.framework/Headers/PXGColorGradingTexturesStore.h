// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGCOLORGRADINGTEXTURESSTORE_H
#define PXGCOLORGRADINGTEXTURESSTORE_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGColorLookupCube.h"
#import "PXGMetalRenderContext.h"

@interface PXGColorGradingTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCache *_cachedTextures;
    PXGColorLookupCube *_placeholderCube;
    PXGMetalRenderContext *_metalRenderContext;
}




+(id)colorGradingTextureStoreForContext:(id)arg0 ;
-(id)colorGradingTextureWithColorLookupCube:(id)arg0 ;
-(id)init;
-(id)initWithMetalContext:(id)arg0 ;
-(void)_createPlaceholderCube;


@end


#endif