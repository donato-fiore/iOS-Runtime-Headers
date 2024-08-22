// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHADOWIMAGECACHE_H
#define PXSHADOWIMAGECACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface PXShadowImageCache : NSObject {
    NSMapTable *_weakCache;
}




+(id)sharedInstance;
-(id)init;
-(id)stretchableShadowImageFor:(id)arg0 cornerRadius:(CGFloat)arg1 screenScale:(CGFloat)arg2 ;


@end


#endif