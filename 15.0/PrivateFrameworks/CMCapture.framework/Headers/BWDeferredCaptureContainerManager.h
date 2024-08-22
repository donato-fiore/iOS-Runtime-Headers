// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDCAPTURECONTAINERMANAGER_H
#define BWDEFERREDCAPTURECONTAINERMANAGER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;


#import "BWDeferredContainerManagerBase.h"

@interface BWDeferredCaptureContainerManager : BWDeferredContainerManagerBase {
    unsigned int _cacheSize;
    unsigned int _cacheResidencySeconds;
    NSObject<OS_dispatch_source> *_cacheExpiryTimer;
    NSMutableArray *_stagedContainers;
    NSMutableArray *_inflightContainers;
    NSMutableArray *_cachedContainers;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_dispatch_queue> *_flushQueueBackground;
    NSUInteger _cachedLowDiskThresholdBytes;
    NSMutableDictionary *_pools;
}




+(id)sharedInstance;
-(BOOL)canDefer;
-(id)copyRemoteContainerForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 err:(*int)arg2 ;
-(id)createCaptureContainerWithApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 err:(*int)arg2 ;
-(id)init;
-(id)lookupCaptureContainer:(id)arg0 ;
-(id)manifestsForApplicationID:(id)arg0 err:(*int)arg1 ;
-(int)abortContainer:(id)arg0 error:(int)arg1 ;
-(int)addBufferPool:(id)arg0 ;
-(int)addCaptureContainer:(id)arg0 ;
-(int)commitContainer:(id)arg0 ;
-(int)deleteContainerForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 ;
-(int)queryContainerStatusForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 status:(*int)arg2 ;
-(int)releaseRemoteContainerForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 ;
-(int)removeBufferPool:(id)arg0 ;
-(struct __CVBuffer *)newPixelBuffer:(id)arg0 ;
-(void)flush:(id)arg0 toMinimumCapacity:(NSUInteger)arg1 ;


@end


#endif