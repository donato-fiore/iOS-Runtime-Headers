// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAPPEXTENSIONASSERTION_H
#define HDAPPEXTENSIONASSERTION_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue, HDAppExtensionAssertionDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDAppExtensionAssertion : NSObject {
    BOOL _pendingAssertion;
    BOOL _invalidated;
    os_unfair_lock_s _lock;
    HDProfile *_profile;
    NSMutableDictionary *_pendingAssertionCompletions;
    NSMutableDictionary *_pendingDataTypeCodesToAnchors;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_graceTimer;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _lastAssertionAttempt;
    NSInteger _connectionErrorCount;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (weak, nonatomic) NSObject<HDAppExtensionAssertionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat nextAssertionAttempt;
@property (readonly, nonatomic) BOOL shouldAssert;
@property (copy, nonatomic) id *unitTest_errorCountDidIncrement; // ivar: _unitTest_errorCountDidIncrement
@property (copy, nonatomic) id *unitTest_extensionWillTimeout; // ivar: _unitTest_extensionWillTimeout
@property (nonatomic) BOOL unitTest_timersWithShortTimeout; // ivar: _unitTest_timersWithShortTimeout


-(BOOL)_unitTest_invalidated;
-(CGFloat)_unitTest_lastAssertionAttempt;
-(NSInteger)_unitTest_connectionErrorCount;
-(NSUInteger)_unitTest_pendingAssertionCompletionsCount;
-(id)_unitTest_pendingDataTypeCodesToAnchors;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 profile:(id)arg1 queue:(id)arg2 ;
-(void)assertAndUpdateWithCompletion:(id)arg0 ;
-(void)extendForDataType:(NSInteger)arg0 anchor:(id)arg1 completion:(id)arg2 ;
-(void)invalidateForDataType:(NSInteger)arg0 anchor:(id)arg1 ;


@end


#endif