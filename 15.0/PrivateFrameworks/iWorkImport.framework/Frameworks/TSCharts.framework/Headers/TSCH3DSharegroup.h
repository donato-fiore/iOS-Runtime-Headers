// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSHAREGROUP_H
#define TSCH3DSHAREGROUP_H

@class NSThread, NSMutableSet, NSString;
@protocol TSUiOSMemoryWarningFlushable, TSCH3DSharegroupDelegate;

#import <Foundation/Foundation.h>

#import "TSCH3DResourceCache.h"
#import "TSCH3DShaderCache.h"
#import "TSCH3DSharegroupToken.h"

@interface TSCH3DSharegroup : NSObject <TSUiOSMemoryWarningFlushable>

 {
    NSThread *_owningThread;
    NSMutableSet *_purgeableResourceSet;
    BOOL _didReceiveFlush;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TSCH3DSharegroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int performance; // ivar: _performance
@property (readonly, nonatomic) TSCH3DResourceCache *resourceCache; // ivar: _resourceCache
@property (readonly, nonatomic) TSCH3DShaderCache *shaderCache; // ivar: _shaderCache
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) TSCH3DSharegroupToken *token; // ivar: _token


+(id)uniqueSharegroupWithOwningThread:(id)arg0 token:(id)arg1 ;
-(BOOL)isCurrentThreadOwner;
-(BOOL)isOneShot;
-(BOOL)mustRunOnMainThread;
-(BOOL)owningThreadIsNil;
-(id)initWithOwningThread:(id)arg0 token:(id)arg1 ;
-(struct FlushResult )p_flushCacheIfNecessary;
-(void)dealloc;
-(void)flush;
-(void)flushIfNecessary;
-(void)flushInTargetThread;
-(void)flushMemoryForResourceSet:(id)arg0 ;
-(void)flushResourceSet:(id)arg0 ;
-(void)forceFlushResourceSet:(id)arg0 ;
-(void)nonThreadOwnedFlushCache;
-(void)p_flushInTargetThread;
-(void)setIfIsMoreDemandingPerformance:(int)arg0 ;
-(void)setOwningThread:(id)arg0 ;


@end


#endif