// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPRESOURCECONTEXT_H
#define TSPRESOURCECONTEXT_H

@class NSHashTable, NSMapTable, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPDocumentResourceCache.h"
#import "TSPDocumentResourceRegistry.h"
#import "TSPDocumentResourceLegacyRegistry.h"

@interface TSPResourceContext : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_progressAggregationQueue;
    NSHashTable *_accessQueue_resourceRequests;
    NSMapTable *_accessQueue_resourceRequestTable;
}


@property (readonly, nonatomic) TSPDocumentResourceCache *documentResourceCache; // ivar: _documentResourceCache
@property (readonly, nonatomic) TSPDocumentResourceRegistry *documentResourceRegistry; // ivar: _documentResourceRegistry
@property (readonly) NSSet *resourceRequests;
@property (readonly, nonatomic) TSPDocumentResourceLegacyRegistry *sageDocumentResourceLegacyRegistry; // ivar: _sageDocumentResourceLegacyRegistry
@property (readonly, nonatomic) TSPDocumentResourceLegacyRegistry *tangierDocumentResourceLegacyRegistry; // ivar: _tangierDocumentResourceLegacyRegistry


-(id)init;
-(id)initWithDocumentResourceCache:(id)arg0 documentResourceRegistry:(id)arg1 sageDocumentResourceLegacyRegistry:(id)arg2 tangierDocumentResourceLegacyRegistry:(id)arg3 ;
-(id)newDataStorageForDocumentResourceInfo:(id)arg0 createResourceRequestIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(id)performResourceAccessUsingQueue:(id)arg0 block:(id)arg1 ;
-(void)accessQueue_addResourceRequest:(id)arg0 ;
-(void)addResourceRequests:(id)arg0 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeResourceRequests:(id)arg0 ;


@end


#endif