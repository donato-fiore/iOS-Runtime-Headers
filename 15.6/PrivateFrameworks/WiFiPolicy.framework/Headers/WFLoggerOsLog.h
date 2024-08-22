// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOGGEROSLOG_H
#define WFLOGGEROSLOG_H

@class NSMutableDictionary, NSString;
@protocol OS_os_log;


#import "WFLoggerBase.h"

@interface WFLoggerOsLog : WFLoggerBase {
    *__CFString _subSystem;
    *__CFString _category;
    NSObject<OS_os_log> *_osLog;
    NSMutableDictionary *_profileSettings;
    NSUInteger _currentLevel;
    NSUInteger _logLifeSpanInDays;
}


@property (readonly, copy, getter=getProfileFilePath) NSString *profileFilePath;


+(unsigned char)convertWFLogLevelToOsLogLevel:(NSUInteger)arg0 ;
+(void)WFLogOsLog:(NSUInteger)arg0 cfStrMsg:(struct __CFString *)arg1 ;
-(NSUInteger)getLogLevelEnable;
-(NSUInteger)getLogLevelPersist;
-(NSUInteger)getLogPrivacy;
-(NSUInteger)getMaxFileSizeInMB;
-(NSUInteger)mapLogLevelStr:(id)arg0 ;
-(id)formatOsLogProfile:(id)arg0 levelEnabled:(id)arg1 levelPersist:(id)arg2 ttlDays:(id)arg3 privacy:(id)arg4 ;
-(id)getLevelEnabled:(id)arg0 category:(id)arg1 ;
-(id)getLevelPersist:(id)arg0 category:(id)arg1 ;
-(id)getLogLifespanInDays;
-(id)getPrivacy:(id)arg0 category:(id)arg1 ;
-(id)getTtlDays:(id)arg0 category:(id)arg1 ;
-(id)init:(id)arg0 subSystem:(struct __CFString *)arg1 category:(struct __CFString *)arg2 logLifespanInDays:(NSUInteger)arg3 logLevel:(NSUInteger)arg4 logPrivacy:(NSUInteger)arg5 dispatchQueue:(id)arg6 ;
-(id)mapLogLevelEnum:(NSUInteger)arg0 ;
-(unsigned char)convertLogLevel:(NSUInteger)arg0 ;
-(unsigned char)doesProfileExist:(id)arg0 ;
-(unsigned char)setLevelEnabled:(id)arg0 category:(id)arg1 value:(id)arg2 ;
-(unsigned char)setLevelPersist:(id)arg0 category:(id)arg1 value:(id)arg2 ;
-(unsigned char)setPrivacy:(id)arg0 category:(id)arg1 value:(id)arg2 ;
-(unsigned char)setTtlDays:(id)arg0 category:(id)arg1 value:(id)arg2 ;
-(unsigned char)writeDictToFile:(id)arg0 idStr:(id)arg1 ;
-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 cfStrMsg:(struct __CFString *)arg2 ;
-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 message:(char *)arg2 valist:(char *)arg3 ;
-(void)createOsLogProfile;
-(void)dealloc;
-(void)setLogLevelEnable:(NSUInteger)arg0 ;
-(void)setLogLevelPersist:(NSUInteger)arg0 ;
-(void)setLogLifespanInDays:(id)arg0 ;
-(void)setLogPrivacy:(NSUInteger)arg0 ;
-(void)setMaxSizeInKb:(NSUInteger)arg0 ;
-(void)stopWatchingLogFile;


@end


#endif