// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSASSERTION_H
#define BLSASSERTION_H

@class NSHashTable, NSArray, NSString;
@protocol BLSAssertionServiceResponding, BSCancellable, BSInvalidatable, BLSAssertionService;

#import <Foundation/Foundation.h>

#import "BLSAssertionIdentifier.h"
#import "BLSAssertionAcquisitionObserver.h"
#import "BLSAssertionDescriptor.h"

@interface BLSAssertion : NSObject <BLSAssertionServiceResponding, BSCancellable, BSInvalidatable>

 {
    BLSAssertionIdentifier *_identifier;
    BLSAssertionAcquisitionObserver *_acquisitionObserver;
    NSHashTable *_observers;
    os_unfair_lock_s _lock;
    BOOL _lock_paused;
    BOOL _lock_invalidated;
    NSUInteger _lock_acquisitionState;
    NSUInteger _lock_acquiredMachContinuousTime;
}


@property (readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, nonatomic) NSUInteger acquisitionState;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BLSAssertionDescriptor *descriptor; // ivar: _descriptor
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLSAssertionIdentifier *identifier;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (retain) NSObject<BLSAssertionService> *service; // ivar: _service
@property (readonly) Class superclass;


+(id)acquireWithExplanation:(id)arg0 observer:(id)arg1 attributes:(id)arg2 ;
+(void)setDefaultService:(id)arg0 ;
-(id)initWithExplanation:(id)arg0 attributes:(id)arg1 ;
-(void)acquireWithCompletion:(id)arg0 ;
-(void)acquireWithObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)restartTimeoutTimer;
-(void)serviceDidCancelWithError:(id)arg0 ;
-(void)serviceFailedToAcquireWithError:(id)arg0 ;


@end


#endif