// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTOGGLEALARMINTENT_H
#define MTTOGGLEALARMINTENT_H

@class INIntent;


#import "MTIntentAlarm.h"

@interface MTToggleAlarmIntent : INIntent

@property (copy, nonatomic) MTIntentAlarm *alarm;
@property (nonatomic) NSInteger operation;
@property (nonatomic) NSInteger state;




@end


#endif