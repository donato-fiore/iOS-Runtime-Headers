// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPDFPAGEIMAGECACHE_H
#define UIPDFPAGEIMAGECACHE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>

#import "UIPDFDocument.h"

@interface UIPDFPageImageCache : NSObject {
    NSUInteger _jobCount;
    *id _jobsPrioritized;
    NSUInteger _nextJobIndex;
    *id _jobsByPage;
    NSOperationQueue *_renderQueue;
    os_unfair_lock_s _lock;
    int jobsComplete;
}


@property (readonly) UIPDFDocument *document; // ivar: _document
@property (readonly) NSUInteger lookAhead; // ivar: _lookAhead
@property (readonly) CGFloat lookAheadResolution; // ivar: _lookAheadResolution
@property (readonly) NSUInteger pageCount; // ivar: _pageCount


-(id)getImageIfAvailableForPage:(NSUInteger)arg0 ;
-(id)initWithDocument:(id)arg0 ;
-(id)initWithDocument:(id)arg0 cacheCount:(NSUInteger)arg1 lookAhead:(NSUInteger)arg2 withLookAheadResolution:(CGFloat)arg3 ;
-(int)getRenderQueueJobsCount;
-(void)addRenderJob:(id)arg0 ;
-(void)cacheImageOfPage:(NSUInteger)arg0 maxSize:(struct CGSize )arg1 ;
-(void)cancelPendingRenderOperations;
-(void)cancelPendingRenderOperationsForTarget:(id)arg0 ;
-(void)clearCache;
-(void)dealloc;
-(void)deliverImageOfPage:(NSUInteger)arg0 maxSize:(struct CGSize )arg1 quality:(*BOOL)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5 ;
-(void)didReceiveMemoryWarning:(id)arg0 ;


@end


#endif