// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHAGGREGATESYSTEMACTIVITYASSERTION_H
#define BLSHAGGREGATESYSTEMACTIVITYASSERTION_H

@class NSHashTable, NSString;
@protocol BLSHIndividualSystemActivityAssertionAggregator, BLSHOSInterfaceProviding, BLSHSystemActivityAsserting, SWSystemActivityAcquisitionDetails;

#import <Foundation/Foundation.h>


@interface BLSHAggregateSystemActivityAssertion : NSObject <BLSHIndividualSystemActivityAssertionAggregator>

 {
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    id<BLSHSystemActivityAsserting> *_lock_systemActivityAssertion;
    id<SWSystemActivityAcquisitionDetails> *_lock_systemActivityAcquisitionDetails;
    NSHashTable *_lock_individualAssertions;
    id *_lock_acquisitionHandler;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOSInterfaceProvider:(id)arg0 ;
-(void)_lock_addSystemActivityAcquisitionHandler:(id)arg0 ;
-(void)acquireIndividualAssertion:(id)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)didAcquireSystemActivityIsActive:(BOOL)arg0 error:(id)arg1 details:(id)arg2 ;
-(void)invalidateIndividualAssertion:(id)arg0 ;


@end


#endif