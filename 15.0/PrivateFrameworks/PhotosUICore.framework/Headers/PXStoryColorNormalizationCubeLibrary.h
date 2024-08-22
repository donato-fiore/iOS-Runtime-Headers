// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCOLORNORMALIZATIONCUBELIBRARY_H
#define PXSTORYCOLORNORMALIZATIONCUBELIBRARY_H

@class NSMutableIndexSet, NSCache, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryColorNormalizationCubeLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
    NSMutableIndexSet *_lock_activeRequests;
    NSCache *_lock_cubeByAssetNormalization;
    NSMapTable *_lock_aliveCubesByAssetNormalization;
    NSInteger _cubeEdgeSize;
    *CGColorSpace _colorspace;
}




+(id)sharedInstance;
-(BOOL)_isRequestActive:(NSInteger)arg0 ;
-(NSInteger)requestColorCubeForAssetNormalization:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithColorSpace:(struct CGColorSpace *)arg0 ;
-(void)_cacheColorCube:(id)arg0 forAssetNormalization:(id)arg1 ;
-(void)_queue_performRequestWithID:(NSInteger)arg0 forAssetNormalization:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancelRequest:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif