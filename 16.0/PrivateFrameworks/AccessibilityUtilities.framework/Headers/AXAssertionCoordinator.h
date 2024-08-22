// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXASSERTIONCOORDINATOR_H
#define AXASSERTIONCOORDINATOR_H

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, AXAssertionCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface AXAssertionCoordinator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue; // ivar: _assertionQueue
@property (retain, nonatomic) NSHashTable *assertions; // ivar: _assertions
@property (weak, nonatomic) NSObject<AXAssertionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(id)acquireAssertionWithReason:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(void)_startTrackingPoorMansAssertion:(id)arg0 ;
-(void)_stopTrackingPoorMansAssertion:(id)arg0 ;
-(void)dealloc;


@end


#endif