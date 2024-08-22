// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSTERMINATIONASSERTION_H
#define BKSTERMINATIONASSERTION_H

@class NSString;


#import "BKSAssertion.h"
#import "BKSTerminationContext.h"

@interface BKSTerminationAssertion : BKSAssertion

@property (readonly, copy, nonatomic) BKSTerminationContext *context; // ivar: _context
@property (readonly, nonatomic) NSUInteger efficacy; // ivar: _efficacy
@property (readonly, copy, nonatomic) NSString *targetBundleIdentifier; // ivar: _bundleIdentifier


-(BOOL)acquire;
-(NSUInteger)_bksErrorForRBSRequestError:(NSUInteger)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 efficacy:(NSUInteger)arg1 name:(id)arg2 context:(id)arg3 withHandler:(id)arg4 ;
-(id)initWithBundleIdentifier:(id)arg0 efficacy:(NSUInteger)arg1 name:(id)arg2 withHandler:(id)arg3 ;
-(void)invalidate;


@end


#endif