// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCACHINGCOUNTMANAGER_H
#define PXCACHINGCOUNTMANAGER_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXCachingCountManager : NSObject

@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(void)requestCountForAssetCollection:(id)arg0 fetchOptions:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif