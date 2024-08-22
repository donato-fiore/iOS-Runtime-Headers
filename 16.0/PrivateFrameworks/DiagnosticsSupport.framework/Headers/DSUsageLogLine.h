// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSUSAGELOGLINE_H
#define DSUSAGELOGLINE_H

@class NSString;


#import "DSLogLine.h"

@interface DSUsageLogLine : DSLogLine

@property (readonly, nonatomic) int batteryLevel;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL isOffPower;
@property (readonly, nonatomic) BOOL isOnPower;
@property (readonly, nonatomic) BOOL isReset;
@property (readonly, nonatomic) int standbyTime;
@property (readonly, nonatomic) int usageTime;




@end


#endif