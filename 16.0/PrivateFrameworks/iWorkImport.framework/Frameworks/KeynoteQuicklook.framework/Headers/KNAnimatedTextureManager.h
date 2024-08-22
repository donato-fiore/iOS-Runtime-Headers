// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMATEDTEXTUREMANAGER_H
#define KNANIMATEDTEXTUREMANAGER_H

@class NSMapTable, NSMutableSet, NSOperationQueue, TSULRUCache;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "KNPlaybackSession.h"
#import "KNSlideNode.h"

@interface KNAnimatedTextureManager : NSObject {
    KNPlaybackSession *_session;
    os_unfair_lock_s _preCachingStateLock;
    NSMapTable *_slideNodeToASVMap;
    NSMutableSet *_slideNodesInMemorySet;
    NSMutableSet *_preCachedSlideNodes;
    BOOL _isPreCachingActive;
    NSOperationQueue *_preCacheBackgroundQueue;
    NSOperationQueue *_rasterizeTextureQueue;
    CGSize _maximumMTLTextureSize;
    os_unfair_lock_s _textureCacheLock;
    NSMapTable *_repToTextureArrayMap;
    TSULRUCache *_recentlyUsedBackgroundCache;
    NSObject<OS_os_log> *_signpostLog;
}


@property (retain, nonatomic) KNSlideNode *currentSlideNode; // ivar: _currentSlideNode
@property (nonatomic) BOOL shouldPreCache; // ivar: _shouldPreCache


-(BOOL)p_stopPreCachingIfStarted;
-(id)ASVForSlideNode:(id)arg0 ;
-(id)description;
-(id)initWithSession:(id)arg0 ;
-(id)p_setupGenerateTexturesOperationOnSlideNode:(id)arg0 ;
-(id)p_setupPrepareAnimationsOperationOnSlideNode:(id)arg0 ;
-(id)p_setupRenderTexturesOperationOnSlideNode:(id)arg0 ;
-(id)p_slideNodesToCacheAroundCurrentSlideNode:(id)arg0 shouldIncludeExtraSlideAtEnd:(BOOL)arg1 ;
-(void)addTextureToRasterizationQueue:(id)arg0 isOpenGL:(BOOL)arg1 asv:(id)arg2 ;
-(void)dealloc;
-(void)evictCacheForSlideNode:(id)arg0 ;
-(void)evictCaches;
-(void)evictInMemoryCache;
-(void)evictPersistentCache;
-(void)p_addSlideNodeToMemorySet:(id)arg0 ;
-(void)p_cancelAllOperations;
-(void)p_didReceiveMemoryWarning;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;
-(void)p_processCurrentSlideNode;
-(void)p_processSlideNode:(id)arg0 isHighPriority:(BOOL)arg1 ;
-(void)p_rasterizeTexture:(id)arg0 isOpenGL:(BOOL)arg1 ;
-(void)p_removeTextureCacheForASV:(id)arg0 ;
-(void)p_scheduleSerializeExtraSlideNodes;
-(void)p_serializeExtraSlideNodes;
-(void)p_serializeTexturesForSlideNode:(id)arg0 ;
-(void)p_waitUntilAllOperationsAreFinished;
-(void)startPreCaching;
-(void)stopPreCaching;
-(void)tearDown;


@end


#endif