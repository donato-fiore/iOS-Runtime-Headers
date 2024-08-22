// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIRESOURCELOADER_H
#define SKUIRESOURCELOADER_H

@class NSMutableDictionary, NSMapTable, NSCache, NSString, NSOperationQueue;
@protocol NSCacheDelegate, SKUIResourceLoaderDelegate;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIResourceLoader : NSObject <NSCacheDelegate>

 {
    NSMutableDictionary *_operationsByRequestID;
    NSMapTable *_requestsByCacheKey;
    NSCache *_resourcesByRequestID;
    BOOL _inBackground;
    NSInteger _requestCountMap;
}


@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIResourceLoaderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSOperationQueue *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) NSInteger resourceCacheLimit;
@property (readonly) Class superclass;


-(BOOL)isIdleForReason:(NSInteger)arg0 ;
-(BOOL)loadResourceWithRequest:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)trySetReason:(NSInteger)arg0 forRequestWithIdentifier:(NSUInteger)arg1 ;
-(NSInteger)_qualityOfService;
-(NSInteger)_queuePriorityForLoadReason:(NSInteger)arg0 ;
-(id)cachedResourceForRequestIdentifier:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithClientContext:(id)arg0 ;
-(id)initWithOperationQueue:(id)arg0 ;
-(id)initWithOperationQueue:(id)arg0 clientContext:(id)arg1 ;
-(id)requestIdentifierForCacheKey:(id)arg0 ;
-(void)_finishLoadForRequest:(id)arg0 withResource:(id)arg1 ;
-(void)_reprioritizeOperations;
-(void)_sendDidBeginLoadingIfNecessary;
-(void)_sendDidIdleIfNecessary;
-(void)_sendDidLoadAllForReason:(NSInteger)arg0 ;
-(void)_updateLoadReason:(NSInteger)arg0 forOperation:(id)arg1 ;
-(void)addResource:(id)arg0 forRequestIdentifier:(NSUInteger)arg1 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)cancelAllRequests;
-(void)cancelRequestWithIdentifier:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enterBackground;
-(void)enterForeground;
-(void)removeAllCachedResources;
-(void)setReason:(NSInteger)arg0 forRequestWithIdentifier:(NSUInteger)arg1 ;


@end


#endif