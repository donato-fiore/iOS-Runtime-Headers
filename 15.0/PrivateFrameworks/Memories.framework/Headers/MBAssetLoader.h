// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBASSETLOADER_H
#define MBASSETLOADER_H

@class NSOperationQueue, NSArray, NSMutableArray, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface MBAssetLoader : NSObject

@property NSUInteger maxConcurrentOperationCount; // ivar: _maxConcurrentOperationCount
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSArray *prefetchKeys; // ivar: _prefetchKeys
@property (retain, nonatomic) NSMutableArray *queuedOperations; // ivar: _queuedOperations
@property (retain, nonatomic) NSRecursiveLock *queuedOperationsLock; // ivar: _queuedOperationsLock


+(id)sharedLoader;
-(id)init;
// -(void)_loadAssetsFromURLs:(id)arg0 withResultHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)loadAssetsFromURLs:(id)arg0 withResultHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)resumeOperationQueue:(id)arg0 ;
-(void)suspendOperationQueue:(id)arg0 ;


@end


#endif