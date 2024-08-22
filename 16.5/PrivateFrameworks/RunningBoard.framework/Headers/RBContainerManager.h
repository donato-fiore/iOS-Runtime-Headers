// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBCONTAINERMANAGER_H
#define RBCONTAINERMANAGER_H

@protocol RBContainerManaging;

#import <Foundation/Foundation.h>

#import "RBPersonaManager.h"

@interface RBContainerManager : NSObject <RBContainerManaging>

 {
    *container_query_s _queryForApps;
    *container_query_s _queryForPlugins;
    OptionalUID _queryUID;
    RBPersonaManager *_personaManager;
}




-(id)_lookupContainerPathForIdentity:(id)arg0 context:(id)arg1 persona:(id)arg2 containerIdentifier:(id)arg3 retry:(BOOL)arg4 error:(*id)arg5 ;
-(id)_retryLookupAfterCacheMissForIdentity:(id)arg0 context:(id)arg1 persona:(id)arg2 containerIdentifier:(id)arg3 ;
-(id)containerPathForIdentity:(id)arg0 context:(id)arg1 persona:(id)arg2 error:(*id)arg3 ;
-(id)initWithPersonaManager:(id)arg0 ;
-(struct OptionalUID )_fetchCacheUIDChoice:(id)arg0 ;
-(void)_clearCache;
-(void)_fetchCache:(id)arg0 ;
-(void)_probeCache:(*void)arg0 withContainerIdentifier:(id)arg1 persona:(id)arg2 completionHandler:(id)arg3 ;
-(void)_probeCacheSubqueryIterationEvaluate:(struct container_object_s *)arg0 withAccummulatedState:(struct ProbeCacheSubqueryIterationAccumulatedState *)arg1 ;
-(void)dealloc;


@end


#endif