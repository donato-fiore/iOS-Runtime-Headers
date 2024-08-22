// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSIHELPER_H
#define CSIHELPER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "_CUIThemePixelRendition.h"
#import "_CSIRenditionBlockData.h"

@interface CSIHelper : NSObject {
    _slice slice;
    NSData *csiData;
    *_csibitmap bmp;
    os_unfair_lock_s renditionLock;
    _CUIThemePixelRendition *rendition;
    _CSIRenditionBlockData *sharedBlockDataBGRX;
    _CSIRenditionBlockData *sharedBlockDataRGBX;
    _CSIRenditionBlockData *sharedBlockDataGray;
    _CSIRenditionBlockData *retainedBlockData;
    NSString *blockDataCacheKeyBGRX;
    NSString *blockDataCacheKeyRGBX;
    NSString *blockDataCacheKeyGray;
    NSUInteger sourceRowbytes;
    BOOL shouldCache;
    BOOL usedForDataProvider;
    BOOL _reserved;
}




-(void)dealloc;


@end


#endif