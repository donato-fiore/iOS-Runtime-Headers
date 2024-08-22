// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMLOGGING_H
#define IMLOGGING_H


#import <Foundation/Foundation.h>


@interface IMLogging : NSObject



+(BOOL)loggingEnabledForLevel:(int)arg0 ;
+(id)dateFormatter;
+(id)logFileDirectory;
+(id)stringForDate;
+(id)timeFormatter;
+(void)enableConsoleLoggingForLevel:(int)arg0 ;
+(void)logAtLevel:(int)arg0 type:(id)arg1 category:(id)arg2 format:(id)arg3 ;
+(void)logAtLevel:(int)arg0 type:(id)arg1 category:(id)arg2 format:(id)arg3 arguments:(char *)arg4 ;
+(void)logAtLevel:(int)arg0 type:(id)arg1 category:(id)arg2 insertProcessInfo:(BOOL)arg3 format:(id)arg4 ;
+(void)logAtLevel:(int)arg0 type:(id)arg1 category:(id)arg2 insertProcessInfo:(BOOL)arg3 format:(id)arg4 arguments:(char *)arg5 ;
+(void)logAtLevel:(int)arg0 type:(id)arg1 category:(id)arg2 insertProcessInfo:(BOOL)arg3 simpleLogString:(id)arg4 ;
+(void)logAtLevel:(int)arg0 type:(id)arg1 category:(id)arg2 insertProcessInfo:(BOOL)arg3 simpleLogString:(id)arg4 format:(id)arg5 arguments:(char *)arg6 time:(NSUInteger)arg7 ;
+(void)logAtLevel:(int)arg0 type:(id)arg1 category:(id)arg2 insertProcessInfo:(BOOL)arg3 simpleLogString:(id)arg4 time:(NSUInteger)arg5 ;
+(void)logString:(id)arg0 toFolder:(id)arg1 toFileNamed:(id)arg2 ;


@end


#endif