// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMGLOBALCACHE_H
#define CMGLOBALCACHE_H


#import <Foundation/Foundation.h>


@interface CMGlobalCache : NSObject



+(id)borderStyleCache;
+(id)borderWidthCache;
+(id)colorPropertyCache;
+(id)cssStylesheetCache;
+(id)drawableElementCache;
+(id)lengthPropertyCache;
+(void)initGlobalCache;
+(void)releaseGlobalCache;


@end


#endif