// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSHIGHBATTERYDRAINUTIL_H
#define _OSHIGHBATTERYDRAINUTIL_H


#import <Foundation/Foundation.h>


@interface _OSHighBatteryDrainUtil : NSObject



+(BOOL)isWeekday:(id)arg0 ;
+(CGFloat)hourFromDate:(id)arg0 ;
+(CGFloat)maxOf:(id)arg0 ;
+(CGFloat)meanOf:(id)arg0 ;
+(CGFloat)percentileOf:(CGFloat)arg0 forDistribution:(id)arg1 ;
+(CGFloat)timeInSeconds:(id)arg0 ;
+(id)dateFromDate:(id)arg0 ;


@end


#endif