// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREENVIRONMENT_H
#define AVTCOREENVIRONMENT_H

@class NSURL, NSNotificationCenter;
@protocol OS_dispatch_queue, AVTUILogger, AVTBlockScheduler;

#import <Foundation/Foundation.h>


@interface AVTCoreEnvironment : NSObject {
    NSURL *_storeLocation;
    NSURL *_imageStoreLocation;
    NSURL *_stickerImageStoreLocation;
    NSURL *_imageCacheStoreLocation;
}


@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (readonly, copy, nonatomic) NSURL *imageCacheStoreLocation;
@property (readonly, copy, nonatomic) NSURL *imageStoreLocation;
@property (readonly, copy, nonatomic) id *lockProvider; // ivar: _lockProvider
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSObject<AVTBlockScheduler> *scheduler; // ivar: _scheduler
@property (readonly, copy, nonatomic) id *serialQueueProvider; // ivar: _serialQueueProvider
@property (readonly, copy, nonatomic) NSURL *stickerImageStoreLocation;
@property (readonly, copy, nonatomic) NSURL *storeLocation;


+(id)defaultEnvironment;
+(id)imageCacheStoreLocationWithError:(*id)arg0 ;
+(void)resetFlushCacheValuesIfNeeded;
-(id)init;


@end


#endif