// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBKSBACKGROUNDASSERTION_H
#define WFBKSBACKGROUNDASSERTION_H

@class BKSProcessAssertion, NSString;


#import "WFBackgroundAssertion.h"

@interface WFBKSBackgroundAssertion : WFBackgroundAssertion

@property (retain, nonatomic) BKSProcessAssertion *assertion; // ivar: _assertion
@property (copy, nonatomic) id *expirationHandler; // ivar: _expirationHandler
@property (retain, nonatomic) id *observer; // ivar: _observer
@property (readonly, copy, nonatomic) NSString *taskName; // ivar: _taskName


+(id)backgroundAssertionWithName:(id)arg0 expirationHandler:(id)arg1 ;
-(id)initWithName:(id)arg0 expirationHandler:(id)arg1 ;
-(void)end;


@end


#endif