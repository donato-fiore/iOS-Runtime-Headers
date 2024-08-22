// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTHREADSCOPEMANAGER_H
#define EDTHREADSCOPEMANAGER_H

@class NSMutableDictionary, NSString, NSArray;
@protocol EFLoggable, EDThreadScopeManagerDataSource, EFScheduler;

#import <Foundation/Foundation.h>


@interface EDThreadScopeManager : NSObject <EFLoggable>

 {
    NSMutableDictionary *_threadScopes;
    os_unfair_lock_s _threadScopesLock;
}


@property (readonly, weak, nonatomic) NSObject<EDThreadScopeManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<EFScheduler> *evictionScheduler; // ivar: _evictionScheduler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *threadScopes;


+(id)log;
+(id)mailboxTypesToPrecompute;
-(BOOL)_shouldPrecomputeMailboxType:(id)arg0 ;
-(BOOL)_shouldPrecomputeMailboxWithObjectID:(id)arg0 ;
-(BOOL)_shouldPrecomputeThreadScope:(id)arg0 ;
-(BOOL)isThreadScopePrecomputed:(id)arg0 shouldMigrate:(*BOOL)arg1 ;
-(CGFloat)_evictionScoreForCount:(NSUInteger)arg0 timeInterval:(CGFloat)arg1 ;
-(NSInteger)databaseIDForThreadScope:(id)arg0 ;
-(NSUInteger)_numberOfThreadScopesToEvictFrom:(id)arg0 upTo:(*NSUInteger)arg1 ;
-(id)_threadScopeInfoForThreadScope:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)_evictAtLeast:(NSUInteger)arg0 upTo:(NSUInteger)arg1 fromThreadScopesWithDatabaseIDs:(id)arg2 ;
-(void)_initializeThreadScopesIfNeeded;
-(void)addThreadScope:(id)arg0 withDatabaseID:(NSInteger)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 ;
-(void)removeAllThreadScopes;
-(void)removeThreadScope:(id)arg0 ;
-(void)removeThreadScopesForMailboxScope:(id)arg0 ;
-(void)setLastViewedDate:(id)arg0 forThreadScope:(id)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg0 forThreadScope:(id)arg1 ;


@end


#endif