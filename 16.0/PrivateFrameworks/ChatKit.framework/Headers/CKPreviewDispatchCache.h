// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPREVIEWDISPATCHCACHE_H
#define CKPREVIEWDISPATCHCACHE_H

@protocol IMSystemMonitorListener;

#import <Foundation/Foundation.h>

#import "CKDispatchCache.h"
#import "CKMultiDict.h"

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>



@property (retain, nonatomic) CKDispatchCache *dispatchCache; // ivar: _dispatchCache
@property (retain, nonatomic) CKMultiDict *pendingBlocks; // ivar: _pendingBlocks


+(id)detailsPreviewCache;
+(id)mapThumbnailQueue;
+(id)previewPrewarmQueue;
+(id)snapshotCache;
+(id)stickerPreviewCache;
+(id)transcriptPreviewCache;
+(void)_invalidateStickerPreviewCache;
-(BOOL)isGeneratingPreviewForKey:(id)arg0 ;
-(BOOL)shouldReplaceCachedPreview:(id)arg0 withPreview:(id)arg1 ;
-(id)cachedPreviewForKey:(id)arg0 ;
-(id)init;
-(id)initWithCacheLimit:(NSUInteger)arg0 ;
-(id)mediaObjectManager;
-(id)notificationCenter;
-(void)beginGeneratingForKey:(id)arg0 ;
-(void)clearQueueAndCachedPreviews;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)endGeneratingForKey:(id)arg0 ;
// -(void)enqueueGenerationBlock:(id)arg0 completion:(unk)arg1 withPriority:(id)arg2 forKey:(unk)arg3  ;
// -(void)enqueueSaveBlock:(id)arg0 forMediaObject:(unk)arg1 withPriority:(id)arg2  ;
// -(void)enqueueSaveBlock:(id)arg0 withPriority:(unk)arg1  ;
-(void)flush;
-(void)resume;
-(void)setCachedPreview:(id)arg0 key:(id)arg1 ;
-(void)suspend;
-(void)systemApplicationDidSuspend;
-(void)transferFinished:(id)arg0 ;
-(void)transferRemoved:(id)arg0 ;


@end


#endif