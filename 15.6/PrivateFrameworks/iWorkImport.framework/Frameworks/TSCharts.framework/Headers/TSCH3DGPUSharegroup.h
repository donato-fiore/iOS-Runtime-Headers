// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DGPUSHAREGROUP_H
#define TSCH3DGPUSHAREGROUP_H

@class NSRecursiveLock;


#import "TSCH3DSharegroup.h"
#import "TSCH3DContext.h"

@interface TSCH3DGPUSharegroup : TSCH3DSharegroup {
    TSCH3DContext *_GPUContext;
    NSInteger _lockLevel;
    NSRecursiveLock *_lock;
}




+(BOOL)hasInterestForSharegroupToken:(id)arg0 ;
+(id)sharegroupForToken:(id)arg0 ;
+(void)addInterestForSharegroupTokens:(id)arg0 ;
+(void)deleteSharegroupForToken:(id)arg0 ;
+(void)flushSharegroupForToken:(id)arg0 ;
+(void)removeInterestForSharegroupTokens:(id)arg0 ;
-(BOOL)debug_isInteractive;
-(id)GPUContext;
-(id)description;
-(id)initWithOwningThread:(id)arg0 token:(id)arg1 ;
-(id)initWithOwningThread:(id)arg0 token:(id)arg1 context:(id)arg2 ;
-(id)targetThreadForFlushing;
-(void)garbageCollectAllUnretainedResources;
-(void)garbageCollectResources:(id)arg0 ;
-(void)lock;
-(void)p_clearContextInCurrentThread;
-(void)p_flushCache;
-(void)p_flushPurgeableResourceSet;
-(void)p_forceFlushResourceSet:(id)arg0 ;
-(void)p_owningThreadWillChange;
-(void)unlock;
-(void)updateSharegroupMapToken:(id)arg0 ;


@end


#endif