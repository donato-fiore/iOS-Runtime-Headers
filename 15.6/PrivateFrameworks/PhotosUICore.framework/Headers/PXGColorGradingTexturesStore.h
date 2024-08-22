// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCOLORGRADINGTEXTURESSTORE_H
#define PXGCOLORGRADINGTEXTURESSTORE_H

@class NSCache;
@protocol OS_dispatch_queue, MTLDevice;

#import <Foundation/Foundation.h>

#import "PXGColorLookupCube.h"

@interface PXGColorGradingTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCache *_cachedTextures;
    PXGColorLookupCube *_placeholderCube;
}


@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device


+(id)colorGradingTextureStoreForDevice:(id)arg0 ;
-(id)colorGradingTextureWithColorLookupCube:(id)arg0 ;
-(id)init;
-(id)initWithMetalDevice:(id)arg0 ;
-(void)_createPlaceholderCube;


@end


#endif