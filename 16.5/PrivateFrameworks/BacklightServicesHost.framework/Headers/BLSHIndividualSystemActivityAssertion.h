// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINDIVIDUALSYSTEMACTIVITYASSERTION_H
#define BLSHINDIVIDUALSYSTEMACTIVITYASSERTION_H

@class NSString;
@protocol BLSHSystemActivityAsserting, BLSHIndividualSystemActivityAssertionAggregator;

#import <Foundation/Foundation.h>


@interface BLSHIndividualSystemActivityAssertion : NSObject <BLSHSystemActivityAsserting>

 {
    os_unfair_lock_s _lock;
    id<BLSHIndividualSystemActivityAssertionAggregator> *_lock_aggregator;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)initWithWithIdentifier:(id)arg0 aggregator:(id)arg1 ;
-(void)acquireWithTimeout:(CGFloat)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif