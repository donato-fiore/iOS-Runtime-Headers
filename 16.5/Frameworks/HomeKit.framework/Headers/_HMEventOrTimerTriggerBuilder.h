// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMEVENTORTIMERTRIGGERBUILDER_H
#define _HMEVENTORTIMERTRIGGERBUILDER_H

@class NSArray;


#import "HMTriggerBuilder.h"

@interface _HMEventOrTimerTriggerBuilder : HMTriggerBuilder {
    NSUInteger _recurrenceDays;
}


@property (nonatomic) NSUInteger recurrenceDays;
@property (copy, nonatomic) NSArray *recurrences;


-(void)updateRecurrences:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif