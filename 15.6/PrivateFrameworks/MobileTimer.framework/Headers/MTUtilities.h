// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTUTILITIES_H
#define MTUTILITIES_H


#import <Foundation/Foundation.h>


@interface MTUtilities : NSObject



+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg0 withTimeZoneOffset:(NSInteger)arg1 timeZoneAbbreviation:(id)arg2 spaceBeforeTimeDesignator:(BOOL)arg3 hoursOnly:(BOOL)arg4 numericOnly:(BOOL)arg5 ;
+(id)widgetOverrideDate;
+(id)widgetURL;
+(void)logMessage:(id)arg0 ;


@end


#endif