// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSCOMPOUNDASSERTION_H
#define BSCOMPOUNDASSERTION_H

@class NSString, NSMutableOrderedSet, NSSet, NSOrderedSet;
@protocol BSCompoundAssertionState, BSInvalidatable, OS_os_log;

#import <Foundation/Foundation.h>


@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable>

 {
    NSString *_identifierPrefix;
    os_unfair_lock_s _syncLock;
    BOOL _syncLock_invalid;
    id *_syncLock_block;
    os_unfair_lock_s _dataLock;
    NSMutableOrderedSet *_dataLock_acquisitionRecords;
    NSObject<OS_os_log> *_dataLock_log;
}


@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSSet *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSObject<OS_os_log> *log;
@property (readonly) NSOrderedSet *orderedContext;
@property (readonly) NSOrderedSet *orderedReasons;
@property (readonly) NSSet *reasons;
@property (readonly) Class superclass;


+(id)assertionWithIdentifier:(id)arg0 ;
+(id)assertionWithIdentifier:(id)arg0 stateDidChangeHandler:(id)arg1 ;
+(id)new;
-(id)acquireForReason:(id)arg0 ;
-(id)acquireForReason:(id)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif