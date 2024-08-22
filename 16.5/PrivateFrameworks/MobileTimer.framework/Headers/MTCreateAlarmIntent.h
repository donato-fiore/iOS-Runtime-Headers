// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCREATEALARMINTENT_H
#define MTCREATEALARMINTENT_H

@class INIntent, NSDateComponents, NSString, NSArray, INObject;



@interface MTCreateAlarmIntent : INIntent

@property (copy, nonatomic) NSDateComponents *dateComponents;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *repeatSchedule;
@property (nonatomic) NSInteger requiresAppLaunch;
@property (copy, nonatomic) INObject *time;




@end


#endif