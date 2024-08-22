// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSSENDLATERCONTEXT_H
#define MSSENDLATERCONTEXT_H


#import <Foundation/Foundation.h>


@interface MSSendLaterContext : NSObject



+(BOOL)shouldShowSendLaterDisclaimerAlertForContext:(NSUInteger)arg0 ;
+(NSUInteger)contextForCurrentDate;
+(NSUInteger)contextForDate:(id)arg0 ;
+(id)_configuredTitleForFormat:(id)arg0 date:(id)arg1 ;
+(id)_nextMondayMorning;
+(id)titleAndDateForSendLaterContext:(NSUInteger)arg0 ;


@end


#endif