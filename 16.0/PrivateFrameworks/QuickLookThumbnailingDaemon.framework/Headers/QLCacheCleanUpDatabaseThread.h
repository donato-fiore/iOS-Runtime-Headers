// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCACHECLEANUPDATABASETHREAD_H
#define QLCACHECLEANUPDATABASETHREAD_H

@class NSConditionLock, NSThread, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_QLCacheThread.h"

@interface QLCacheCleanUpDatabaseThread : NSObject {
    NSConditionLock *_threadLock;
    *__CFRunLoop _threadRunLoop;
    NSThread *_thread;
}


@property (retain) _QLCacheThread *cacheThread; // ivar: _cacheThread
@property (readonly, nonatomic) int currentMode; // ivar: _currentMode
@property BOOL diskCacheCleanupDone; // ivar: _diskCacheCleanupDone
@property (readonly, nonatomic) NSUInteger hitToSaveCount;
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles; // ivar: _shouldRemoveThumbnailsForDeletedFiles
@property (retain) NSMutableDictionary *thumbnailsHit; // ivar: _thumbnailsHit


-(BOOL)_updateHitCount;
-(id)initWithCacheThread:(id)arg0 ;
-(void)_stopWriteAndCleanUpThreadRunLoop;
-(void)_threadMain;
-(void)_writeAndCleanUp;
-(void)addHitWithThumbnailData:(id)arg0 ;
-(void)cleanUpForReset;
-(void)dealloc;
-(void)pause;
-(void)startCleanUp;
-(void)stop;


@end


#endif