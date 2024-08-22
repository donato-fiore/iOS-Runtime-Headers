// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCACHECOORDINATOR_H
#define FCCACHECOORDINATOR_H

@class NSMutableSet, NSCountedSet, NFUnfairLock, NSString, NSSet;
@protocol FCOperationThrottlerDelegate, FCCacheCoordinatorLocking, FCOperationThrottler, FCCacheCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "FCThreadSafeMutableDictionary.h"
#import "FCCacheCoordinatorFlushPolicy.h"

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate>

 {
    BOOL _flushingEnabled;
    NSMutableSet *_storedKeys;
    NSCountedSet *_interestedKeys;
    FCThreadSafeMutableDictionary *_cacheHintsByKey;
    NFUnfairLock *_interestLock;
    id<FCCacheCoordinatorLocking> *_underlyingLock;
    id<FCOperationThrottler> *_flushThrottler;
    FCCacheCoordinatorFlushPolicy *_flushPolicy;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCCacheCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *keysWithNonZeroInterest;
@property (readonly, nonatomic) NSSet *keysWithZeroInterest;
@property (readonly) Class superclass;


-(BOOL)cacheContainsKey:(id)arg0 ;
-(id)holdTokenForKey:(id)arg0 ;
-(id)holdTokenForKeys:(id)arg0 ;
-(id)holdTokensForKeys:(id)arg0 ;
-(id)init;
-(id)persistableHints;
-(void)dealloc;
-(void)didInsertKeyIntoCache:(id)arg0 ;
-(void)didInsertKeyIntoCache:(id)arg0 withLifetimeHint:(NSInteger)arg1 ;
-(void)didInsertKeysIntoCache:(id)arg0 withLifetimeHints:(id)arg1 ;
-(void)didRemoveKeysFromCache:(id)arg0 ;
-(void)enableFlushingWithPolicy:(id)arg0 ;
-(void)operationThrottlerPerformOperation:(id)arg0 ;
-(void)performCacheRead:(id)arg0 ;
-(void)performCacheWrite:(id)arg0 ;
-(void)setupWithInitialKeys:(id)arg0 ;
-(void)setupWithInitialKeys:(id)arg0 persistedHints:(id)arg1 ;


@end


#endif