// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMLOGGER_H
#define IMLOGGER_H

@class NSString, NSFileHandle, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface IMLogger : NSObject {
    NSString *_auxPath;
    NSFileHandle *_fileHandle;
    int _pid;
    NSString *_procName;
    BOOL _logTofileOnly;
    NSRegularExpression *_runtimeOverrideRegex;
}


@property (copy, nonatomic) NSString *filter; // ivar: _filter
@property (copy) NSString *runtimeOverride; // ivar: _runtimeOverride


+(id)rolledLogPrefix;
+(id)sharedLogger;
+(void)deleteRolledLogsForLogPath:(id)arg0 maxAge:(CGFloat)arg1 ;
+(void)rollLogPath:(id)arg0 maxSize:(NSUInteger)arg1 ;
-(BOOL)logTofileOnly;
-(BOOL)shouldOverrideCondition:(id)arg0 file:(id)arg1 ;
-(id)auxPath;
-(id)init;
-(void)addRuntimeOverride:(id)arg0 ;
-(void)logFile:(char *)arg0 lineNumber:(int)arg1 format:(id)arg2 ;
-(void)logFunction:(char *)arg0 format:(id)arg1 ;
-(void)logString:(id)arg0 ;
-(void)removeRuntimeOverride:(id)arg0 ;
-(void)setAuxPath:(id)arg0 ;
-(void)setLogToFileOnly:(BOOL)arg0 ;


@end


#endif