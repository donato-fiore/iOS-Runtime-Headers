// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSESSION_H
#define TSCH3DSESSION_H

@class NSMutableSet, NSCountedSet;

#import <Foundation/Foundation.h>

#import "TSCH3DContext.h"
#import "TSCH3DResourceCache.h"
#import "TSCH3DGPUSharegroup.h"
#import "TSCH3DDocumentDataCache.h"

@interface TSCH3DSession : NSObject {
    BOOL _interactiveCanvas;
    NSUInteger _failures;
    TSCH3DContext *_context;
    TSCH3DResourceCache *_cache;
    TSCH3DGPUSharegroup *_sharegroup;
    NSMutableSet *_activeResourceSet;
    NSMutableSet *_allResourceSet;
    NSCountedSet *_scopeProtectedResourceSet;
    NSInteger _virtualScreen;
}


@property (readonly, nonatomic) TSCH3DContext *context;
@property (readonly, nonatomic) TSCH3DDocumentDataCache *dataCache; // ivar: _dataCache
@property (readonly, nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) BOOL isOneShot;
@property (readonly, nonatomic) BOOL mustRunOnMainThread;
@property (nonatomic) int performance;
@property (readonly, nonatomic) TSCH3DContext *sharegroupContext;
@property (nonatomic) NSInteger virtualScreen;


-(BOOL)hasEnoughFreeMemoryOfBytes:(NSUInteger)arg0 ;
-(BOOL)isProtectedResource:(id)arg0 ;
-(id)handleOfResource:(id)arg0 loader:(id)arg1 ;
-(id)init;
-(id)initWithSharegroupToken:(id)arg0 dataCache:(id)arg1 ;
-(id)loadResource:(id)arg0 reload:(BOOL)arg1 withLoader:(id)arg2 config:(id)arg3 ;
-(id)shaderForShaderContext:(id)arg0 initializeProgramBlock:(id)arg1 ;
-(void)addActiveResource:(id)arg0 ;
-(void)beginFrameWithSharegroupDelegate:(id)arg0 ;
-(void)dealloc;
-(void)endFrameWithSharegroupDelegate:(id)arg0 ;
-(void)flushMemoryForResources:(id)arg0 ;
-(void)flushResources:(id)arg0 ;
-(void)flushResourcesIfNecessary;
-(void)flushTrackedResources;
-(void)forceFlushResources:(id)arg0 ;
-(void)garbageCollectAllUnretainedResources;
-(void)p_lock;
-(void)p_unlock;
-(void)protectResource:(id)arg0 unprotectOnFail:(BOOL)arg1 ;
-(void)resetFailures;
-(void)resetTrackingToActiveResources;
-(void)setFailed;
-(void)setIfIsMoreDemandingPerformance:(int)arg0 ;
-(void)trackResourcesInBlock:(id)arg0 ;
-(void)unprotectResource:(id)arg0 clearOnFailProtection:(BOOL)arg1 ;


@end


#endif