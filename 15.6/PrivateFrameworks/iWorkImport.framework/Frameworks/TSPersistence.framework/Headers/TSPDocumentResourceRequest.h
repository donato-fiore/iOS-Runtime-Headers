// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTRESOURCEREQUEST_H
#define TSPDOCUMENTRESOURCEREQUEST_H

@class NSSet, TSUObserverNotifier, NSString, NSProgress;
@protocol TSUResourceFileURLProvider, TSUResourceRequest, TSUResourceRequestObservable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPDocumentResourceCache.h"

@interface TSPDocumentResourceRequest : NSObject <TSUResourceFileURLProvider, TSUResourceRequest, TSUResourceRequestObservable>

 {
    TSPDocumentResourceCache *_documentResourceCache;
    NSSet *_documentResourceInfos;
    NSSet *_tags;
    TSUObserverNotifier *_observerNotifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSUResourceRequest> *_accessQueue_backingResourceRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger estimatedDownloadSize;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (readonly) NSSet *tags;


-(id)fileURLForResourceInfo:(id)arg0 ;
-(id)init;
-(id)initWithDocumentResourceInfos:(id)arg0 documentResourceCache:(id)arg1 ;
-(id)initWithDocumentResourceInfos:(id)arg0 tags:(id)arg1 documentResourceCache:(id)arg2 ;
-(id)newBackingResourceRequestForDocumentResourceInfos:(id)arg0 documentResourceCache:(id)arg1 ;
-(id)remoteURLForDocumentResourceInfo:(id)arg0 ;
-(id)urlForResourceInfo:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)performResourceAccessAsynchronouslyUsingQueue:(id)arg0 block:(id)arg1 ;
-(void)performResourceAccessUsingQueue:(id)arg0 block:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif