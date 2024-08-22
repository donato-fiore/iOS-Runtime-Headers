// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNSPROCESSINFOBACKGROUNDASSERTION_H
#define WFNSPROCESSINFOBACKGROUNDASSERTION_H

@protocol OS_dispatch_semaphore;


#import "WFBackgroundAssertion.h"

@interface WFNSProcessInfoBackgroundAssertion : WFBackgroundAssertion

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


+(id)backgroundAssertionWithName:(id)arg0 expirationHandler:(id)arg1 ;
-(id)initWithName:(id)arg0 expirationHandler:(id)arg1 ;
-(void)end;


@end


#endif