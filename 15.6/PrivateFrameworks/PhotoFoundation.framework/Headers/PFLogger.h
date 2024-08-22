// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLOGGER_H
#define PFLOGGER_H

@class NSArray, NSString, NSDictionary, NSSet;
@protocol PFLoggerBackend, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFLogger : NSObject

@property (retain) NSObject<PFLoggerBackend> *backend; // ivar: _backend
@property (retain) NSObject<OS_dispatch_queue> *backendAccessSerializationQueue; // ivar: _backendAccessSerializationQueue
@property BOOL backendAllowsConcurrentAccess; // ivar: _backendAllowsConcurrentAccess
@property (retain) NSArray *debuggedSubsystems; // ivar: _debuggedSubsystems
@property (retain) NSString *facilityPrefix; // ivar: _facilityPrefix
@property int logLevel; // ivar: _logLevel
@property (retain) NSDictionary *options; // ivar: _options
@property (retain) NSSet *recordedSubsystems; // ivar: _recordedSubsystems
@property (retain) NSObject<OS_dispatch_queue> *recordedSubsystemsQueue; // ivar: _recordedSubsystemsQueue
@property BOOL shouldLogToCrashReporter; // ivar: _shouldLogToCrashReporter
@property (retain) NSArray *tracedSubsystems; // ivar: _tracedSubsystems


+(BOOL)enabledForSubsystem:(id)arg0 level:(int)arg1 ;
+(BOOL)traceEnabledForSubsystem:(id)arg0 ;
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg0 ;
+(id)createDefaultLogger;
+(id)defaultLogger;
+(id)loggerWithBackend:(id)arg0 logLevel:(int)arg1 options:(id)arg2 ;
+(int)defaultLoggerLogLevel;
+(void)flushDefaultLoggerIfPresent;
+(void)initialize;
+(void)logCrashReporterMessage:(id)arg0 fromCodeLocation:(struct ? )arg1 ;
+(void)logCrashReporterMessageFromCodeLocation:(struct ? )arg0 format:(id)arg1 ;
+(void)logFromCodeLocation:(struct ? )arg0 subsystem:(id)arg1 level:(int)arg2 format:(id)arg3 ;
+(void)logFromCodeLocation:(struct ? )arg0 subsystem:(id)arg1 level:(int)arg2 format:(id)arg3 arguments:(char *)arg4 ;
+(void)recreateDefaultLogger;
+(void)setDefaultLogger:(id)arg0 ;
+(void)setupCrashReporter;
-(BOOL)enabledForSubsystem:(id)arg0 subsystems:(id)arg1 ;
-(id)description;
-(id)initWithBackend:(id)arg0 logLevel:(int)arg1 options:(id)arg2 ;
-(void)_recordSubsystem:(id)arg0 ;
-(void)flush;
-(void)logFromCodeLocation:(struct ? )arg0 subsystem:(id)arg1 level:(int)arg2 format:(id)arg3 ;
-(void)logFromCodeLocation:(struct ? )arg0 subsystem:(id)arg1 level:(int)arg2 format:(id)arg3 arguments:(char *)arg4 ;
-(void)processOptions;


@end


#endif