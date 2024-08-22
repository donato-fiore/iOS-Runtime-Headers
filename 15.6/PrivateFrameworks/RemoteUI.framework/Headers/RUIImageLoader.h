// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIIMAGELOADER_H
#define RUIIMAGELOADER_H

@class NSLock, NSMutableArray, NSMutableSet, NSMutableDictionary, NSNotificationCenter, NSTimer;

#import <Foundation/Foundation.h>


@interface RUIImageLoader : NSObject {
    NSLock *_queueLock;
    NSMutableArray *_loadQueue;
    NSMutableSet *_loadsInProgress;
    NSLock *_cacheLock;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageCacheLRU;
    NSMutableDictionary *_loadCompletions;
    *__CFRunLoop _loaderRunLoop;
    *__CFRunLoopSource _loaderSource;
    NSNotificationCenter *_notificationCenter;
    NSTimer *_loadStatusNotificationTimer;
    _opaque_pthread_mutex_t _startupLock;
    _opaque_pthread_cond_t _startupCondition;
}




+(id)sharedImageLoader;
-(BOOL)_locked_URLIsLoading:(id)arg0 ;
-(BOOL)isLoadingImages;
-(id)init;
-(id)notificationCenter;
-(struct CGImage *)imageForURL:(id)arg0 loadIfAbsent:(BOOL)arg1 ;
-(void)_callCompletionsForURL:(id)arg0 image:(struct CGImage *)arg1 error:(id)arg2 ;
-(void)_imageLoadFinished:(id)arg0 ;
-(void)_loadImageURL:(id)arg0 completion:(id)arg1 ;
-(void)_loadingStatusChanged;
-(void)_locked_imageLoadStarted:(id)arg0 ;
-(void)_locked_loadImageForURL:(id)arg0 ;
-(void)_mainThread_postLoadingStatusChanged;
-(void)_postImageLoadedNotification:(id)arg0 ;
-(void)_postLoadingStatusChanged;
-(void)_setImageData:(id)arg0 forURL:(id)arg1 error:(id)arg2 ;
-(void)_startLoader;
-(void)imageForURL:(id)arg0 scale:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif