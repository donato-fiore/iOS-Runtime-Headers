// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGASSETIMAGECACHE_H
#define PXGASSETIMAGECACHE_H

@class NSMutableIndexSet, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXGAssetImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_activeRequestIDs;
    NSMutableSet *_activeAssets;
    NSMutableArray *_entries;
    NSMutableArray *_reusableEntries;
}




-(?)_cacheImage:(?)arg0 orientation:(?)arg1 isDegraded:(?)arg2 forRequestIDoutCGImage;
-(?)getCachedImage:(?)arg0 withOrientation:(?)arg1 outIsDegraded:(?)arg2 forAsset:(?)arg3 targetSize:(?)arg4 contentModeforRequestID;
-(id)debugDescription;
-(id)description;
-(id)init;
-(struct CGImage *)cacheCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 isDegraded:(BOOL)arg2 forRequestID:(int)arg3 ;
-(void)clearAllCachedImages;
-(void)clearCachedImagesForRequestIDs:(id)arg0 ;


@end


#endif