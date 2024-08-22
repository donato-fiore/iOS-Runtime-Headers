// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFASSERTIONCOORDINATOR_H
#define AFASSERTIONCOORDINATOR_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol AFInvalidating, OS_dispatch_queue, AFAssertionCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface AFAssertionCoordinator : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFAssertionCoordinatorDelegate> *_delegate;
    uint8_t _numberOfAssertions;
    NSMutableDictionary *_assertionsByUUID;
    uint8_t _numberOfActiveAssertions;
    NSMutableSet *_activeAssertionUUIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(NSUInteger)numberOfActiveAssertions;
-(NSUInteger)numberOfPendingAndActiveAssertions;
-(id)acquireRelinquishableAssertionWithContext:(id)arg0 relinquishmentHandler:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(void)_activateAssertionWithUUID:(id)arg0 ;
-(void)_addAssertion:(id)arg0 ;
-(void)_deactivateAndRemoveAssertionWithUUID:(id)arg0 context:(id)arg1 error:(id)arg2 options:(NSUInteger)arg3 ;
-(void)_invalidate;
-(void)barrier:(id)arg0 ;
-(void)dealloc;
-(void)getActiveAssertionsWithCompletion:(id)arg0 ;
-(void)getPendingAndActiveAssertionsWithCompletion:(id)arg0 ;
-(void)invalidate;
// -(void)relinquishAsertionsPassingTest:(id)arg0 context:(unk)arg1  ;
// -(void)relinquishAsertionsPassingTest:(id)arg0 error:(unk)arg1  ;
-(void)relinquishAssertionWithUUID:(id)arg0 context:(id)arg1 options:(NSUInteger)arg2 ;
-(void)relinquishAssertionWithUUID:(id)arg0 error:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif