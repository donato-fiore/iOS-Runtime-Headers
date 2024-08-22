// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKLOGGER_H
#define SBKLOGGER_H

@class NSString, NSFileHandle, NSRegularExpression, NSLock;

#import <Foundation/Foundation.h>


@interface SBKLogger : NSObject {
    NSString *_auxPath;
    NSFileHandle *_fileHandle;
    int _pid;
    NSString *_procName;
    NSRegularExpression *_runtimeOverrideRegex;
    NSLock *_lock;
}


@property (copy, nonatomic) NSString *filter; // ivar: _filter
@property (copy, nonatomic) NSString *runtimeOverride; // ivar: _runtimeOverride


+(BOOL)debugLoggingEnabled;
+(BOOL)verboseLoggingEnabled;
+(id)sharedLogger;
-(BOOL)shouldOverrideCondition:(id)arg0 file:(id)arg1 ;
-(id)auxPath;
-(id)init;
-(void)_updateSettingsFromPreferences:(id)arg0 ;
-(void)addRuntimeOverride:(id)arg0 ;
-(void)dealloc;
-(void)logFile:(char *)arg0 lineNumber:(int)arg1 format:(id)arg2 ;
-(void)logFunction:(char *)arg0 format:(id)arg1 ;
-(void)logString:(id)arg0 ;
-(void)performLoggingBlock:(id)arg0 ;
-(void)removeRuntimeOverride:(id)arg0 ;
-(void)setAuxPath:(id)arg0 ;


@end


#endif