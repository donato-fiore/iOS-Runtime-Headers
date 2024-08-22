// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLDISKCACHEENUMERATOR_H
#define QLDISKCACHEENUMERATOR_H


#import <Foundation/Foundation.h>

#import "QLDiskCache.h"

@interface QLDiskCacheEnumerator : NSObject {
    QLDiskCache *_diskCache;
}




+(BOOL)cachedThumbnailDataIsLowQuality:(id)arg0 forThumbnailRequest:(id)arg1 ;
+(CGFloat)_expectedThumbnailSizeForRequest:(id)arg0 ;
-(id)initWithDiskCache:(id)arg0 ;


@end


#endif