// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOCKSINTENTRESPONSE_H
#define CLOCKSINTENTRESPONSE_H

@class INIntentResponse, NSArray;



@interface ClocksIntentResponse : INIntentResponse

@property (copy, nonatomic) NSArray *clocks;
@property (nonatomic) NSInteger code; // ivar: _code


-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif