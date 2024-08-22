// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIASSETQUEUE_H
#define AMSUIASSETQUEUE_H

@class NSString, NSMutableDictionary, NSCountedSet, NSOperationQueue;

#import <Foundation/Foundation.h>


@interface AMSUIAssetQueue : NSObject

@property (nonatomic) NSInteger maxConcurrentOperationCount;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *pendingOperations; // ivar: _pendingOperations
@property (retain, nonatomic) NSCountedSet *priorityCounts; // ivar: _priorityCounts
@property (nonatomic) NSInteger qualityOfService;
@property (nonatomic) os_unfair_lock_s stateLock; // ivar: _stateLock
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (retain, nonatomic) NSOperationQueue *underlyingQueue; // ivar: _underlyingQueue


-(id)init;
-(id)operationWithKey:(id)arg0 ;
-(void)_addObserverForOperation:(id)arg0 ;
-(void)_decrementCountAt:(NSInteger)arg0 ;
-(void)_didBeginFetchingAssets;
-(void)_didFetchAllAssetsAtPriority:(NSInteger)arg0 ;
-(void)_didFetchAssetWithKey:(id)arg0 producingImage:(id)arg1 orError:(id)arg2 ;
-(void)_didFinishFetchingAllAssets;
-(void)_incrementCountAt:(NSInteger)arg0 ;
-(void)_operationDidCancel:(id)arg0 ;
-(void)_operationDidChangePriority:(id)arg0 ;
-(void)_prepareToAddOperation:(id)arg0 withKey:(id)arg1 ;
-(void)_removeObserverForOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 withKey:(id)arg1 ;
-(void)dealloc;


@end


#endif