// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CREATEALARMINTENTRESPONSE_H
#define CREATEALARMINTENTRESPONSE_H

@class INIntentResponse;


#import "SiriAlarm.h"

@interface CreateAlarmIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, retain) SiriAlarm *createdAlarm;
@property (nonatomic) NSInteger successCode;


-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertiesByName:(id)arg0 ;


@end


#endif