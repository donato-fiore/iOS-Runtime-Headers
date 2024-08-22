// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCREATEALARMINTENTRESPONSE_H
#define MTCREATEALARMINTENTRESPONSE_H

@class INIntentResponse;


#import "MTIntentAlarm.h"

@interface MTCreateAlarmIntentResponse : INIntentResponse

@property (copy, nonatomic) MTIntentAlarm *alarm;
@property (nonatomic) NSInteger code; // ivar: _code


+(id)successIntentResponseWithAlarm:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif