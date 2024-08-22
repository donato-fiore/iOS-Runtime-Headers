// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXRECENTACTIONENGAGEMENTCACHE_H
#define ATXRECENTACTIONENGAGEMENTCACHE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXRecentActionEngagementCache : NSObject {
    NSString *_recentMLEngagementCachePath;
    NSString *_recentHeuristicEngagementCachePath;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(id)_getAllCachedActionsNoSync;
-(id)_recentActionsNoSyncForCacheAtPath:(id)arg0 ;
-(id)exceptionsFoundInCacheAtPath:(id)arg0 forCandidateExceptions:(id)arg1 ;
-(id)init;
-(id)initWithCacheDirectory:(id)arg0 ;
-(id)recentActions;
-(void)_addEngagedActionNoSync:(id)arg0 toCacheAtPath:(id)arg1 ;
-(void)_addEngagedActionSetNoSync:(id)arg0 toCacheAtPath:(id)arg1 ;
-(void)_serializeAndWriteNoSyncActionSet:(id)arg0 toCacheAtPath:(id)arg1 ;
-(void)addEngagedAction:(id)arg0 ;
-(void)clearRecentEngagements;
-(void)clearRecentEngagementsFromCacheAtPath:(id)arg0 withExceptionActions:(id)arg1 ;
-(void)clearRecentHeuristicEngagementsExceptForActions:(id)arg0 ;
-(void)clearRecentMLEngagementsExceptForActions:(id)arg0 ;


@end


#endif