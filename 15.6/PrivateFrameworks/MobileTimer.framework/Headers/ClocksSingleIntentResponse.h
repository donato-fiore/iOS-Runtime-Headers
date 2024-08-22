// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLOCKSSINGLEINTENTRESPONSE_H
#define CLOCKSSINGLEINTENTRESPONSE_H

@class INIntentResponse, NSArray;



@interface ClocksSingleIntentResponse : INIntentResponse

@property (copy, nonatomic) NSArray *clocks;
@property (nonatomic) NSInteger code; // ivar: _code


-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif