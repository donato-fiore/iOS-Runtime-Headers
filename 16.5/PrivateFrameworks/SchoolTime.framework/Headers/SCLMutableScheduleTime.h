// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLMUTABLESCHEDULETIME_H
#define SCLMUTABLESCHEDULETIME_H



#import "SCLScheduleTime.h"

@interface SCLMutableScheduleTime : SCLScheduleTime

@property (nonatomic) NSUInteger hour;
@property (nonatomic) NSUInteger minute;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif