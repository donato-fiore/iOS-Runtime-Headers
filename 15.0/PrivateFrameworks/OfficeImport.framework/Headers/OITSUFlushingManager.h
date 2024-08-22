// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUFLUSHINGMANAGER_H
#define OITSUFLUSHINGMANAGER_H

@class NSCondition, NSThread;
@protocol TSUiOSMemoryWarningFlushable;

#import <Foundation/Foundation.h>

#import "OITSURetainedPointerKeyDictionary.h"
#import "OITSUPointerKeyDictionary.h"

@interface OITSUFlushingManager : NSObject {
    OITSURetainedPointerKeyDictionary *_objects;
    *void _sortedObjects;
    *void _sortedNewObjects;
    OITSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id<TSUiOSMemoryWarningFlushable> *_flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    NSThread *_bgThread;
    NSUInteger _backgroundTransitionTaskId;
    NSUInteger _activeBgThreadTask;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedManager;
-(BOOL)controlsActiveObject:(id)arg0 ;
-(BOOL)controlsInactiveObject:(id)arg0 ;
-(BOOL)isNewObject:(struct TSUFlushableObjectInfo *)arg0 ;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(struct TSUFlushableObjectInfo *)eraseInfoForObject:(id)arg0 ;
-(void)_backgroundThread:(id)arg0 ;
-(void)_bgTaskFinished;
-(void)_bgTaskStarted;
-(void)_bgThreadActive;
-(void)_bgThreadInactive;
-(void)_didUseObject:(id)arg0 ;
-(void)_flushAllEligible;
-(void)_startFlushingObjects;
-(void)_stopFlushingObjects;
-(void)addObject:(id)arg0 ;
-(void)advanceClock;
-(void)dealloc;
-(void)didEnterBackground;
-(void)didReceiveMemoryWarning;
-(void)doneWithObject:(id)arg0 ;
-(void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg0 ;
-(void)release;
-(void)removeObject:(id)arg0 ;
-(void)safeToFlush:(id)arg0 wasAccessed:(BOOL)arg1 ;
-(void)transferNewObjects;
-(void)unsafeToFlush:(id)arg0 ;
-(void)willEnterForeground;


@end


#endif