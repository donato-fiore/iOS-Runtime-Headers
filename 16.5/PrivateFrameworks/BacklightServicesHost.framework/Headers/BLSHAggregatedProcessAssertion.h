// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHAGGREGATEDPROCESSASSERTION_H
#define BLSHAGGREGATEDPROCESSASSERTION_H

@class NSString, RBSProcessIdentity;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BLSHAggregateProcessAssertion.h"

@interface BLSHAggregatedProcessAssertion : NSObject <BSInvalidatable>

 {
    BLSHAggregateProcessAssertion *_aggregate;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity; // ivar: _processIdentity
@property (readonly) Class superclass;


-(id)createRBSAssertion;
-(id)initWithExplanation:(id)arg0 processIdentity:(id)arg1 duration:(CGFloat)arg2 ;
-(void)acquireWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif