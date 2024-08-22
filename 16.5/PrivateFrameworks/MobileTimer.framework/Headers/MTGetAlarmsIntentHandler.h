// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTGETALARMSINTENTHANDLER_H
#define MTGETALARMSINTENTHANDLER_H

@class NSString;
@protocol MTGetAlarmsIntentHandling;


#import "MTAlarmIntentHandler.h"

@interface MTGetAlarmsIntentHandler : MTAlarmIntentHandler <MTGetAlarmsIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)confirmGetAlarms:(id)arg0 completion:(id)arg1 ;
-(void)handleGetAlarms:(id)arg0 completion:(id)arg1 ;


@end


#endif