// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTGETALARMSINTENTRESPONSE_H
#define MTGETALARMSINTENTRESPONSE_H

@class INIntentResponse, NSArray;



@interface MTGetAlarmsIntentResponse : INIntentResponse

@property (copy, nonatomic) NSArray *alarms;
@property (nonatomic) NSInteger code; // ivar: _code


+(id)successIntentResponseWithAlarms:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif