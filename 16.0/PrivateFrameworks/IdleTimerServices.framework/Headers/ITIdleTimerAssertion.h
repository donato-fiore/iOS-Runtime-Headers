// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ITIDLETIMERASSERTION_H
#define ITIDLETIMERASSERTION_H

@class BSSimpleAssertion, NSString;


#import "ITIdleTimerConfiguration.h"

@interface ITIdleTimerAssertion : BSSimpleAssertion

@property (readonly, copy, nonatomic) ITIdleTimerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic, getter=_uniqueReason) NSString *uniqueReason;


-(id)_initWithConfiguration:(id)arg0 forReason:(id)arg1 invalidationBlock:(id)arg2 ;
-(id)succinctDescriptionBuilder;


@end


#endif