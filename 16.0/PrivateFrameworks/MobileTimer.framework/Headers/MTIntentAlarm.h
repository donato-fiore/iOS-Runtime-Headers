// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTINTENTALARM_H
#define MTINTENTALARM_H

@class INObject, NSDateComponents, NSString, NSArray;



@interface MTIntentAlarm : INObject

@property (copy, nonatomic) NSDateComponents *dateComponents;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *repeatSchedule;




@end


#endif